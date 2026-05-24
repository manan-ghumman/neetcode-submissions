class LinkedList {
public:
    struct node {
        int data;
        node* next;
    };
    node *head = NULL;
    node *tail = NULL;
    LinkedList() {
        head = tail = NULL;
    }

    int get(int index) {
        node* temp = head;
        for(int i = 0; temp != NULL; temp = temp->next, i++){
            if (i == index) return temp->data;
        }
        return -1;
    }

    void insertHead(int val) {
        node* temp = new node();
        temp->data = val;
        temp->next = head;
        head = temp;
        if (!tail) tail = head;
    }
    
    void insertTail(int val) {
        node* temp = new node();
        temp->data = val;
        temp->next = NULL;
        if (!tail) {
            head = tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }

    bool remove(int index) {
        if (!head) return false;
        if (index == 0) {
            node* toDelete = head;
            head = head->next;
            if (!head) tail = NULL;
            delete toDelete;
            return true;
        }
        node *temp = head;
        for(int i = 0 ; temp->next != NULL && i < index - 1 ; i++) {
            temp = temp->next;
        }
        if (!temp->next) return false;
        node* toDelete = temp->next;
        temp->next = temp->next->next;
        if (toDelete == tail) tail = temp;
        delete toDelete;
        return true;
    }

    vector<int> getValues() {
        node* temp = head;
        vector<int> arr;
        while( temp!=NULL)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        return arr;
    }
};