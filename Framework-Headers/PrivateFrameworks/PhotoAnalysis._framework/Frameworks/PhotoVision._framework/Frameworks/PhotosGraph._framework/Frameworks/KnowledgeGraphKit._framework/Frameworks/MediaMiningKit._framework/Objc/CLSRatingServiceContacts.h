//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSRatingServicePerson.h>

@interface CLSRatingServiceContacts : CLSRatingServicePerson
{
    float _contactCountThreshold;
    float _relationshipCountThreshold;
    float _familyCountThreshold;
    float _coworkerCountThreshold;
    float _homeAddressCountThreshold;
    float _workAddressCountThreshold;
    float _birthdayCountThreshold;
    float _companyCountThreshold;
    float _facebookCountThreshold;
    float _emailAddressCountThreshold;
    float _relationshipCountRelationshipsThreshold;
    float _homeAddressCountRelationshipsThreshold;
    float _workAddressCountRelationshipsThreshold;
    float _birthdayCountRelationshipsThreshold;
    float _companyCountRelationshipsThreshold;
    float _facebookCountRelationshipsThreshold;
    float _emailAddressCountRelationshipsThreshold;
}

- (void)_setThresholdsWithPlistDictionary:(id)arg1;
- (id)checklistsWithOperation:(id)arg1;
- (id)init;
- (id)localRateWithWeight:(float)arg1 andOperation:(id)arg2;
- (id)usageRateWithWeight:(float)arg1 andOperation:(id)arg2;

@end
