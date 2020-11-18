//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSampleEntity.h>

@interface HDActivityCacheEntity : HDSampleEntity
{
}

+ (id)_databaseTable;
+ (id)activityCacheForIndex:(long long)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (id)activityCachesInRangeStart:(id)arg1 end:(id)arg2 inHealthDaemon:(id)arg3 error:(id *)arg4;
+ (BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)columnsDefinition;
+ (id)entitiesToDeleteBeforeInsertingObject:(id)arg1 provenance:(id)arg2 error:(id *)arg3 database:(id)arg4;
+ (id)entityEncoderForHealthDaemon:(id)arg1 database:(id)arg2 purpose:(long long)arg3 authorizationFilter:(CDUnknownBlockType)arg4;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;

@end

