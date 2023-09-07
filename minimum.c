#include <stdio.h>
#include <math.h>
#include <string.h>

int calculate_min_drives(float required_capacity, float disk_capacity, char raid_level[]) {
    if (strcmp(raid_level, "RAID0") == 0) {
        return (int)ceil(required_capacity / disk_capacity);
    } else if (strcmp(raid_level, "RAID1") == 0) {
        return (int)ceil(required_capacity / (2 * disk_capacity));
    } else if (strcmp(raid_level, "RAID5") == 0 || strcmp(raid_level, "RAID6") == 0) {
        return (int)ceil(required_capacity / disk_capacity);
    } else if (strcmp(raid_level, "RAID10") == 0) {
       
        return (int)ceil(required_capacity / (2 * disk_capacity));
    } else {
        printf("Unsupported RAID level\n");
        return -1;
    }
}

int main() {
    float required_capacity, disk_capacity;
    char raid_level[10];

    printf("Enter required data capacity (in GB): ");
    scanf("%f", &required_capacity);

    printf("Enter individual disk capacity (in GB): ");
    scanf("%f", &disk_capacity);

    printf("Enter RAID level (RAID0, RAID1, RAID5, RAID6, RAID10): ");
    scanf("%s", raid_level);

    int min_drives = calculate_min_drives(required_capacity, disk_capacity, raid_level);

    if (min_drives >= 0) {
        printf("Minimum number of drives needed for %s: %d\n", raid_level, min_drives);
    }

    return 0;
}

