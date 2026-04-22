echo "              _
             | |
             | |===( )   //////
             |_|   |||  | o o|
                    ||| ( c  )                ____
                     ||| \= /                ||   \_
                      ||||||                 ||     |
                      ||||||               __||___/-__
                      ||||||             _|___________|
                        |||             |______________|
                        |||             || ||      || ||
 Lachignol              |||             || ||      || ||
------------------------|||-------------||-||------||-||-------
                        |__>            || ||      || ||

                                    
     [hit any key to continue]"
# Path to your Oh My Zsh installation.
export ZSH="$HOME/.oh-my-zsh"
# Go
export PATH=$HOME/bin:$HOME/.local/bin:/usr/local/bin:$PATH
export PATH="$HOME/.local/go/bin:$PATH"
export PATH="$PATH:$(go env GOPATH)/bin"


ZSH_THEME="lambda"

# Uncomment the following line to use case-sensitive completion.
# CASE_SENSITIVE="true"

plugins=(
git
# fzf
zsh-autosuggestions 
zsh-syntax-highlighting
)


# User configuration

# export MANPATH="/usr/local/man:$MANPATH"

# You may need to manually set your language environment
# export LANG=en_US.UTF-8

#Preferred editor for local and remote sessions
if [[ -n $SSH_CONNECTION ]]; then
  export EDITOR='vim'
else
  export EDITOR='nvim'
fi


#Aliases
alias compile="cc -Wall -Wextra -Werror *.c -o diamond && ./diamond"
alias nvim=/home/ascordil/appimage/nvim
alias stow=~/.local/bin/stow-bin/bin/stow
alias config-zsh="nvim ~/.zshrc"
export PATH=/mnt/nfs/homes/ascordil/.local/funcheck/host:$PATH

#fichier source pour oh-my-zsh
source $ZSH/oh-my-zsh.sh

# Activer le mode vim dans terminal
#bindkey -v   

export NVM_DIR="$HOME/.nvm"
[ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh"  # This loads nvm
[ -s "$NVM_DIR/bash_completion" ] && \. "$NVM_DIR/bash_completion"  # This loads nvm bash_completion
