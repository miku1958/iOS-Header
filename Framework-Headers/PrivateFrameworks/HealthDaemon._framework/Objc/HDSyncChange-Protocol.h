//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDProfile, HDSyncEntityIdentifier, NSArray, NSNumber;
@protocol HDSyncAnchorMap;

@protocol HDSyncChange <NSObject>

@property (readonly, nonatomic) BOOL done;
@property (readonly, nonatomic) long long encodedByteCount;
@property (readonly, nonatomic) NSNumber *sequenceNumber;
@property (readonly, nonatomic, getter=isSpeculative) BOOL speculative;
@property (readonly, nonatomic) struct HDSyncAnchorRange syncAnchorRange;

- (NSArray *)decodedObjectsForProfile:(HDProfile *)arg1 error:(id *)arg2;
- (id<HDSyncAnchorMap>)requiredAnchorMapWithProfile:(HDProfile *)arg1 error:(id *)arg2;
- (void)setObjects:(NSArray *)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 requiredAnchorMap:(id<HDSyncAnchorMap>)arg3;
- (void)setSequenceNumber:(long long)arg1 done:(BOOL)arg2;
- (Class)syncEntityClassForProfile:(HDProfile *)arg1;
- (HDSyncEntityIdentifier *)syncEntityIdentifier;
@end

