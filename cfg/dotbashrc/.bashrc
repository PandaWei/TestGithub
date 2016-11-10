# .bashrc

# User specific aliases and functions

alias rm='rm -i'
alias cp='cp -i'
alias mv='mv -i'

# Source global definitions
if [ -f /etc/bashrc ]; then
	. /etc/bashrc
fi

alias de='virsh define'
alias ud='virsh undefine'
alias st='virsh start'
alias vv='virsh vncdisplay'
alias sd='virsh shutdown'
alias ds='virsh destroy'
alias rb='virsh reboot'
alias vl='virsh list'
alias vla='virsh list --all'
alias ve='virsh edit'
alias vc='virsh console'
alias vad='virsh attach-device'
alias vdd='virsh detach-device'
alias vdil='virsh domiflist'
alias vdbl='virsh domblklist'


alias l13="sshpass -p mima12#$ ssh -l root 192.168.100.100"

export http_proxy="192.168.100.100:8123"
export https_proxy="192.168.100.100:8123"

cd ~
