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
* Any person who want to contact or deliver content to end user. 

## What:
*  An HTTP server can be accessed through the domain names of the websites it stores, and it delivers the content of these hosted websites to the end user's device.

## When:
* At the most basic level, whenever a browser needs a file that is hosted on a web server, the browser requests the file via HTTP. 

## Where:
* it is used to not only fetch hypertext documents, but also images and videos or to post content to servers, like with HTML form results.
* HTTP can also be used to fetch parts of documents to update Web pages on demand.

## How:
* the HTTP server is responsible for processing and answering incoming requests. 
*Upon receiving a request, an HTTP server first checks if the requested URL matches an existing file. If so, the web server sends the file content back to the browser. 
*If not, an application server builds the necessary file.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | 
| ----- | ----- | ------- | 
| HR01 | Winsock should be initialized | Techincal |  
| HR02 | Socket should be created | Techincal | 
| HR03 | Server should able to connect | Techincal | 
| HR04 | Data should be sent and received| Techincal | 
| HR05 | Socket should be closed | Techincal |


##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented) |
| ------ | --------- | ------ | ----- |
| LR01 |Initialization is done by WSAstartup function | HR01 | NULL |
| LR02 | Socket should be created after socket function| HR02 | NULL |
| LR03 | Server connection now should work after making separation function for it | HR03 | NULL |
| LR04 | Data now sent with the help of send function | HR04 | NULL |
| LR05 | Socket closure by making closesocket | HR05 | NULL |




