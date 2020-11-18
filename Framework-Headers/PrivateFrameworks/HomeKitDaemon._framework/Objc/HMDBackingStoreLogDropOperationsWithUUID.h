//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSUUID;

@interface HMDBackingStoreLogDropOperationsWithUUID : HMDBackingStoreOperation
{
    NSUUID *_uuid;
    long long _maskValue;
    long long _compareValue;
}

@property (nonatomic) long long compareValue; // @synthesize compareValue=_compareValue;
@property (nonatomic) long long maskValue; // @synthesize maskValue=_maskValue;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 pushingTo:(unsigned long long)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (id)mainReturningError;

@end
