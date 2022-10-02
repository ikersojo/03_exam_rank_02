# 03_exam_rank_02

## Exam Description

The exam has 4 questions, one random question for each level listed below.
There is no requirement to meet the norm (i.e. no norminette check). 


## Initialize the exam
Login to the mac (configured as "exam-machine") with the follwoing user:
- login -> exam
- password -> exam

Open iterm2 and enter the following command:
```console
examshell
```

Login using your username and password:
- login -> your 42 intra username.
- pasword -> your 42 intra password.

Allow photo check.

In the examshell, you have only the following 3 commands:
- status - check the time and other things
- grademe - checking pushed exercise (moulinet)
- finish - closing examshell and finish exam

Once you login, it will provide the first random question from level 01.

Leave this terminal open and only use it grade the projects/questions.

## Submit questions:
Open new terminal and code editor.
You can find your exam subject in the directory ~/subject.
Then you can see directory ~/Rendu. It is your git repository to submit the questions.
Inside Rendu, create the directory named by the project, create .c and/or .h and start working.
When you are ready go in Rendu and push the directory by doing the following:

1. git add .
2. git commit -m "done"
3. git push
4. After the git push, type `grademe`

## Exam Questions
## Level 1
- first_word
- fizzbuzz
- ft_strcpy
- ft_strlen
- ft_swap
- putstr
- repeat_alpha
- rev_print
- rot_13
- rotone
- search_and_replace
- ulstr 

## Level 2
- alpha_mirror
- camel_to_snake
- do_op
- ft_atoi
- ft_strcmp
- ft_strcspn
- ft_strdup
- ft_strpbrk
- ft_strrev
- ft_strspn
- inter
- is_power_of_2
- last_word
- max
- print_bits
- reverse_bits
- snake_to_camel
- swap_bits
- union
- wdmatch 

## Level 3
- add_prime_sum
- epur_str
- expand_str
- ft_atoi_base
- ft_list_size
- ft_range
- ft_rrange
- hidenp
- lcm
- paramsum
- pgcd
- print_hex
- rstr_capitalizer
- str_capitalizer
- tab_mult 

## Level 4
- flood_fill
- fprime
- ft_itoa
- ft_list_foreach
- ft_list_remove_if
- ft_split
- rev_wstr
- rostring
- sort_int_tab
- sort_list

# BONUS: Exam Practice
Practice the exam just like you would in the real exam - https://github.com/JCluzet/42_EXAM
