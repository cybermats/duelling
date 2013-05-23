from subprocess import Popen, PIPE, STDOUT

p = Popen('./foobar', stdout=PIPE, stdin=PIPE, stderr=STDOUT)

foobar_input = 'han hon hon hon Han hAn haN HAN HAn HaN'
foobar_stdout = p.communicate(input=foobar_input)[0]
print(foobar_stdout)
