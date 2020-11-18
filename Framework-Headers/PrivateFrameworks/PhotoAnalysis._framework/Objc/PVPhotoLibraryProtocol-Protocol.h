//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSSet, NSURL;
@protocol PVFaceGroupProtocol, PVFetchResultProtocol, PVMomentProtocol, PVPersonProtocol;

@protocol PVPhotoLibraryProtocol <NSObject>
- (float)pv_faceProcessingProgress;
- (id<PVFetchResultProtocol>)pv_fetchAssetsForFaceGroup:(id<PVFaceGroupProtocol>)arg1;
- (id<PVFetchResultProtocol>)pv_fetchAssetsForPerson:(id<PVPersonProtocol>)arg1;
- (id<PVFetchResultProtocol>)pv_fetchAssetsInMoment:(id<PVMomentProtocol>)arg1;
- (id<PVFetchResultProtocol>)pv_fetchAssetsWithLocalIdentifiers:(NSArray *)arg1;
- (id<PVFetchResultProtocol>)pv_fetchCandidatePersonsForPerson:(id<PVPersonProtocol>)arg1;
- (id<PVFetchResultProtocol>)pv_fetchFaceGroups;
- (id<PVFetchResultProtocol>)pv_fetchFaceGroupsForPerson:(id<PVPersonProtocol>)arg1;
- (id<PVFetchResultProtocol>)pv_fetchFacesForFaceGroup:(id<PVFaceGroupProtocol>)arg1;
- (id<PVFetchResultProtocol>)pv_fetchFacesForPerson:(id<PVPersonProtocol>)arg1;
- (id<PVFetchResultProtocol>)pv_fetchFacesForPerson:(id<PVPersonProtocol>)arg1 inMoment:(id<PVMomentProtocol>)arg2;
- (id<PVFetchResultProtocol>)pv_fetchFacesForPersonLocalIdentifiers:(NSArray *)arg1 inMoment:(id<PVMomentProtocol>)arg2;
- (NSDictionary *)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id<PVFetchResultProtocol>)arg1;
- (id<PVFetchResultProtocol>)pv_fetchFacesWithLocalIdentifiers:(NSArray *)arg1;
- (NSSet *)pv_fetchInvalidAssetIdentifiersForCommonComparison;
- (id<PVFetchResultProtocol>)pv_fetchInvalidCandidatePersonsForPerson:(id<PVPersonProtocol>)arg1;
- (id<PVFetchResultProtocol>)pv_fetchMoments;
- (id<PVFetchResultProtocol>)pv_fetchMomentsForAssetsWithLocalIdentifiers:(NSArray *)arg1;
- (id<PVFetchResultProtocol>)pv_fetchMomentsForPerson:(id<PVPersonProtocol>)arg1;
- (id<PVFetchResultProtocol>)pv_fetchMomentsWithLocalIdentifiers:(NSArray *)arg1;
- (NSDictionary *)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id<PVFetchResultProtocol>)arg1;
- (id<PVFetchResultProtocol>)pv_fetchPersonsInMoment:(id<PVMomentProtocol>)arg1;
- (id<PVFetchResultProtocol>)pv_fetchPersonsWithLocalIdentifiers:(NSArray *)arg1;
- (id<PVFetchResultProtocol>)pv_fetchPersonsWithType:(unsigned long long)arg1;
- (BOOL)pv_isLibraryBeingSynchronized;
- (NSDate *)pv_lastAssetDate;
- (unsigned long long)pv_numberOfFacesWithFaceprints;
- (BOOL)pv_performChangesAndWait:(void (^)(void))arg1 error:(id *)arg2;
- (NSURL *)pv_persistentStorageDirectoryURL;
@end

