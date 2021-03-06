//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHPhotoLibrary.h>

#import <VideoProcessing/PVPhotoLibraryProtocol-Protocol.h>

@class NSString;

@interface PHPhotoLibrary (PVPhotoLibraryProtocol) <PVPhotoLibraryProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_defaultAssetPropertySets;
+ (id)_defaultFacePropertySets;
+ (id)_phFaceSortDescriptors;
+ (id)_phPeopleSortDescriptors;
+ (id)vcp_defaultMediaAnalysisDatabaseFilepath;
+ (id)vcp_defaultPhotoLibrary;
+ (id)vcp_defaultURL;
- (id)_defaultAssetFetchOptions;
- (id)_defaultFetchOptions;
- (double)_progressFromWorkerStatesDictionary:(id)arg1;
- (id)_vcp_analysisPreferencesURL;
- (void)_vcp_updateAnalysisPreferencesWithEntries:(id)arg1 keysToRemove:(id)arg2;
- (float)pv_faceProcessingProgress;
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;
- (id)pv_fetchAssetsForPerson:(id)arg1;
- (id)pv_fetchAssetsInMoment:(id)arg1;
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchFaceGroups;
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;
- (id)pv_fetchFacesForFaceGroup:(id)arg1;
- (id)pv_fetchFacesForPerson:(id)arg1;
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchMoments;
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchMomentsForPerson:(id)arg1;
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchPersonsInMoment:(id)arg1;
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;
- (id)pv_lastAssetDate;
- (unsigned long long)pv_numberOfFacesWithFaceprints;
- (BOOL)pv_performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)pv_persistentStorageDirectoryURL;
- (id)vcp_analysisPreferences;
- (unsigned long long)vcp_assetCountForTaskID:(unsigned long long)arg1;
- (unsigned long long)vcp_assetCountWithInternalPredicate:(id)arg1 forTaskID:(unsigned long long)arg2;
- (unsigned long long)vcp_assetCountWithMediaType:(long long)arg1 forTaskID:(unsigned long long)arg2;
- (BOOL)vcp_canStreamingForFaceAnalysis;
- (BOOL)vcp_eligibleForStreaming:(BOOL)arg1;
- (id)vcp_faceAnalysisStateFilepath;
- (BOOL)vcp_isCPLDownloadComplete;
- (BOOL)vcp_isCPLEnabled;
- (BOOL)vcp_isCPLSyncComplete;
- (id)vcp_mediaAnalysisDatabaseFilepath;
- (id)vcp_mediaAnalysisDirectory;
- (id)vcp_persistentStorageDirectoryURL;
- (id)vcp_personsModelFilepath;
- (void)vcp_setAnalysisPreferencesValue:(id)arg1 forKey:(id)arg2;
- (id)vcp_url;
@end

