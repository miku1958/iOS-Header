//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDKeyValueSyncEntity.h>

#import <ActivityAchievements/HDNanoSyncEntity-Protocol.h>

@class NSString;

@interface ACHBackCompatLegacyAchievementKeyValueSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)category;
+ (int)nanoSyncObjectType;
+ (BOOL)setLegacyDataStoreValuesWithDictionary:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;

@end

