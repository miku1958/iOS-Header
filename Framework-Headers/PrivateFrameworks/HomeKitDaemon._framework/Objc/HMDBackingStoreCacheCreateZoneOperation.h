//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSString;

@interface HMDBackingStoreCacheCreateZoneOperation : HMDBackingStoreOperation
{
    NSString *_zoneName;
    CDUnknownBlockType _creationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property (strong, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;

- (void).cxx_destruct;
- (id)initWithZoneName:(id)arg1 creationBlock:(CDUnknownBlockType)arg2;
- (id)mainReturningError;

@end

