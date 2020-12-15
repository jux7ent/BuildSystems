header_code = '''
    int sum(int a, int b){
        return a + b;
    }
'''

if __name__ == '__main__':
    f = open('index.h', 'w')
    f.write(header_code)
    f.close()
    print('header index.h built')
