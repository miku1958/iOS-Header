//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSDate, NSDateInterval, NSDictionary, NSObject, NSPredicate, NSSet, NSString, PLLocationOfInterestVisit, PLXPCTransaction;
@protocol NSCopying, PLMomentAnalysisTransaction, PLMomentAssetData, PLMomentData, PLMomentListData, PLPhotosHighlightData;

@protocol PLMomentGenerationDataManagement <NSObject>

@property (readonly, nonatomic) NSDictionary *generationOptions;
@property (readonly, nonatomic) BOOL isLightweightMigrationManager;
@property (nonatomic) long long previousValidatedModelVersion;
@property (nonatomic) BOOL previousValidationSucceeded;
@property (nonatomic) BOOL shouldPerformLightweightValidation;

- (NSArray *)allAssetIDsNeedingLocationShiftWithError:(id *)arg1;
- (NSArray *)allAssetIDsToBeIncludedInMomentsWithError:(id *)arg1;
- (NSArray *)allAssetsToBeIncludedInMomentsWithError:(id *)arg1;
- (NSArray *)allEmptyPhotosHighlightsOfKind:(unsigned short)arg1 error:(id *)arg2;
- (NSArray *)allInvalidAssetsWithError:(id *)arg1;
- (NSArray *)allInvalidMomentIDsWithError:(id *)arg1;
- (NSArray *)allInvalidMomentsWithError:(id *)arg1;
- (NSArray *)allInvalidPhotosHighlightsOfAllKindsWithError:(id *)arg1;
- (NSArray *)allMomentIDsWithError:(id *)arg1;
- (NSArray *)allMomentLists;
- (NSArray *)allMomentListsForLevel:(short)arg1;
- (NSArray *)allMomentsWithError:(id *)arg1;
- (NSArray *)allMomentsWithInvalidReverseLocationData;
- (NSArray *)allPhotosHighlightsOfAllKindsWithError:(id *)arg1;
- (NSArray *)allPhotosHighlightsOfKind:(unsigned short)arg1 error:(id *)arg2;
- (NSArray *)allPhotosHighlightsOfKind:(unsigned short)arg1 withPredicate:(NSPredicate *)arg2 error:(id *)arg3;
- (NSArray *)allPhotosHighlightsWithPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (id<PLMomentAssetData>)assetWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id *)arg2;
- (NSArray *)assetsWithUniqueIDs:(NSArray *)arg1 error:(id *)arg2;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(void (^)(BOOL))arg1;
- (BOOL)cameraIsActive;
- (BOOL)deleteAllHighlightsWithError:(id *)arg1;
- (BOOL)deleteAllMomentListsWithError:(id *)arg1;
- (BOOL)deleteAllMomentsWithError:(id *)arg1;
- (NSSet *)deletedObjects;
- (void)enumerateAssetsWithIDs:(NSArray *)arg1 usingBlock:(void (^)(id<PLMomentAssetData>, unsigned long long, BOOL *))arg2;
- (void)fetchLocationsOfInterestIfNeeded;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (BOOL)hasChanges;
- (NSArray *)highlightsIntersectingDateInterval:(NSDateInterval *)arg1 ofKind:(unsigned short)arg2;
- (NSDictionary *)homeAddressDictionary;
- (id<PLMomentData>)insertNewMoment;
- (id<PLMomentListData>)insertNewMomentListForGranularityLevel:(short)arg1;
- (id<PLPhotosHighlightData>)insertNewPhotosHighlight;
- (NSSet *)insertedObjects;
- (NSArray *)invalidAssetsIgnoringAssetIdentifiers:(NSSet *)arg1 error:(id *)arg2;
- (void)invalidateAllHighlightSubtitles;
- (void)invalidateLocationDataForAssetsInMoment:(id<PLMomentData>)arg1;
- (void)invalidateLocationDataForAssetsWithOIDs:(NSArray *)arg1;
- (void)invalidateShiftedLocationForAllAssetsInMoments;
- (BOOL)isNetworkReachable;
- (PLLocationOfInterestVisit *)lastLocationOfInterestVisit;
- (NSDictionary *)locationCoordinatesForAssetIDs:(NSArray *)arg1;
- (NSArray *)locationsOfInterest;
- (void)logRoutineInformation;
- (id<PLMomentAnalysisTransaction>)momentAnalysisTransactionWithName:(const char *)arg1;
- (Class)momentAssetDataClass;
- (Class)momentDataClass;
- (Class)momentListDataClassForGranularityLevel:(short)arg1;
- (id<PLMomentListData>)momentListWithUniqueID:(NSObject<NSCopying> *)arg1 forLevel:(short)arg2 error:(id *)arg3;
- (id<PLMomentData>)momentWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id *)arg2;
- (NSArray *)momentsBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 sorted:(BOOL)arg3;
- (NSArray *)momentsForAssetsWithUniqueIDs:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)momentsIntersectingDateInterval:(NSDateInterval *)arg1;
- (NSArray *)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id *)arg1;
- (NSArray *)momentsSinceDate:(NSDate *)arg1;
- (NSArray *)momentsWithLocationTypeUnprocessedWithError:(id *)arg1;
- (NSArray *)momentsWithUniqueIDs:(NSArray *)arg1 error:(id *)arg2;
- (id<PLMomentListData>)monthMomentListForMonth:(long long)arg1 year:(long long)arg2;
- (NSArray *)orphanedAssetIDsWithError:(id *)arg1;
- (void)pendingChangesUpdated:(unsigned long long)arg1;
- (void)performBlock:(void (^)(void))arg1 synchronously:(BOOL)arg2 completionHandler:(void (^)(void))arg3;
- (void)performBlock:(void (^)(void))arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(void (^)(void))arg4;
- (void)performDataTransaction:(void (^)(void))arg1 synchronously:(BOOL)arg2 completionHandler:(void (^)(void))arg3;
- (void)performDataTransaction:(void (^)(void))arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(void (^)(void))arg4;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (NSString *)replayLogPath;
- (void)resetOnFailure;
- (BOOL)routineIsAvailable;
- (void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(PLXPCTransaction *)arg2;
- (BOOL)save:(id *)arg1;
- (void)stopObservingNetworkReachabilityChanges;
- (NSSet *)updatedObjects;
- (BOOL)wantsMomentReplayLogging;
- (id<PLMomentListData>)yearMomentListForYear:(long long)arg1;
@end

