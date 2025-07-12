class Solution {
public:
    int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        vector<int> maxlgap;
        vector<int> maxrgap(n, 0);

        int st = 0;
        int maxl = 0;

        // maxlgap[i] stores the max left gap before event i
        for (int i = 0; i < n; i++) {
            maxl = max(maxl, startTime[i] - st);
            maxlgap.push_back(maxl);
            st = endTime[i];
        }

        int et = eventTime;
        int maxr = 0;

        // maxrgap[i] stores the max right gap after event i
        for (int i = n - 1; i >= 0; i--) {
            maxr = max(maxr, et - endTime[i]);
            maxrgap[i] = maxr;
            et = startTime[i];
        }

        int maxContTime = 0;

        for (int i = 0; i < n; i++) {
            int duration = endTime[i] - startTime[i];

            // Calculate gaps before and after the current event
            int lgap = (i == 0) ? startTime[i] : startTime[i] - endTime[i - 1];
            int rgap = (i == n - 1) ? eventTime - endTime[i] : startTime[i + 1] - endTime[i];

            // Check if the event can be moved to some other empty slot (left or right)
            int mlgap = (i > 0) ? maxlgap[i - 1] : 0;
            int mrgap = (i < n - 1) ? maxrgap[i + 1] : 0;

            if (mlgap >= duration || mrgap >= duration) {
                maxContTime = max(maxContTime, lgap + rgap + duration);
            } else {
                maxContTime = max(maxContTime, lgap + rgap);
            }
        }

        return maxContTime;
    }
};
