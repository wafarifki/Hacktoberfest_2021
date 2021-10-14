#!/bin/bash
#rizkytegar npm auto tools
clear
echo "             Welcome To Jekyll Auto Tools"
echo "________________________________________________________"
echo ""
echo "                          AUTHOR"
echo ""
echo "Name      :   Rizky Tegar"
echo "Github    :   https://www.github.com/rizkytegar"
echo "________________________________________________________"
echo ""
echo "Menu"
echo ""
echo "1. Gem Install Bundler"
echo "2. Bundle Install"
echo "3. Info"
echo "4. Jekyll Serve"
echo "5. Jekyll Build"
echo ""
echo -n "Enter Request : "
read VAR

# state
if [[ $VAR -eq 1 ]]
then
  echo "Gem Install Bundler...."
  gem install bundler

# state
elif [[ $VAR -eq 2 ]]
then
echo "bundle install...."
  bundle install

# state
  elif [[ $VAR -eq 3 ]]
then
echo "waiting info...."
  bundle --version
  jekyll --version
  echo "gem : " 
  gem --version

# state
    elif [[ $VAR -eq 4 ]]
then
echo "Jekyll Serve...."
  bundle exec jekyll serve

# state
   elif [[ $VAR -eq 5 ]]
then
  echo "Building the Your site..."
bundle exec jekyll build

# state
else
  echo "Command Not Found"
fi
