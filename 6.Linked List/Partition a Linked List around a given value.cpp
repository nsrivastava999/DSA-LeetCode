
/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node *partition(struct Node *head, int x)
{
    // code here
    Node *lessFirst = NULL, *lessLast = NULL;
    Node *equalFirst = NULL, *equalLast = NULL;
    Node *moreFirst = NULL, *moreLast = NULL;

    Node *curr = head;
    while (curr)
    {
        if (curr->data < x)
        {
            if (lessFirst == NULL)
            {
                lessFirst = lessLast = curr;
            }
            else
            {
                lessLast->next = curr;
                lessLast = curr;
            }
        }
        else if (curr->data == x)
        {
            if (equalFirst == NULL)
            {
                equalFirst = equalLast = curr;
            }
            else
            {
                equalLast->next = curr;
                equalLast = curr;
            }
        }
        else
        {
            if (moreFirst == NULL)
            {
                moreFirst = moreLast = curr;
            }
            else
            {
                moreLast->next = curr;
                moreLast = curr;
            }
        }
        curr = curr->next;
    }
    if (moreLast != NULL)
    {
        moreLast->next = NULL;
    }
    if (lessFirst == NULL)
    {
        if (equalFirst == NULL)
        {
            return moreFirst;
        }

        equalLast->next = moreFirst;

        return equalFirst;
    }
    if (equalFirst == NULL)
    {
        lessLast->next = moreFirst;

        return lessFirst;
    }

    lessLast->next = equalFirst;
    equalLast->next = moreFirst;
    return lessFirst;
}