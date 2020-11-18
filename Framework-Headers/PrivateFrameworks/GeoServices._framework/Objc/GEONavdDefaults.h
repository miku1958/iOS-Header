//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEONavdDefaults : NSObject
{
}

@property (readonly, nonatomic) unsigned long long accessValueThresholdToUpdateCacheEntries;
@property (readonly, nonatomic) double ageForRefresh;
@property (readonly, nonatomic) double automaticTrafficIncidentRerouteDelay;
@property (readonly, nonatomic) double averageWalkingSpeed;
@property (readonly, nonatomic) double defaultExpirationOffset;
@property (readonly, nonatomic) double exitRegionSize;
@property (readonly, nonatomic) double extraLocationWaitTimeInterval;
@property (readonly, nonatomic) double fastWalkingSpeed;
@property (readonly, nonatomic) double hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
@property (readonly, nonatomic) double hypothesisResponseStaleToRefreshThresholdInSeconds;
@property (readonly, nonatomic) double hypothesisShouldPersistThresholdInSeconds;
@property (readonly, nonatomic) unsigned long long initialClientInitiatedHypothesisCacheAccessValue;
@property (readonly, nonatomic) unsigned long long initialSelfInitiatedHypothesisCacheAccessValue;
@property (readonly, nonatomic) double locationFreshnessThreshold;
@property (readonly, nonatomic) double locationReuseThreshold;
@property (readonly, nonatomic) double locationUpdateTimerInterval;
@property (readonly, nonatomic) double locationUpdatesDesiredAccuracyForDriving;
@property (readonly, nonatomic) double locationUpdatesDesiredAccuracyForWalking;
@property (readonly, nonatomic) double locationUpdatesDesiredAccuracyWhileStationaryForDriving;
@property (readonly, nonatomic) double locationUpdatesDesiredAccuracyWhileStationaryForWalking;
@property (readonly, nonatomic) double maxDistanceFromOriginToSuppressReroute;
@property (readonly, nonatomic) unsigned long long maxRandomJitterForHypothesisWakeup;
@property (readonly, nonatomic) long long maximumNumberOfDestinationsToMonitor;
@property (readonly, nonatomic) unsigned long long maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
@property (readonly, nonatomic) unsigned long long maximumNumberOfLeechedLocations;
@property (readonly, nonatomic) unsigned long long maximumNumberOfProcessingLoopRepeats;
@property (readonly, nonatomic) double maximumRefreshIntervalLeeway;
@property (readonly, nonatomic) double maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
@property (readonly, nonatomic) unsigned long long maximumTraceFileCount;
@property (readonly, nonatomic) double maximumUserRoutingPreferencesAge;
@property (readonly, nonatomic) unsigned long long minRandomJitterForHypothesisWakeup;
@property (readonly, nonatomic) double minimumDistanceToCompareAgainstLocationAccuracy;
@property (readonly, nonatomic) double minimumDistanceToGetLocationUpdatesInMeters;
@property (readonly, nonatomic) double minimumExpirationOffset;
@property (readonly, nonatomic) double minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
@property (readonly, nonatomic) double minimumTimerTimeStampFudge;
@property (readonly, nonatomic) double pendingStopTimeToLive;
@property (readonly, nonatomic) double predictionsWatchdogInterval;
@property (readonly, nonatomic) unsigned long long refreshEquationHighestFrequency;
@property (readonly, nonatomic) unsigned long long refreshEquationLowestFrequency;
@property (readonly, nonatomic) unsigned long long refreshEquationLowestFrequencyTransit;
@property (readonly, nonatomic) double refreshTimeIntervalBackoffBase;
@property (readonly, nonatomic) double refreshTimeIntervalBackoffMax;
@property (readonly, nonatomic) double refreshTimeIntervalToUseIfError;
@property (readonly, nonatomic) BOOL shouldAutomaticallyRerouteTrafficIncidents;
@property (readonly, nonatomic) BOOL shouldLazyLoadRoutes;
@property (readonly, nonatomic) BOOL shouldPreloadSubscriptions;
@property (readonly, nonatomic) BOOL shouldRequestInlineShields;
@property (readonly, nonatomic) BOOL shouldRequestLaneGuidance;
@property (readonly, nonatomic) BOOL shouldRunNavigationInDaemon;
@property (readonly, nonatomic) BOOL shouldShowServiceErrorAlert;
@property (readonly, nonatomic) BOOL shouldUseGuidanceEventManager;
@property (readonly, nonatomic) BOOL shouldUseServerSideETAs;
@property (readonly, nonatomic) double slowWalkingSpeed;
@property (readonly, nonatomic) double staleLocationUseTimerInterval;
@property (readonly, nonatomic) BOOL transitTTLSupported;
@property (readonly, nonatomic) double updateTimeout;
@property (readonly, nonatomic) BOOL useConservativeDepartureForRefreshTimer;

+ (id)sharedInstance;

@end

