//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFitnessFriendActivitySnapshot.h>

#import <HealthDaemon/HDFitnessFriendsCloudKitCodable-Protocol.h>

@class NSString;

@interface _HKFitnessFriendActivitySnapshot (CloudKitCodingSupport) <HDFitnessFriendsCloudKitCodable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fitnessFriendActivitySnapshotWithRecord:(id)arg1 friendUUID:(id)arg2;
- (id)recordWithZoneID:(id)arg1;
@end
