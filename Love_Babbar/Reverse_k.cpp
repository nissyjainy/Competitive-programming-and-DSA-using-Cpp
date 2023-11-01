// Aa solution che ok for reverse any number of the elements left ok
class Solution
{
public:
  ListNode *reverseKGroup(ListNode *head, int k)
  {
    // aama to jo bhai k ma khali reverse j karvanu che ok
    // khali ek vaar k mate reverse kar ok ane pachi aagad tare recursion karshe ok
    if (head == NULL)
    {
      return NULL;
    }
    ListNode *temp = head;
    ListNode *previous = NULL;
    ListNode *forward = NULL;
    int count = 0;
    while (count < k && temp != NULL)
    {
      forward = temp->next;
      temp->next = previous;
      previous = temp;
      temp = forward;
      count++;
    }
    // head na next ma atla mate ke che ki pela tu revarse karish to previous pehla aavshe pachi head aavshe ok
    if (forward != NULL)
    {
      head->next = reverseKGroup(forward, k);
    }
    return previous;
  }
  // jo bhai aama 3 question bane aeva che ok 
  // 1 to  ahiya che je ki count tare k ni equal hashe tyare j tare reverse thashe ok 
  // 2 jyare tare count < k hashe to reverse thai jashe ok atle tare k ki aeni karta nana hashe to reverse thai jasje ok 
  // je codestudio ma che ki array na elements na hisab thi reverse kar ok done
};
