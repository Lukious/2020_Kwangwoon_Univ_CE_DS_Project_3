# 2020_Kwangwoon_Univ_CE_DS_Project_3
Please read Update Notes regularly before proceeding with the task and check for any updates before proceeding.

Key questions and answers will be update on the Issues page.

### Practical Class Documents
None

## Update Notes
### 20201102 ver1 
Assignment Spec Documents has been updated

### 20201118 ver 1.1
Update skeleton code for 'Queue' data structure (It doesn't matter if you don't follow the structure of that code)

Fix minor typo on proposal and skeleton codes

### 20201118 ver 1.2
Update 'UPDATE' Commands spec. [No need to be print updated graph infomation, updated value will be evaluate by PRINT command]

## How to Clone Repository
```
sudo apt-get install git
git clone https://github.com/developer0hye/2020_Kwangwoon_Univ_CE_DS_Project_3.git
```
## How can I check whether my code is correct?
The Possible Result will be update last week of project deadlines

## Major QA List
| Number | Q | A |
| --- | --- | --- |
| 1 | The result of my code is different from the example. | The example is to represent the output shape of the code's results and is not representative of the code's operational results. |
| 2 | Should the Rabin Carp algorithm make an exception to the Collision problem caused by a hash value collision? | There is no need to try to resolve the issue separately because the probability of occurrence is not high. However, we will implement the process and reflect it as a big plus in the evaluation. |
| 3 | Should the MOD method be applied for accurately reflect the matching of hash values? | Similarly, you don't have to proceed with this algorithm because it has a low probability of occurrence and a condition that can be reliably compared in an overflow situation. However, if you implement code to solve this problem reflect it as an additional score factor in the evaluation. |
| 4 | Should I compare with space(' ') when I proceed with string comparison? | Yes, of course. The blank character also has an Ascii code value, so you can make a comparison based on that value. (However, you do not need to consider space when comparing **only words** cases.) |
#### For more QA list, you can Check ISSUE tab on the top of this documents.


## About Implementation of the Program
In implementing the program, you can modify the Skeleton Code freely.

The function's name and factor data format and class structure are also freely changeable.

However, please check the requirements in the assignment specification carefully.

Please note that the Skeleton Code is for reference only and does not guarantee a successful build of the project.
