//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSampleEntity.h>

@interface HDECGSampleEntity : HDSampleEntity
{
}

+ (id)_ecgSampleWithCodableBinarySample:(id)arg1;
+ (BOOL)_insertECGWithCodableBinarySample:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 provenance:(id)arg4 error:(id *)arg5;
+ (id)_symptomSamplesForECG:(id)arg1;
+ (id)_symptomSamplesForSymptomTypes:(id)arg1 withValue:(long long)arg2 ecg:(id)arg3;
+ (BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (id)foreignKeys;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (BOOL)isConcreteEntity;

@end

