//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSampleEntity.h>

@interface HDSeriesSampleEntity : HDSampleEntity
{
}

+ (id)_databaseTable;
+ (long long)_insertionEra;
+ (id)additionalPredicateForEnumeration;
+ (id)columnsDefinition;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 authorizationFilter:(CDUnknownBlockType)arg4;
+ (BOOL)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (CDUnknownBlockType)objectInsertionFilterForProfile:(id)arg1;
+ (void)updateInsertionEra;
- (BOOL)freezeWithDatabase:(id)arg1 error:(id *)arg2;
- (BOOL)updateSampleCount:(long long)arg1 withDatabase:(id)arg2 error:(id *)arg3;

@end
