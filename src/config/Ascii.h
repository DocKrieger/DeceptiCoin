// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, Black Block Consortia (DeceptiCoin Developers)
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n ______   _______  _______  _______  _______ __________________ _______  _______ _________ _ \n"      
        "(  __  / (  ____ /(  ____ /(  ____ /(  ____ )/__   __//__   __/(  ____ /(  ___  )/__   __/( (    /|\n"
        "| (  /  )| (    //| (    //| (    //| (    )|   ) (      ) (   | (    //| (   ) |   ) (   |  /  ( |\n"
        "| |   ) || (__    | |      | (__    | (____)|   | |      | |   | |      | |   | |   | |   |   / | |\n"
        "| |   | ||  __)   | |      |  __)   |  _____)   | |      | |   | |      | |   | |   | |   | (/ /) |\n"
        "| |   ) || (      | |      | (      | (         | |      | |   | |      | |   | |   | |   | | /   |\n"
        "| (__/  )| (____//| (____//| (____//| )         | |   ___) (___| (____//| (___) |___) (___| )  /  |\n"
        "(______/ (_______/(_______/(_______/|/          )_(   /_______/(_______/(_______)/_______/|/    )_)\n";

const std::string nonWindowsAsciiArt = 
      "\n                                                                            \n"
        "@@@@@@@   @@@@@@@@   @@@@@@@  @@@@@@@@  @@@@@@@   @@@@@@@  @@@   @@@@@@@   @@@@@@   @@@  @@@  @@@  \n"
        "@@@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@  @@@  @@@@@@@@  @@@@@@@@  @@@  @@@@ @@@  \n"
        "@@!  @@@  @@!       !@@       @@!       @@!  @@@    @@!    @@!  !@@       @@!  @@@  @@!  @@!@!@@@  \n"
        "!@!  @!@  !@!       !@!       !@!       !@!  @!@    !@!    !@!  !@!       !@!  @!@  !@!  !@!!@!@!  \n"
        "@!@  !@!  @!!!:!    !@!       @!!!:!    @!@@!@!     @!!    !!@  !@!       @!@  !@!  !!@  @!@ !!@!  \n"
        "!@!  !!!  !!!!!:    !!!       !!!!!:    !!@!!!      !!!    !!!  !!!       !@!  !!!  !!!  !@!  !!!  \n"
        "!!:  !!!  !!:       :!!       !!:       !!:         !!:    !!:  :!!       !!:  !!!  !!:  !!:  !!!  \n"
        ":!:  !:!  :!:       :!:       :!:       :!:         :!:    :!:  :!:       :!:  !:!  :!:  :!:  !:!  \n"
        " :::: ::   :: ::::   ::: :::   :: ::::   ::          ::     ::   ::: :::  ::::: ::   ::   ::   ::  \n"
        ":: :  :   : :: ::    :: :: :  : :: ::    :           :     :     :: :: :   : :  :   :    ::    :   \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
