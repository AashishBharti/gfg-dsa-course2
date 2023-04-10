# Import necessary libraries
import tensorflow as tf
from tensorflow import keras
import numpy as np
import matplotlib.pyplot as plt

# Load the Fashion MNIST dataset
fashion_mnist = keras.datasets.fashion_mnist
(train_images, train_labels), (test_images, test_labels) = fashion_mnist.load_data()

# Define class names
class_names = ['T-shirt/top', 'Trouser', 'Pullover', 'Dress', 'Coat', 
               'Sandal', 'Shirt', 'Sneaker', 'Bag', 'Ankle boot']


# Preprocess the data
train_images = train_images / 255.0
test_images = test_images / 255.0


# Build the model
model = keras.Sequential([
    keras.layers.Flatten(input_shape=(28, 28)),
    keras.layers.Dense(128, activation='relu'),
    keras.layers.Dense(10)
])


# Compile the model
model.compile(optimizer='adam',
              loss=tf.keras.losses.SparseCategoricalCrossentropy(from_logits=True),
              metrics=['accuracy'])


# Train the model
model.fit(train_images, train_labels, epochs=10)


# Evaluate the model
test_loss, test_acc = model.evaluate(test_images, test_labels, verbose=2)
print('\nTest accuracy:', test_acc)


# Make predictions
predictions = model.predict(test_images)


# Plot the first 10 test images, their predicted label, and the true label
fig, axs = plt.subplots(1, 10, figsize=(15, 15))
fig.subplots_adjust(hspace = .5, wspace=.5)
axs = axs.ravel()
for i in range(10):
    axs[i].imshow(test_images[i])
    axs[i].set_title("Predicted:{}\nTrue:{}".format(class_names[np.argmax(predictions[i])],class_names[test_labels[i]]))
    axs[i].axis('off')
plt.show()