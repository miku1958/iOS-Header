//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class CLLocation, GEOAutomobileOptions, MapsSuggestionsCanKicker, MapsSuggestionsDonater, MapsSuggestionsETARequester, MapsSuggestionsETARequirements, MapsSuggestionsFlightUpdater, MapsSuggestionsManager, MapsSuggestionsMutableWeakEntries, MapsSuggestionsPredictor, MapsSuggestionsVirtualGarage, NSMutableDictionary, NSString;
@protocol MapsSuggestionsNetworkRequester, MapsSuggestionsTimer, OS_dispatch_queue;

@interface MapsSuggestionsTracker : NSObject <MapsSuggestionsObject>
{
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsETARequirements *_requirements;
    id<MapsSuggestionsTimer> _refreshTimer;
    double _refreshInterval;
    double _refreshLeeway;
    double _refreshDeferTime;
    int _transportType;
    MapsSuggestionsManager *_manager;
    NSMutableDictionary *_etaTitleFormatters;
    NSMutableDictionary *_distanceTitleFormatters;
    NSMutableDictionary *_etaChargeTitleFormatters;
    BOOL _shouldBeRunning;
    MapsSuggestionsETARequester *_etaRequester;
    MapsSuggestionsDonater *_donater;
    MapsSuggestionsCanKicker *_currentLocationWiper;
    NSMutableDictionary *_previousETAs;
    id _transportTypeChangedListener;
    MapsSuggestionsVirtualGarage *_virtualGarage;
    MapsSuggestionsFlightUpdater *_flightUpdater;
    int _mapType;
    GEOAutomobileOptions *_automobileOptions;
    CLLocation *_currentLocation;
    MapsSuggestionsMutableWeakEntries *_trackedEntries;
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    MapsSuggestionsPredictor *_predictor;
}

@property (strong, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property (strong) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mapType; // @synthesize mapType=_mapType;
@property (strong, nonatomic) id<MapsSuggestionsNetworkRequester> networkRequester; // @synthesize networkRequester=_networkRequester;
@property (strong, nonatomic) MapsSuggestionsPredictor *predictor; // @synthesize predictor=_predictor;
@property (readonly) Class superclass;
@property (strong, nonatomic) MapsSuggestionsMutableWeakEntries *trackedEntries; // @synthesize trackedEntries=_trackedEntries;
@property (readonly, nonatomic) NSString *uniqueName;

- (void).cxx_destruct;
- (void)clearLocationAndETAs;
- (void)dealloc;
- (id)initWithManager:(id)arg1 requirements:(id)arg2 network:(id)arg3 flightUpdater:(id)arg4 virtualGarage:(id)arg5;
- (void)resetAllTitleFormatting;
- (void)scheduleRefresh;
- (void)setLocation:(id)arg1;
- (void)setTitleFormatter:(id)arg1 forType:(long long)arg2;
- (void)trackSuggestionEntries:(id)arg1 transportType:(int)arg2;
- (void)unschedule;

@end
