//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSampleEntity.h>

@interface HDWorkoutEntity : HDSampleEntity
{
}

+ (Class)_associatedDataObjectClass;
+ (id)_databaseTable;
+ (id)_propertySettersForDataObject;
+ (BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (BOOL)associateSamples:(id)arg1 toWorkout:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)codableRepresentationEncoderForHealthDaemon:(id)arg1 database:(id)arg2;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (id)columnsDefinition;
+ (id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (Class)propertyApplierClass;

@end
