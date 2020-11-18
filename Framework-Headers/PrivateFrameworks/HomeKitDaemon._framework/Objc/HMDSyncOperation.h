//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDSyncOperationOptions, HMFTimer, NSString, NSUUID;

@interface HMDSyncOperation : HMFObject
{
    NSUUID *_identifier;
    unsigned long long _operationType;
    HMFTimer *_delayTimer;
    CDUnknownBlockType _operationBlock;
    HMDSyncOperationOptions *_options;
}

@property (strong, nonatomic) HMFTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property (readonly, nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property (readonly, nonatomic) HMDSyncOperationOptions *options; // @synthesize options=_options;
@property (readonly, nonatomic) NSString *zoneName;

+ (id)cancelOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)cloudFetchSyncOperationWithCloudConflict:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
+ (id)cloudForcePushSyncOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)cloudPushSyncOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)cloudVerifyAccountSyncOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
+ (id)cloudZonePushSyncOperation:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)_initWithOperationType:(unsigned long long)arg1 options:(id)arg2 syncBlock:(CDUnknownBlockType)arg3;
- (id)description;

@end
