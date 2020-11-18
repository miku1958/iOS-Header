//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLGeoLocationShifterDelegate-Protocol.h>

@class CLLocation, NSDate, NSDateFormatter, NSDictionary, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSString, PLGeoLocationShifter, PLMomentAnalyzerQueue, PLMomentAnalyzerWorkThread;
@protocol GEOMapItemPrivate, OS_dispatch_queue, PLMomentGenerationDataManagement;

@interface PLMomentAnalyzer : NSObject <PLGeoLocationShifterDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    PLMomentAnalyzerWorkThread *_geoWorkThread;
    unsigned long long _mode;
    double _analysisStartTime;
    BOOL _delayedSavePending;
    unsigned long long _objectUpdatesSinceSave;
    NSMutableOrderedSet *_pendingGEORequests;
    NSMutableArray *_activeGEORequests;
    NSMutableSet *_processingMomentUuids;
    PLMomentAnalyzerQueue *_megaMomentProcessingQueue;
    PLMomentAnalyzerQueue *_yearMomentProcessingQueue;
    PLGeoLocationShifter *_locationShifter;
    NSDateFormatter *_shortDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    id<PLMomentGenerationDataManagement> _momentDataManager;
    BOOL _analyzingAllMoments;
    BOOL _skippedMomentsDuringAnalysis;
    BOOL _passSuccess;
    unsigned long long _errorState;
    int _errorBackoffLevel;
    int _triesAtCurrentBackoffLevel;
    BOOL _networkObservingReachability;
    BOOL _needToUpdateInvalidMomentsWhenPossible;
    NSDictionary *_homeAddressDictionary;
    CLLocation *_homeLocation;
    id<GEOMapItemPrivate> _homeMapItem;
    NSString *_languageAndLocale;
    NSString *_lastGeoProviderId;
    NSOrderedSet *_defaultDominantGeoOrderingForMoment;
    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMoment;
    NSOrderedSet *_defaultDominantGeoOrderingForMegaMoment;
    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMegaMoment;
    NSOrderedSet *_defaultSecondaryGeoOrderingForYear;
    double _lastNetworkForcedAbortTime;
    double _timeToWaitBeforeNextRequest;
    double _lastRevGeoRequestTime;
    NSDate *_lastGeoVersionFileFetchDate;
    unsigned long long _lastGeoVersionFileVersion;
    NSDictionary *_serverVersionInfo;
    double _lastServerVersionInfoFetchAttemptTime;
    unsigned long long _currentRevGeoServerVersionNum;
    BOOL _pendingServerVersionInfoFetch;
    BOOL _addCountyIfNeeded;
    BOOL _noResultErrorIsSuccess;
    double _revGeoServerVersionInfoFetchNewVersionInterval;
    NSString *_revGeoServerVersionInfoURL;
    NSString *_currentProviderId;
    BOOL _momentAnalysisPaused;
    BOOL _throttlesCollectionListAnalysis;
    double _lastRevGeoURLFetchAttemptTime;
    unsigned long long _revGeoURLFetchAttemptCount;
    id<PLMomentGenerationDataManagement> _momentGenerationDataManager;
}

@property (readonly, strong, nonatomic) CLLocation *_homeLocation;
@property (readonly, strong, nonatomic) id<PLMomentGenerationDataManagement> _momentDataManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) id<PLMomentGenerationDataManagement> momentGenerationDataManager; // @synthesize momentGenerationDataManager=_momentGenerationDataManager;
@property (readonly) Class superclass;
@property BOOL throttlesCollectionListAnalysis;

- (void)_addOrUpdateNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2;
- (void)_addRevGeoPlacesAndUserTitlesFromAssets:(id)arg1 toPlacesArray:(id)arg2 toMomentTitles:(id)arg3 toCollectionTitles:(id)arg4;
- (void)_analysisComplete;
- (void)_analysisDidComplete:(BOOL)arg1;
- (BOOL)_canProcessMoments;
- (void)_checkForNewServerVersionInfoIfNeeded;
- (id)_compactPlaceDescriptionForMapItem:(id)arg1;
- (void)_countryCodeChanged:(id)arg1;
- (id)_currentProviderId;
- (id)_dictionaryFromLocation:(id)arg1;
- (id)_dominantPlacesInPlaceInfoArray:(id)arg1 orderType:(unsigned long long)arg2 totalPlaceCount:(unsigned long long)arg3 includeAllPlaces:(BOOL)arg4 includeHome:(BOOL)arg5 homeAtEnd:(BOOL)arg6 atLastLevel:(BOOL)arg7 outOtherNonDominantPlaces:(id)arg8;
- (void)_enqueueReverseGeocodeMomentWithRequestInfo:(id)arg1 shouldFilterIfInProgress:(BOOL)arg2;
- (unsigned long long)_errorTypeForError:(id)arg1;
- (void)_fetchServerVersionInfo;
- (void)_finalizeDataForMoment:(id)arg1 withMomentLocationInfo:(id)arg2 success:(BOOL)arg3;
- (void)_finalizeInitOnWorkQueue;
- (void)_finishedGEORequestInfo:(id)arg1 withSuccess:(BOOL)arg2 errorType:(unsigned long long)arg3;
- (void)_finishedProcessingMomentWithUuid:(id)arg1 withSuccess:(BOOL)arg2;
- (void)_forwardGeocodeAddressDictionary:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_forwardGeocodeAddressDictionaryOnGeoThread:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)_geoLocationForCoordinate:(CDStruct_c3b9c2ee)arg1 date:(id)arg2;
- (unsigned long long)_geoOrderInPrioritySet:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)_indexForGeoOrder:(unsigned long long)arg1 inPrioritySet:(id)arg2;
- (BOOL)_isNetworkReachable;
- (BOOL)_loadServerVersionInfo;
- (id)_localizedNamesForNameInfoArray:(id)arg1 namesUsed:(id)arg2 includeHome:(BOOL)arg3 outAddedHome:(BOOL *)arg4;
- (id)_locationFromDictionary:(id)arg1;
- (BOOL)_markInvalidLowQualityAssetsInMoment:(id)arg1 withCurrentProviderId:(id)arg2;
- (BOOL)_markInvalidOutOfDateAssetsInMoment:(id)arg1 forCurrentCountryVersionMap:(id)arg2 withCurrentProviderId:(id)arg3;
- (void)_networkReachabilityDidChange:(BOOL)arg1;
- (void)_processGEORequestWithRequestInfo:(id)arg1;
- (unsigned long long)_processMegaMomentList:(id)arg1;
- (void)_processMegaMomentLists;
- (void)_processNextAnalysisTransaction;
- (void)_processNextTransaction;
- (void)_processPendingGEORequests;
- (unsigned long long)_processYearMomentList:(id)arg1;
- (void)_processYearMomentLists;
- (void)_reAnalyzeCachedDataAndProcessOnlyHomeChanges:(BOOL)arg1;
- (void)_refreshAllObjectsIfPossibleWithManager:(id)arg1;
- (id)_resetAndSortedNameInfoArray:(id)arg1 homeAtEnd:(BOOL)arg2;
- (void)_resetErrorState;
- (void)_reverseGeocodeMoment:(id)arg1 shouldFilterIfInProgress:(BOOL)arg2 invalidOnly:(BOOL)arg3;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 aferDelay:(double)arg2 block:(CDUnknownBlockType)arg3;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_saveDataIfNeededAfterTimeDiff:(double)arg1;
- (void)_saveDataIfReachedObjectChangeThreshold;
- (void)_saveGlobalMetadata;
- (void)_saveNow;
- (void)_scheduleCollectionListAnalysisThrottleTimerIfNeeded;
- (void)_setErrorState:(unsigned long long)arg1;
- (void)_setLocationDataValidForMomentId:(id)arg1;
- (void)_setMomentAnalysisPaused:(BOOL)arg1;
- (BOOL)_shouldProcessMoments:(id)arg1;
- (unsigned long long)_significantPlaceCountInMap:(id)arg1;
- (id)_simpleNamesForNameInfoArray:(id)arg1;
- (void)_startObservingReachabilityChanges;
- (BOOL)_startingToProcessMomentWithUuid:(id)arg1;
- (void)_stopObservingReachabilityChanges;
- (id)_suffixForGeoPlace:(id)arg1 afterOrderType:(unsigned long long)arg2 homePlace:(id)arg3;
- (id)_suffixForNameInfoArray:(id)arg1 afterOrderType:(unsigned long long)arg2;
- (id)_transactionWithName:(const char *)arg1;
- (id)_transactionWithName:(const char *)arg1 inDataManager:(id)arg2;
- (void)_updateAllInfoInCompoundNameInfo:(id)arg1 andCompoundSecondaryNameInfo:(id)arg2 withRevGeoPlaces:(id)arg3 includeHome:(BOOL)arg4 primaryGeoOrderingSet:(id)arg5 secondaryGeoOrderingSet:(id)arg6;
- (void)_updateCurrentProviderId;
- (void)_updateCurrentProviderIdWithCountryCode:(id)arg1;
- (void)_updateDateFormattersForLocale:(id)arg1;
- (id)_updateDominantInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 defaultGeoOrderingSet:(id)arg3 includeAllPlaces:(BOOL)arg4 includeHome:(BOOL)arg5 homeAtEnd:(BOOL)arg6 outOtherNonDominantPlaces:(id)arg7 outOrdersCheckedOrUsed:(id)arg8 outOrderUsed:(unsigned long long *)arg9 outUsedHome:(BOOL *)arg10;
- (void)_updateErrorStateWithSuccess:(BOOL)arg1 errorType:(unsigned long long)arg2;
- (BOOL)_updateHomeAddressIfNeeded;
- (void)_updateHomeLocation;
- (BOOL)_updateHomeLocationInRevGeoInfo:(id)arg1 forLocation:(id)arg2 withHomeLocation:(id)arg3;
- (void)_updateInfoForAllMomentsWithReAnalyzeType:(unsigned long long)arg1;
- (void)_updateInformationForGeoProviderIfNeeded;
- (void)_updateInformationForGeoProviderIfNeededOnWorkQueue;
- (BOOL)_updateLanguageIfNeeded;
- (void)_updateLocalServerVersionInfo:(id)arg1;
- (void)_updateRevGeoServerFetchInfoConfig;
- (void)_updateSecondaryInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 primaryCompoundNameInfo:(id)arg3 defaultGeoOrderingSet:(id)arg4 dominantPlaces:(id)arg5 otherNonDominantPlaces:(id)arg6 ordersCheckedOrUsed:(id)arg7 dominantOrder:(unsigned long long)arg8 usedHome:(BOOL)arg9;
- (id)_userSuppliedTitlesForCountedSet:(id)arg1;
- (void)_waitForReachability;
- (void)addressBookChanged;
- (void)dealloc;
- (id)init;
- (void)invalidateLocationShift;
- (id)locationShiftStatus;
- (void)locationShifter:(id)arg1 didShiftWithResult:(id)arg2;
- (id)locationShifter:(id)arg1 locationCoordinatesForAssetIDs:(id)arg2;
- (void)locationShifter:(id)arg1 requestsInvocation:(id)arg2;
- (void)locationShifterDidFinish:(id)arg1;
- (id)momentAnalysisStatus;
- (void)pauseMomentAnalysis;
- (void)resumeMomentAnalysis;
- (BOOL)setVersionInfoURLIfAvailable:(id)arg1;
- (void)startAnalyzer;
- (void)updateInfoForAllMoments;
- (void)updateInfoForInvalidMomentsIfNeeded;
- (BOOL)updateInfoForMegaMomentLists:(id)arg1;
- (BOOL)updateInfoForMomentListWithMomentListId:(id)arg1;
- (BOOL)updateInfoForMomentWithMomentId:(id)arg1 fromOnDemandRequest:(BOOL)arg2;
- (BOOL)updateInfoForMoments:(id)arg1 invalidOnly:(BOOL)arg2;
- (BOOL)updateInfoForYearMomentLists:(id)arg1;
- (void)updateShiftForAssets:(id)arg1;

@end

