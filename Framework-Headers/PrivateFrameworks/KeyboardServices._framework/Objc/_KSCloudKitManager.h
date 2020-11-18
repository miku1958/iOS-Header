//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, CKRecordZone, NSString, _KSRequestThrottle;
@protocol OS_dispatch_queue, _KSCloudKitManagerDelegate;

@interface _KSCloudKitManager : NSObject
{
    NSObject<OS_dispatch_queue> *_ckWorkQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    _KSRequestThrottle *_accountChangeThrottle;
    _KSRequestThrottle *_fetchZoneThrottle;
    BOOL _recordZoneOperationInProgress;
    BOOL _subscriptionOperationInProgress;
    CKRecordZone *_recordZone;
    id<_KSCloudKitManagerDelegate> _delegate;
    CKContainer *_cloudKitContainer;
    CKDatabase *_cloudKitDatabase;
    CKDatabase *_publicDatabase;
    NSString *_recordZoneKey;
    NSString *_subscriptionKey;
    NSString *_lastKnownUserKey;
}

@property (strong, nonatomic) CKContainer *cloudKitContainer; // @synthesize cloudKitContainer=_cloudKitContainer;
@property (strong, nonatomic) CKDatabase *cloudKitDatabase; // @synthesize cloudKitDatabase=_cloudKitDatabase;
@property (weak, nonatomic) id<_KSCloudKitManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSString *lastKnownUserKey; // @synthesize lastKnownUserKey=_lastKnownUserKey;
@property (strong, nonatomic) CKDatabase *publicDatabase; // @synthesize publicDatabase=_publicDatabase;
@property (strong, nonatomic) CKRecordZone *recordZone; // @synthesize recordZone=_recordZone;
@property (readonly, nonatomic) NSString *recordZoneKey; // @synthesize recordZoneKey=_recordZoneKey;
@property (nonatomic) BOOL recordZoneOperationInProgress; // @synthesize recordZoneOperationInProgress=_recordZoneOperationInProgress;
@property (readonly, nonatomic) NSString *subscriptionKey; // @synthesize subscriptionKey=_subscriptionKey;
@property (nonatomic) BOOL subscriptionOperationInProgress; // @synthesize subscriptionOperationInProgress=_subscriptionOperationInProgress;

+ (id)prepareContainerForID:(id)arg1;
- (void).cxx_destruct;
- (void)_checkAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1 withRetryCount:(unsigned long long)arg2;
- (void)_ckDeleteRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_ckFetchRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_ckSaveRecordZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_inconvenientOperation:(id)arg1;
- (void)_submitFetchRecordsOperation:(id)arg1 withPriority:(unsigned long long)arg2 changeToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 retryCount:(unsigned long long)arg5;
- (void)accountStatusDidChange:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)addOperation:(id)arg1 priority:(unsigned long long)arg2;
- (void)copyFieldsFromRecord:(id)arg1 toRecord:(id)arg2;
- (void)dealloc;
- (void)fetchPublicRecordsWithNames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 retryCount:(unsigned long long)arg4;
- (void)identityUpdated:(id)arg1;
- (id)init;
- (id)initWithContainer:(id)arg1 recordZoneName:(id)arg2;
- (id)initWithRecordZoneName:(id)arg1;
- (BOOL)isAccountAvailable;
- (BOOL)needsDeviceToDevice;
- (void)queryAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)recordIDForName:(id)arg1;
- (id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3;
- (id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3 encryptedFields:(id)arg4;
- (id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4;
- (id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4 encryptedFields:(id)arg5;
- (void)resetZoneWithDelete:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)resolveConflicts:(id)arg1;
- (void)setupAccountDidChange:(BOOL)arg1;
- (void)setupRecordZoneWithCompletionHandler:(CDUnknownBlockType)arg1 ignoreDefaults:(BOOL)arg2;
- (void)setupSubscription;
- (void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4 retryCount:(unsigned long long)arg5;
- (id)userIdentity;

@end

