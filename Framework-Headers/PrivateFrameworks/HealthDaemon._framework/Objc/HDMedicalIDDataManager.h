//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FKFriendsManager, HDProfile;
@protocol OS_dispatch_queue;

@interface HDMedicalIDDataManager : NSObject
{
    HDProfile *_profile;
    FKFriendsManager *_sosFriendsManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) FKFriendsManager *sosFriendsManager; // @synthesize sosFriendsManager=_sosFriendsManager;

- (void).cxx_destruct;
- (id)_fetchMedicalID;
- (id)_medicalIDURL;
- (id)_medicalIDURLWithDirectoryPath:(id)arg1;
- (BOOL)_migrateMedicalIDLocationIfNecessary:(id *)arg1;
- (BOOL)_persistMedicalIDData:(id)arg1 syncProvenance:(id)arg2 error:(id *)arg3;
- (BOOL)_persistMedicalIDDataFileToDisk:(id)arg1 error:(id *)arg2;
- (id)_unarchiveMedicalIDDataWithRawData:(id)arg1;
- (void)_updateShowMedicalIdOnWatch:(BOOL)arg1;
- (void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)deleteMedicalIDDataWithError:(id *)arg1;
- (id)fetchMedicalIDIfExists;
- (id)initWithProfile:(id)arg1;
- (BOOL)isDateSavedEarlierForMedicalID:(id)arg1 originalMedicalID:(id)arg2;
- (id)medicalIDDataCreateIfNecessary:(BOOL)arg1;
- (id)medicalIDEmergencyContacts;
- (BOOL)obliterateMedicalIDDataWithReason:(id)arg1 error:(id *)arg2;
- (id)unitTest_medicalIDData;
- (BOOL)unitTest_persistMedicalIDData:(id)arg1;
- (BOOL)updateMedicalIDData:(id)arg1 error:(id *)arg2;
- (BOOL)updateMedicalIDData:(id)arg1 syncProvenance:(long long)arg2 error:(id *)arg3;

@end
