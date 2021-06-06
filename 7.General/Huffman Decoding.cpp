/*
Structure of the node of Huffman tree is as
struct MinHeapNode
{
	char data;
	int freq;
	MinHeapNode *left, *right;
};
*/


//Function to return the decoded string.
string decodeHuffmanData(struct MinHeapNode* root, string bin)
{
    string res="";
    int n = bin.length();
    for(int i=0;i<n;){
        MinHeapNode*curr = root;
        while(curr->data=='$'){
            if(bin[i]=='0')
                curr=curr->left;
            else
                curr=curr->right;
            i++;
        }
        res+=curr->data;
    }
    return res;
}