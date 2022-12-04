# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_dependencies.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 21:31:34 by vcedraz-          #+#    #+#              #
#    Updated: 2022/12/03 22:42:37 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# this will read how may times a different ft_ function is called in a file:
# excluding the name of the file itself:
# now this will grep the file and count how many times a ft_ function is called
# except for the name of the file itself:
for file in $(ls *.c)
do
		echo -n $file " "
		grep -v $file $file | sort | uniq -c
done
