//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDBackingStoreModelObject, NSArray, NSUUID;

@protocol HMDBackingStoreModelBackedObjectProtocol <NSObject>

@property (readonly, nonatomic) NSUUID *modelIdentifier;
@property (readonly, nonatomic) NSUUID *modelParentIdentifier;

- (NSArray *)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (NSArray *)modelBackedObjects;
- (HMDBackingStoreModelObject *)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;

@optional
- (BOOL)isBackingStorageEqual:(id)arg1;
@end

