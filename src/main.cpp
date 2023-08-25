#include <iostream> // std::cout, std::cin, std::endl
#include <string>   // std::string
#include <cstdlib>  // std::system

// command globals
const std::string GTA_LOCATION = "start \"\" gta_sa.exe";
const std::string MTA_LOCATION = "start \"\" \"MTA San Andreas/Multi Theft Auto.exe\"";

void run_cmd(const std::string &cmd)
{
  std::system(cmd.c_str());
}

void clear_screen()
{
#ifdef _WIN32
  std::system("cls"); // windows clear command
#else
  std::system("clear"); // unix clear command
#endif
}

void draw_menu()
{
  // clear screen whenever a menu redraw is needed
  clear_screen();

  std::cout << "------------[CLI-SA Launcher]------------" << std::endl;
  std::cout << "-----------------------------------------" << std::endl;
  std::cout << "---------------[1].GTA-SA----------------" << std::endl;
  std::cout << "---------------[2].MTA-SA----------------" << std::endl;
  std::cout << "----------------[0].EXIT-----------------" << std::endl;
  std::cout << "-----------------------------------------" << std::endl;
  std::cout << "------------[CLI-SA Launcher]------------" << std::endl;
}

int main()
{
draw:
  // redraw menu options
  draw_menu();

  // handle options
  static std::string option;
  std::cin >> option;

  if (option.length() == 1)
  {
    switch (option[0])
    {
    case '1':
      run_cmd(GTA_LOCATION);
      break;
    case '2':
      run_cmd(MTA_LOCATION);
      break;
    case '0':
      goto exit;
    default:
      goto draw;
      break;
    }
  }

exit:
  return 0;
}
