# Requirements
## Introduction
* Sockets are the fundamental "things" behind any kind of network communications done by your computer.
* This projects makes a http sever using Winsock , The windows api to socket programming is called winsock.

## Research
### Features of Http Server
 In Transport Layer, we mainly use Transmission Control Protocol TCP to implement HTTP server
* ws2_32.lib is the library file to be linked with the program to be able to use winsock functions.  
* The WSAStartup function is used to start or initialise winsock library
* The socket function is used to create a socket.
* Server connection functio to connect with server.


### Benefits
When you type www.google.com in your web browser, it opens a socket and connects to google.com to fetch the page and show it to you.
Same with any chat client like gtalk or skype. Any network communication goes through a socket.



## Defining Our System

### Explanation:
* Working of a Http Server
    * Initialising Winsock
    * Creating a socket
    * Connect to a Server
    * Sending Data
    * Receiving Data
    * Close socket

 

## SWOT ANALYSIS
![SWOT Analysis](https://github.com/TheInvincible8/LTTS_Mini_Project/blob/master/6_ImagesAndVideos/SWOT.png)

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



