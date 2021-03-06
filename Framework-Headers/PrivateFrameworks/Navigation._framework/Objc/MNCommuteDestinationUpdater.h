//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNCommuteDestinationScoreObserver-Protocol.h>
#import <Navigation/MNLocationTrackerDelegate-Protocol.h>

@class MNCommuteDestination, MNCommuteDestinationGeodesicDistanceScore, MNCommuteDestinationMapsSuggestionsScore, MNCommuteDestinationOffRouteScore, MNCommuteDestinationStartEndTimeScore, MNCommuteLocationTracker, MNLocation, MNNavigationTraceManager, MNTimeAndDistanceUpdater, NSDate, NSDictionary, NSString;
@protocol MNCommuteDestinationUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNCommuteDestinationUpdater : NSObject <MNLocationTrackerDelegate, MNCommuteDestinationScoreObserver>
{
    id<MNCommuteDestinationUpdaterDelegate> _delegate;
    MNCommuteDestination *_commuteDestination;
    MNCommuteLocationTracker *_locationTracker;
    unsigned long long _suggestionID;
    MNNavigationTraceManager *_traceManager;
    MNTimeAndDistanceUpdater *_timeAndDistanceUpdater;
    NSDictionary *_scores;
    MNLocation *_lastLocation;
}

@property (readonly, nonatomic) MNCommuteDestination *commuteDestination; // @synthesize commuteDestination=_commuteDestination;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MNCommuteDestinationUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) MNCommuteDestinationGeodesicDistanceScore *geodesicDistanceScore;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MNLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property (readonly, nonatomic) MNCommuteDestinationMapsSuggestionsScore *mapsSuggestionsScore;
@property (readonly, nonatomic) MNCommuteDestinationOffRouteScore *offRouteScore;
@property (readonly, nonatomic) NSDictionary *scores; // @synthesize scores=_scores;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) MNCommuteDestinationStartEndTimeScore *startEndTimeScore;
@property (nonatomic) unsigned long long suggestionID; // @synthesize suggestionID=_suggestionID;
@property (readonly) Class superclass;

+ (id)scoreClasses;
+ (id)sessionStartDate;
+ (void)setSessionStartDate:(id)arg1;
- (void).cxx_destruct;
- (id)_generateScoreObjects;
- (void)_updateDestination;
- (void)commuteScoreUpdaterDidUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithSuggestion:(id)arg1 traceManager:(id)arg2;
- (void)locationTracker:(id)arg1 didFailRerouteWithError:(id)arg2;
- (void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6;
- (void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2;
- (void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)locationTrackerDidArrive:(id)arg1;
- (void)locationTrackerDidCancelReroute:(id)arg1;
- (void)locationTrackerWillReroute:(id)arg1;
- (id)route;
- (void)start;
- (void)stop;
- (void)updateComparisonDestination:(id)arg1 ofType:(unsigned long long)arg2;
- (void)updateETA;
- (void)updateForLocation:(id)arg1;
- (void)updateLocationHistory:(id)arg1;

@end

