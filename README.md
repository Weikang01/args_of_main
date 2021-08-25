# Simple note for args in main()
The code of this project is fairly simple, the goal is to explain what are the three input arguments the main function (or any custom name for the entry point) can take and how to use them.
```C++
int main(int argc, char* argv[], char*envp[])
```
* **argc:** AKA argument count, it tells you how many argument the executable program took from the user.
```bat
>pragram.exe  :: This command contains one argument which is the name of the program itself 
>pragram.exe hello world :: This command contains three arguments, program name: "pragram.exe", "hello" and "world", which separated with spaces 
```
* **argv[]:** is the array of strings representing command-line arguments entered by the user of the program.
* **envp[]:** or "environmental parameters", is an array of strings representing the variables set in the user's environment.

The following screenshot shows the output of the sample program:
![screenshot](https://assets.digitalocean.com/articles/alligator/boo.svg "screenshot")