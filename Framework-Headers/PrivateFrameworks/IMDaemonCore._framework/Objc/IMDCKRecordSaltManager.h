//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface IMDCKRecordSaltManager : NSObject
{
    NSString *_cachedSalt;
    NSObject<OS_dispatch_queue> *_ckQueue;
}

@property (strong) NSString *cachedSalt; // @synthesize cachedSalt=_cachedSalt;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;

+ (id)sharedInstance;
- (id)_CKUtilitiesSharedInstance;
- (id)_container;
- (void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(CDUnknownBlockType)arg1;
- (void)_scheduleOperation:(id)arg1;
- (void)clearLocalSyncState;
- (void)dealloc;
- (void)deleteDeDupeRecordZone;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(CDUnknownBlockType)arg1 forceFetch:(BOOL)arg2;
- (id)init;

@end

