//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOAppConfig, GEODeviceConfig, GEOMapServiceTraits, NSLock, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GEOLogMessageFactory : NSObject
{
    GEOAppConfig *_appConfig;
    GEODeviceConfig *_deviceConfig;
    GEOMapServiceTraits *_currentCachedTraits;
    GEOMapServiceTraits *_connectedCarInfoTraits;
    NSMutableDictionary *_appStateTransitionData;
    NSMutableDictionary *_appStateTransitionTimingData;
    NSMutableDictionary *_logMessageCountCurrentlyVendedOutForLogMessageTypes;
    NSLock *_lock;
    NSString *_carrierOperatorName;
    NSLock *_carrierNameLock;
    NSLock *_coreTelephonyServerLock;
    NSObject<OS_dispatch_queue> *_carrierNameQueue;
}

@property (readonly, nonatomic) GEOAppConfig *appConfig; // @synthesize appConfig=_appConfig;
@property (readonly, nonatomic) NSString *carrierOperatorName;
@property (strong, nonatomic) GEOMapServiceTraits *currentCachedTraits;
@property (readonly, nonatomic) GEODeviceConfig *deviceConfig; // @synthesize deviceConfig=_deviceConfig;

+ (unsigned long long)configStateVendingInterval:(long long)arg1 logMessageType:(int)arg2;
+ (BOOL)deviceHasRadio;
+ (id)sharedInstance;
- (int)_bucketValueForTimeDelta:(double)arg1;
- (void)_connectToCoreTelephonyServer;
- (unsigned long long)_currentlyVendedOutLogMessageCountForLogMessageType:(int)arg1;
- (void)_incrementCurrentlyVendedOutLogMessageCountForLogMessageType:(int)arg1;
- (void)_initializeAppConfig;
- (void)_initializeDeviceConfig;
- (id)_logMessageForLongSessionLogFrameworkUsage;
- (id)_logMessageForLongSessionUsage;
- (id)_logMessageForSessionlessUsage;
- (id)_logMessageForShortSessionUsageWithSubType:(int)arg1 eventKey:(id)arg2 traits:(id)arg3;
- (void)_populateAppConfigInLogMessage:(id)arg1;
- (void)_populateAppStateInLogMessage:(id)arg1 withTraits:(id)arg2;
- (void)_populateDeviceConfigInLogMessage:(id)arg1;
- (void)_populateDeviceStateInLogMessage:(id)arg1 withTraits:(id)arg2;
- (id)_retrieveCarrierOperatorName;
- (id)_shortSessionUsageLogMessageFromTraits:(id)arg1 eventKey:(id)arg2;
- (BOOL)_shouldVendoutConfigState:(long long)arg1 logMessageType:(int)arg2;
- (id)_traitsByAddingConnectedCarInfoToTraits:(id)arg1;
- (void)_updateCarrierOperatorName;
- (id)_vendOutLogMessage:(id)arg1;
- (void)clearStateTimingData;
- (void)dealloc;
- (id)init;
- (id)logMessageForDebugString:(id)arg1;
- (id)logMessageForDirectionsFeedback:(id)arg1;
- (id)logMessageForFailedMsgMetricWithCount:(int)arg1;
- (id)logMessageForForcePurgeMetricWithState:(int)arg1;
- (id)logMessageForLocationShiftCacheHitWithHitCount:(unsigned int)arg1 cacheMissCount:(unsigned int)arg2;
- (id)logMessageForMapLaunchUserAction:(id)arg1 sourceAppID:(id)arg2 traits:(id)arg3;
- (id)logMessageForMapsResultsDisplayedUserActionForQueryString:(id)arg1 resultsArray:(id)arg2;
- (id)logMessageForNetworkMetricWithState:(int)arg1 messageCount:(int)arg2 messageSize:(long long)arg3 retryCount:(int)arg4;
- (id)logMessageForNetworkUsageWithService:(int)arg1 requestType:(int)arg2 requestErrorDomain:(id)arg3 requestErrorCode:(long long)arg4 requestErrorDescription:(id)arg5 requestDataSize:(int)arg6 responseDataSize:(int)arg7 responseTime:(int)arg8 requestingAppId:(id)arg9;
- (id)logMessageForNetworkWithTileSets:(id)arg1 requestDataSize:(int)arg2 responseDataSize:(int)arg3 responseTime:(int)arg4;
- (id)logMessageForPlaceDataCacheRequst:(id)arg1 appIdentifier:(id)arg2 traits:(id)arg3;
- (id)logMessageForPurgeMetricWithState:(int)arg1 messageCount:(int)arg2;
- (id)logMessageForSearchFieldType:(int)arg1 prefix:(id)arg2 displayedResults:(id)arg3 selectedIndex:(int)arg4 traits:(id)arg5;
- (id)logMessageForStateTiming:(id)arg1 traits:(id)arg2 generateOnlyIfStateChanged:(BOOL)arg3;
- (id)logMessageForSuggestions:(id)arg1 entryListIndex:(int)arg2 entryIndex:(int)arg3 searchFieldType:(int)arg4 prefix:(id)arg5 displayedResults:(id)arg6 selectedIndex:(int)arg7 traits:(id)arg8;
- (id)logMessageForSuggestions:(id)arg1 entryListIndex:(int)arg2 entryIndex:(int)arg3 traits:(id)arg4;
- (id)logMessageForSuggestions:(id)arg1 suggestionEntryMetadata:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 traits:(id)arg5;
- (id)logMessageForTileCacheHitWithTileStyle:(int)arg1 cacheHitCount:(unsigned int)arg2 cacheMissCount:(unsigned int)arg3;
- (id)logMessageForTileSetState:(int)arg1 newCoverage:(double)arg2 oldCoverage:(double)arg3 seconds:(double)arg4 traits:(id)arg5;
- (id)logMessageForTimeToLeaveHypothesisWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(int)arg6;
- (id)logMessageForTimeToLeaveIntialTravelTime:(double)arg1;
- (id)logMessageForTransitAppLaunchWithBundleId:(id)arg1 sourceLocation:(CDStruct_c3b9c2ee)arg2 destinationLocation:(CDStruct_c3b9c2ee)arg3;
- (id)logMessageForUserAction:(id)arg1 eventValue:(id)arg2;
- (id)logMessageForUserAction:(id)arg1 eventValue:(id)arg2 traits:(id)arg3 placeActionDetails:(id)arg4 providerId:(id)arg5;
- (id)logMessageForUserAction:(id)arg1 eventValue:(id)arg2 traits:(id)arg3 placeActionDetails:(id)arg4 routeDetails:(id)arg5 serverMetadata:(id)arg6 uiTarget:(int)arg7;
- (void)registerConnectedCarInfoTraits:(id)arg1;

@end

