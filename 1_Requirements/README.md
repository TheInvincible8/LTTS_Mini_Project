# Requirements
## Introduction
* In machine learning, perceptron is an algorithm for supervised learning of binary classifiers, the basic Perceptron algorithm is used for binary classification and every training model should fall into these categories. The basic unit in Neuron is called the Perceptron.
* This project was chosen for better understanding of neural networks. We will try to build a perceptron which will be able to learn basic logic gates like OR, AND, XOR.

## Research
### Features of Perceptron
 Perceptron is a single unit of Neural Networks and have the ability to learn by themselves and produce the output that is not limited to single input. We will be building a perceptron from scratch. It will contain following features:
* Step activation function.  
* optimizer for optimiziting weights through back propagation.
* Error function to compute the error.
* Dataset containing truth tables of AND, OR, XOR gates.
* Training and testing of the algorithm.


### Benefits
Artificial neural networks have ability to learn complex relationships between non-linear data. Implementing neural nets from scratch in **C programming language** will give better understanding of **Artificial Intelligence** and can be implemented in **embedded systems**



## Defining Our System

### Explanation:
* Working of a perceptron
    * Initilize a dataset with required output
    * Build a single layer neural network
    * Randomly Initilize the weights for each node
    * Write an activation function to make predicitions
    * Calculate the error
    * Backpropagate and updates the weights
    * Make predictions
   

* Sample dataset for OR gate
   |X|Y|output|
   |---|---|---|
   |0|0|0|
   |0|1|1|
   |1|0|1|
   |1|1|1|
* Perceptron will be trained on X and Y and will predict the output.   

## SWOT ANALYSIS
![SWOT Analysis](https://github.com/TanujSharma369/Perceptron/blob/master/6_ImagesAndVideos/swot.png)

# 4W&#39;s and 1&#39;H

## Who:
* Small size datasets can be trained

## What:
* Perceptron can predict the correct output based on the dataset.

## When:
* perceptron can be used when we need to build intelligent systems.

## Where:
* It can be used in Medical, embedded systems, agriculture and farming, security, Sports analytics, etc. 

## How:
* Perceptron works by combining data with fast and intelligent algorithms.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | 
| ----- | ----- | ------- | 
| HR01 | Dataset of OR, AND, XOR will be provided | Techincal |  
| HR02 | Perceptron should be able to learn by itself | Techincal | 
| HR03 | Single algorithm should work for different datasets | Techincal | 
| HR04 | The learning accuracy should be 100%| Techincal | 
| HR05 | The predicting accuracy should be 100% | Techincal |
| HR06 | Algorith should be fast enough | Techincal |
| HR07 | After learning we should be able to save the weights | Techincal |

##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented) |
| ------ | --------- | ------ | ----- |
| LR01 |Dataset for logic gates will be created manually using structure | HR01 | NULL |
| LR02 | algorithm should be able to calculate the error properly to optimize the weights | HR02 | NULL |
| LR03 | The activation function should work well for all kinds of binary dataset | HR03 | NULL |
| LR04 | Weights should be reinitlized unitl algorithm learns to predict correct output | HR04 | NULL |
| LR05 | After learning through provided dataset algorithm should be able to predict for different data | HR05 | NULL |
| LR06 | Weights should be saved so that it can be used in future applications | HR07 | NULL |



