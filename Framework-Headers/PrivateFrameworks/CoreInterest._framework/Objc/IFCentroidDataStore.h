//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreInterest/IFDataStore.h>

#import <CoreInterest/IFCentroidStore-Protocol.h>
#import <CoreInterest/IFCentroidStoreInternal-Protocol.h>

@class IFCentroidModelParameters, NSString;

@interface IFCentroidDataStore : IFDataStore <IFCentroidStoreInternal, IFCentroidStore>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) IFCentroidModelParameters *parameters;
@property (readonly) Class superclass;

+ (id)defaultStore;
+ (id)migrationPlan;
- (void)_addCentroidFeature:(id)arg1 score:(double)arg2 vectorIndex:(long long)arg3 inTransaction:(BOOL)arg4;
- (BOOL)_addFeatureVector:(id)arg1;
- (unsigned long long)_centroidLength;
- (unsigned long long)_countTableRows:(id)arg1;
- (unsigned long long)_documentCountContainsFeatureLike:(id)arg1 inTransaction:(BOOL)arg2;
- (id)_featureFromStatement:(struct sqlite3_stmt *)arg1;
- (id)_featureFromStatementWithScore:(struct sqlite3_stmt *)arg1;
- (unsigned long long)_indexForFeature:(id)arg1;
- (void)_setCentroidFeature:(id)arg1 score:(double)arg2 inTransaction:(BOOL)arg3;
- (id)_whereClauseForFeatureTemplate:(id)arg1;
- (BOOL)addFeatureVectors:(id)arg1;
- (id)centroid;
- (double)centroidScoreForFeature:(id)arg1;
- (id)centroidWithScaling:(id)arg1;
- (unsigned long long)deleteFeatureVectors;
- (unsigned long long)deleteFeatureVectorsInExcessOf:(unsigned long long)arg1;
- (unsigned long long)deleteFeatureVectorsOlderThan:(id)arg1;
- (unsigned long long)deleteFeatureVectorsWithFeatureLike:(id)arg1;
- (unsigned long long)documentCount;
- (unsigned long long)documentCountContainsFeatureLike:(id)arg1;
- (void)enumerateStateWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)featureCount;
- (id)featureForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForFeature:(id)arg1;
- (id)leastFrequentFeature;
- (unsigned long long)leastFrequentFeatureCount;
- (id)mostFrequentFeature;
- (unsigned long long)mostFrequentFeatureCount;
- (BOOL)setCentroidFeature:(id)arg1;
- (id)vectorFromFeatureVector:(id)arg1;

@end

