//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFitnessFriendAchievement.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface _HKFitnessFriendAchievement (HDCodingSupport) <HDCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;
- (BOOL)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
@end
