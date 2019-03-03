int maxn(int a,int b){
if(a>b)return a;
else return b;
}
struct node{
int lh=0;
int rh=0;
node* left=NULL;
node* right=NULL;
int data;
};
class tree{
node* root;
public:
     tree(){
     root=NULL;
     }
     void push(int x){
     node* temp = new node;
     temp->data=x;
     if(root==NULL){
        root=temp;
     }
     else{
          node* tmp = root;
          bool flag=false;
          while(flag==false){
          if(tmp->data<temp->data){
            if(tmp->right!=NULL){
                tmp=tmp->right;
            }
            else{
                tmp->right=temp;
                flag=true;
            }
          }
          else{
            if(tmp->left!=NULL){
                tmp=tmp->left;
            }
            else{
                tmp->left=temp;
                flag=true;
            }
          }
          }
     }
     }
     int counth(node* temp,int h){
     if(temp->left==NULL && temp->right==NULL){
        return h;
     }
     else if(temp->left==NULL && temp->right!=NULL){
        return counth(temp->right,++h);
     }
     else if(temp->left!=NULL && temp->right==NULL){
        return counth(temp->left,++h);
     }
     else {
        return maxn(counth(temp->left,++h),counth(temp->right,++h));
     }
     }
     void show(){
     cout<<counth(root,0);
     }

     ~tree(){
     clean(this->root);
     }
private:
    void clean(node* temp) {
  if(temp!=NULL) {
    clean(temp->left);
    clean(temp->right);
    delete temp;
  }
}
};
