//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableGeneratedObjectCollection, HDCodableProvenance, HDCodableSource, NSMutableArray, NSString;

@interface HDCodableObjectCollection : PBCodable <NSCopying>
{
    NSMutableArray *_activityCaches;
    NSMutableArray *_binarySamples;
    NSMutableArray *_categorySamples;
    NSMutableArray *_cdaDocumentSamples;
    NSMutableArray *_correlations;
    NSMutableArray *_deletedSamples;
    NSMutableArray *_fitnessFriendAchievements;
    NSMutableArray *_fitnessFriendActivitySnapshots;
    NSMutableArray *_fitnessFriendWorkouts;
    HDCodableGeneratedObjectCollection *_generatedObjectCollection;
    NSMutableArray *_locationSeries;
    NSMutableArray *_medicalRecords;
    HDCodableProvenance *_provenance;
    NSMutableArray *_quantitySamples;
    HDCodableSource *_source;
    NSString *_sourceBundleIdentifier;
    NSMutableArray *_workouts;
}

@property (strong, nonatomic) NSMutableArray *activityCaches; // @synthesize activityCaches=_activityCaches;
@property (strong, nonatomic) NSMutableArray *binarySamples; // @synthesize binarySamples=_binarySamples;
@property (strong, nonatomic) NSMutableArray *categorySamples; // @synthesize categorySamples=_categorySamples;
@property (strong, nonatomic) NSMutableArray *cdaDocumentSamples; // @synthesize cdaDocumentSamples=_cdaDocumentSamples;
@property (strong, nonatomic) NSMutableArray *correlations; // @synthesize correlations=_correlations;
@property (strong, nonatomic) NSMutableArray *deletedSamples; // @synthesize deletedSamples=_deletedSamples;
@property (strong, nonatomic) NSMutableArray *fitnessFriendAchievements; // @synthesize fitnessFriendAchievements=_fitnessFriendAchievements;
@property (strong, nonatomic) NSMutableArray *fitnessFriendActivitySnapshots; // @synthesize fitnessFriendActivitySnapshots=_fitnessFriendActivitySnapshots;
@property (strong, nonatomic) NSMutableArray *fitnessFriendWorkouts; // @synthesize fitnessFriendWorkouts=_fitnessFriendWorkouts;
@property (strong, nonatomic) HDCodableGeneratedObjectCollection *generatedObjectCollection; // @synthesize generatedObjectCollection=_generatedObjectCollection;
@property (readonly, nonatomic) BOOL hasGeneratedObjectCollection;
@property (readonly, nonatomic) BOOL hasProvenance;
@property (readonly, nonatomic) BOOL hasSource;
@property (readonly, nonatomic) BOOL hasSourceBundleIdentifier;
@property (strong, nonatomic) NSMutableArray *locationSeries; // @synthesize locationSeries=_locationSeries;
@property (strong, nonatomic) NSMutableArray *medicalRecords; // @synthesize medicalRecords=_medicalRecords;
@property (strong, nonatomic) HDCodableProvenance *provenance; // @synthesize provenance=_provenance;
@property (strong, nonatomic) NSMutableArray *quantitySamples; // @synthesize quantitySamples=_quantitySamples;
@property (strong, nonatomic) HDCodableSource *source; // @synthesize source=_source;
@property (strong, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property (strong, nonatomic) NSMutableArray *workouts; // @synthesize workouts=_workouts;

+ (Class)activityCachesType;
+ (Class)binarySamplesType;
+ (Class)categorySamplesType;
+ (Class)cdaDocumentSamplesType;
+ (Class)correlationsType;
+ (Class)deletedSamplesType;
+ (Class)fitnessFriendAchievementsType;
+ (Class)fitnessFriendActivitySnapshotsType;
+ (Class)fitnessFriendWorkoutsType;
+ (Class)locationSeriesType;
+ (Class)medicalRecordsType;
+ (Class)quantitySamplesType;
+ (Class)workoutsType;
- (void).cxx_destruct;
- (id)activityCachesAtIndex:(unsigned long long)arg1;
- (unsigned long long)activityCachesCount;
- (void)addAccountOwner:(id)arg1;
- (void)addActivityCaches:(id)arg1;
- (void)addAllergyRecord:(id)arg1;
- (void)addBinarySamples:(id)arg1;
- (void)addCategorySamples:(id)arg1;
- (void)addCdaDocumentSamples:(id)arg1;
- (void)addConditionRecord:(id)arg1;
- (void)addCorrelations:(id)arg1;
- (void)addDeletedSamples:(id)arg1;
- (void)addDiagnosticTestReport:(id)arg1;
- (void)addDiagnosticTestResult:(id)arg1;
- (void)addFitnessFriendAchievements:(id)arg1;
- (void)addFitnessFriendActivitySnapshots:(id)arg1;
- (void)addFitnessFriendWorkouts:(id)arg1;
- (void)addLocationSeries:(id)arg1;
- (void)addMedicalRecords:(id)arg1;
- (void)addMedicationDispenseRecord:(id)arg1;
- (void)addMedicationOrder:(id)arg1;
- (void)addMedicationRecord:(id)arg1;
- (void)addProcedureRecord:(id)arg1;
- (void)addQuantitySamples:(id)arg1;
- (void)addUnknownRecord:(id)arg1;
- (void)addVaccinationRecord:(id)arg1;
- (void)addWorkouts:(id)arg1;
- (id)binarySamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)binarySamplesCount;
- (id)categorySamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)categorySamplesCount;
- (id)cdaDocumentSamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)cdaDocumentSamplesCount;
- (void)clearActivityCaches;
- (void)clearBinarySamples;
- (void)clearCategorySamples;
- (void)clearCdaDocumentSamples;
- (void)clearCorrelations;
- (void)clearDeletedSamples;
- (void)clearFitnessFriendAchievements;
- (void)clearFitnessFriendActivitySnapshots;
- (void)clearFitnessFriendWorkouts;
- (void)clearLocationSeries;
- (void)clearMedicalRecords;
- (void)clearQuantitySamples;
- (void)clearWorkouts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)correlationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)correlationsCount;
- (unsigned long long)count;
- (id)decodedObjects;
- (id)deletedSamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)deletedSamplesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fitnessFriendAchievementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fitnessFriendAchievementsCount;
- (id)fitnessFriendActivitySnapshotsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fitnessFriendActivitySnapshotsCount;
- (id)fitnessFriendWorkoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fitnessFriendWorkoutsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locationSeriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationSeriesCount;
- (id)medicalRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)medicalRecordsCount;
- (void)mergeFrom:(id)arg1;
- (id)quantitySamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)quantitySamplesCount;
- (BOOL)readFrom:(id)arg1;
- (BOOL)unitTest_isEquivalentToObjectCollection:(id)arg1;
- (id)workoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)workoutsCount;
- (void)writeTo:(id)arg1;

@end

