#include <iostream>

using namespace std;
int main(){						//�[�K�����g�X�ѱK���{�� 
    int n;
    int a, b, c, d;
    
    cin >> n;
    
    a=(n/1000+4)%10;
    b=(n/100+4)%10;
    c=(n/10+4)%10;
    d=(n+4)%10;
    
    cout << d*1000+c*100+b*10+a;
}
/*	�N�C�@��Ƥ��O�[6�A�M��N���ư��H10�A
	�ұo�l�ƧY���s���ơA�H�����N��Ӫ���ơC
	�M��N�Ĥ@�Ӧ�ƩM�ĥ|�Ӧ�ƥ洫�A
	�ĤG�Ӧ�ƩM�ĤT�Ӧ�ƥ洫�C   �L�X�ѱK�ӫD�[�K������     */ 

 
