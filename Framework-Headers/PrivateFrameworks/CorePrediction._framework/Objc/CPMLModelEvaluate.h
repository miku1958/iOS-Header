//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPMLSchema, CPMLStorageManager, NSMutableArray, NSNumber, NSString;
@protocol CPMLAlgorithmProtocol;

@interface CPMLModelEvaluate : NSObject
{
    BOOL enableCacheString;
    BOOL keepInMemory;
    BOOL shouldFail;
    struct sqlite3 *db;
    int countRows;
    NSMutableArray *modelSchema;
    NSMutableArray *vectorPositions;
    NSNumber *maxRemoveTrainingRow;
    NSString *serializeFunction;
    NSString *machineLearningAlgo;
    struct CPMLAlgorithm *cpMLAlgo;
    struct CPMLSerialization *trainerCPDeSerializer;
    struct CPMLRemapper *cpRemapper;
    CPMLSchema *cpmlSchema;
    struct CPMLStatistics *trainerCPStatistics;
    struct CPMLDelegate *_cpmlDelegate;
    struct CPMLTunableData *cpTuneableData;
    int mapFunction;
    vector_e0f2bd7e boundedRemappedValues;
    struct CPMLDelegateEngine *_delegateEngine;
    CPMLStorageManager *_storageManager;
    id<CPMLAlgorithmProtocol> _delegateAlgorithm;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)boundResult:(id)arg1;
- (void)buildEvaluateMachineLearningAlgorithm;
- (void)constructVector:(struct CPMLFeatureVector *)arg1 withColumnPosition:(unsigned long long)arg2 maxColNumber:(unsigned long long)arg3 withValue:(id)arg4;
- (void)dealloc;
- (id)doEvaluate:(struct CPMLFeatureVector *)arg1 withBoundedList:(vector_e0f2bd7e *)arg2;
- (void)doRemapToFeatureVector:(struct CPMLFeatureVector *)arg1 withPositionID:(unsigned long long)arg2 withMaxCol:(unsigned long long)arg3 withValue:(id)arg4;
- (id)evalArray:(id)arg1;
- (id)evalCTypesV:(char *)arg1;
- (id)evalDict:(id)arg1;
- (id)evalNSObjectV:(id)arg1;
- (id)evalString:(id)arg1;
- (id)fileProtectionClassRequest:(id)arg1;
- (int)getAttributeType:(id)arg1;
- (void *)getModelData;
- (id)initWithModel:(id)arg1 withPropertyList:(id)arg2;
- (void)setCPMLAlgorithm:(id)arg1;
- (void)setCPMLAlgorithmEngine:(id)arg1;
- (BOOL)updateModel:(id)arg1;

@end

