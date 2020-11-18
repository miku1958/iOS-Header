//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSNumber, NSSet, NSString, PHAsset, PVCanceler, PVContext, PVFace, PVFaceCrop, PVFaceprint, PVPerson;
@protocol PVFaceClusteringProtocol;

@protocol PVPersistenceDelegate <NSObject>

@property (nonatomic) unsigned int faceAlgorithmUmbrellaVersion;
@property (nonatomic) unsigned int sceneAlgorithmUmbrellaVersion;

- (NSMutableArray *)allAlgorithmicFaceGroups:(id *)arg1;
- (NSArray *)allPersons:(id *)arg1;
- (NSString *)associateFace:(PVFace *)arg1 withFaceCrop:(PVFaceCrop *)arg2 error:(id *)arg3;
- (void)buildPersonsWithFaceClusterer:(id<PVFaceClusteringProtocol>)arg1 keyFaceUpdateBlock:(void (^)(NSArray *))arg2 canceler:(PVCanceler *)arg3 context:(PVContext *)arg4;
- (BOOL)cleanupGroupedFacesWithClusterSequenceNumberSetToZeroWithCanceler:(PVCanceler *)arg1 error:(id *)arg2;
- (BOOL)cleanupUngroupedFacesWithNonZeroClusterSequenceNumbersWithCanceler:(PVCanceler *)arg1 error:(id *)arg2;
- (BOOL)clearDirtyStateOnFaceCrops:(NSArray *)arg1 error:(id *)arg2;
- (NSNumber *)clusterSequenceNumberForFaceGroupWithLocalIdentifier:(NSString *)arg1;
- (unsigned long long)countOfAlgorithmicFaceGroups;
- (unsigned long long)countOfClusteredFaces;
- (unsigned long long)countOfClusteredFacesWithClusterSequenceNumbersInRange:(struct _NSRange)arg1;
- (unsigned long long)countOfClusteringEligibleFaces;
- (unsigned long long)countOfFaces;
- (unsigned long long)countOfUnclusteredClusteringEligibleFaces;
- (BOOL)deleteEmptyGroupsAndReturnError:(id *)arg1;
- (NSArray *)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(NSArray *)arg1 faceprintVersion:(unsigned int)arg2;
- (NSArray *)dirtyFaceCropsWithLimit:(unsigned long long)arg1;
- (PVFace *)faceAssociatedWithFaceCrop:(PVFaceCrop *)arg1;
- (NSSet *)faceLocalIdentifiersInFaceGroupWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSDictionary *)faceprintsByFaceLocalIdentifiers:(NSArray *)arg1 version:(unsigned int)arg2 error:(id *)arg3;
- (NSSet *)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(NSSet *)arg1 includeSingletons:(BOOL)arg2 error:(id *)arg3;
- (NSArray *)facesForClusteringWithLocalIdentifiers:(NSArray *)arg1 faceprintVersion:(unsigned int)arg2 excludeClustered:(BOOL)arg3;
- (NSSet *)facesForFaceLocalIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)facesForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)facesFromAsset:(PHAsset *)arg1;
- (NSMutableArray *)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)hasDirtyFaceCrops;
- (NSSet *)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(NSSet *)arg1 canceler:(PVCanceler *)arg2 error:(id *)arg3;
- (NSSet *)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(NSSet *)arg1 includeSingletons:(BOOL)arg2 error:(id *)arg3;
- (NSSet *)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(NSSet *)arg1 error:(id *)arg2;
- (NSSet *)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(NSSet *)arg1 error:(id *)arg2;
- (void)logPVDebugMessage:(NSString *)arg1;
- (void)logPVErrorMessage:(NSString *)arg1;
- (void)logPVInfoMessage:(NSString *)arg1;
- (void)logPVWarningMessage:(NSString *)arg1;
- (BOOL)needsPersonBuilding;
- (BOOL)persistChangesToAlgorithmicFaceGroups:(NSDictionary *)arg1 faceCSNByLocalIdentifierForNewlyClusteredFaces:(NSDictionary *)arg2 faceCSNsOfUnclusteredFaces:(NSMutableSet *)arg3 localIdentifiersOfUnclusteredFaces:(NSMutableSet *)arg4 persistenceCompletionBlock:(void (^)(void))arg5 canceler:(PVCanceler *)arg6 error:(id *)arg7;
- (BOOL)persistFaces:(NSArray *)arg1 deleteFaces:(NSArray *)arg2 forAsset:(PHAsset *)arg3 persistedFaces:(id *)arg4 error:(id *)arg5;
- (BOOL)persistGeneratedFaceCrops:(NSArray *)arg1 error:(id *)arg2;
- (PVPerson *)personWithFaceLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)personsForLocalIdentifiers:(NSSet *)arg1 error:(id *)arg2;
- (BOOL)recordNeedToPersonBuildOnFaceGroupContainingFace:(PVFace *)arg1 error:(id *)arg2;
- (NSSet *)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)rejectedFaceGroupLocalIdentifiersForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)rejectedFacesForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)rejectedUnverifiedPersonLocalIdentifiersForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (BOOL)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (BOOL)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (BOOL)resetLibraryClustersWithCanceler:(PVCanceler *)arg1 error:(id *)arg2;
- (BOOL)setKeyFaceOfAlgorithmicFaceGroupToFaceWithClusterSequenceNumbers:(NSArray *)arg1 error:(id *)arg2;
- (NSString *)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(NSString *)arg1 faceClusterer:(id<PVFaceClusteringProtocol>)arg2 canceler:(PVCanceler *)arg3 context:(PVContext *)arg4 error:(id *)arg5;
- (NSSet *)unclusteredClusteringEligibleFaceLocalIdentifiers:(id *)arg1;
- (BOOL)ungroupFaceClusterSequenceNumbers:(NSArray *)arg1 batchSizeForUnclusteringFaces:(unsigned long long)arg2 canceler:(PVCanceler *)arg3 error:(id *)arg4;
- (NSSet *)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:(NSArray *)arg1 withFaceprintVersion:(unsigned int)arg2;
- (BOOL)updateFaceprint:(PVFaceprint *)arg1 ofPersistedFace:(PVFace *)arg2 error:(id *)arg3;
- (BOOL)updateKeyFacesOfPersonsWithLocalIdentifiers:(NSArray *)arg1 forceUpdate:(BOOL)arg2 canceler:(PVCanceler *)arg3 error:(id *)arg4;
@end

