#include <iostream> // std::cout, std::cin, std::endl
#include <string> // std::string
#include <cstdlib> // std::system

// command globals
static const std::string GTA_LOCATION = "start \"\" gta_sa.exe";
static const std::string MTA_LOCATION = "start \"\" \"MTA San Andreas/Multi Theft Auto.exe\"";

int main()
{
  mainLoop:
  std::cout << "------------[CLI-SA Launcher]------------" << std::endl;
  std::cout << "-----------------------------------------" << std::endl;
  std::cout << "---------------[1].GTA-SA----------------" << std::endl;
  std::cout << "---------------[2].MTA-SA----------------" << std::endl;
  std::cout << "----------------[0].EXIT-----------------" << std::endl;
  std::cout << "-----------------------------------------" << std::endl;
  std::cout << "------------[CLI-SA Launcher]------------" << std::endl;

  static std::string option;
  std::cin >> option; 

  if (option.length() > 0 && option.length() <= 1)
  {
    // TODO: check if option typed is an actual number
    // if not ignore and redraw the options again
    // also, make this a switch loop
    if (option == "1") 
    {
      std::system(GTA_LOCATION.c_str());
      goto exitProgram;
    }
    else if (option == "2")
    {
      std::system(MTA_LOCATION.c_str());
      goto exitProgram;
    }
    else if (option == "0")
    {
      goto exitProgram;
    }
    else
    {
      goto mainLoop;
    }
  }

  exitProgram:
  exit(0);
}