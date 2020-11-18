//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSString, NSUUID;

@interface HMDSyncOperation : HMFObject
{
    BOOL _cloudConflict;
    NSUUID *_identifier;
    NSString *_zoneName;
    unsigned long long _operationType;
    unsigned long long _versionFlags;
    HMFTimer *_delayTimer;
    CDUnknownBlockType _operationBlock;
}

@property (nonatomic, getter=isCloudConflict) BOOL cloudConflict; // @synthesize cloudConflict=_cloudConflict;
@property (strong, nonatomic) HMFTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property (readonly, nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property (readonly, nonatomic) unsigned long long versionFlags; // @synthesize versionFlags=_versionFlags;
@property (readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;

+ (id)cloudFetchSyncOperationWithCloudConflict:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
+ (id)cloudForcePushSyncOperationWithVersionFlags:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
+ (id)cloudPushSyncOperationWithVersionFlags:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
+ (id)cloudVerifyAccountSyncOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
+ (id)cloudZonePushSyncOperation:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)idsMergeSyncOperationWithVersionFlags:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOperationType:(unsigned long long)arg1 zoneName:(id)arg2 versionFlags:(unsigned long long)arg3 syncBlock:(CDUnknownBlockType)arg4;

@end

