import tensorflow as tf

# Create a function to unzip file into current working directory.

import zipfile

def unzip_file(filename):
  """
  Unzips filename into the current working directory.

  Args:
    filename (str): a filepath to a target zip folder to be unzipped.
  """
  zip_ref = zipfile.ZipFile(filename, "r") # read mode (check write, append and exclusive modes)
  zip_ref.extractall()
  zip_ref.close()
  return 1

import datetime

def create_tensorboard_callback(dir_name, experiment_name):
  """
  It creates a tensorboard callback instand to store log files.

  Store log files with filepath:
    "dir_name/experiment_name/current_datetime/"

  Args:
    dir_name: target directory to store TensorBoard log files
    experiment_name: name of experiment directory
  """
  log_dir = dir_name + "/" + experiment_name + "/" + datetime.datetime.now().strftime("%Y%m%d-%H%M%S")
  tensorboard_callback = tf.keras.callbacks.TensorBoard(log_dir=log_dir)
  print(f"Saving TensorBoard log files into: ", log_dir)
  return tensorboard_callback

# Walk through an image classification directory and find out how many files (images)

import os

def walk_in_dir(dir_path):
  """
  Walks through dir_path returning its contents.

  Args:
    dir_path (str): target_directory

  Returns:
    A print out of:
     - number of subdirectories in dir_path
     - number of images (files) in each subdirectory
     - name of each subdirectory
  """
  for dir_path, dir_names, file_names in os.walk(dir_path):
    print(f"There are {len(dir_names)} of directories and {len(file_names)} images in {dir_path}.")

import matplotlib.pyplot as plt

def plot_loss_curves(history):
  """
  Returns seperate loss curves for training and validation metrics

  Args:
    history: TensorFlow model History object.
  """

  loss = history.history["loss"]
  val_loss = history.history["val_loss"]

  acc = history.history["accuracy"]
  val_acc = history.history["val_accuracy"]

  epochs = range(len(history.history["loss"]))

  # Plot loss

  plt.plot(epochs, loss, label="Training loss")
  plt.plot(epochs, val_loss, label="validation_loss")
  plt.legend()
  plt.xlabel("Number of epochs")
  plt.ylabel("Loss")
  plt.title("Loss Graph")
  plt.show()


  plt.plot(epochs, acc, label="Training Accuracy")
  plt.plot(epochs, val_acc, label="Validation Accuracy")
  plt.legend()
  plt.xlabel("Number of epochs")
  plt.ylabel("Accuracy")
  plt.title("Accuracy Graph")
  plt.show()
