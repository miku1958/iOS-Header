//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/ABSearchOperationDelegate-Protocol.h>
#import <EventKitUI/CLLocationManagerDelegate-Protocol.h>
#import <EventKitUI/MKSearchCompleterDelegate-Protocol.h>

@class ABSearchOperation, CLGeocoder, CLInUseAssertion, CLLocationManager, EKEventStore, EKOccurrenceCacheLocationSearch, EKStructuredLocation, MKLocalSearch, MKLocalSearchCompleter, NSArray, NSCharacterSet, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;
@protocol EKUILocationSearchModelDelegate, GEOMapServiceCompletionTicket, OS_dispatch_queue;

@interface EKUILocationSearchModel : NSObject <CLLocationManagerDelegate, MKSearchCompleterDelegate, ABSearchOperationDelegate>
{
    CLLocationManager *_locationManager;
    CLInUseAssertion *_locationAssertion;
    MKLocalSearchCompleter *_completer;
    EKStructuredLocation *_currentLocation;
    NSOperationQueue *_abSearchQueue;
    ABSearchOperation *_abSearchOperation;
    CLGeocoder *_geocoder;
    MKLocalSearch *_localSearch;
    NSObject<OS_dispatch_queue> *_recentsQueue;
    NSObject<OS_dispatch_queue> *_eventsQueue;
    EKEventStore *_eventStore;
    EKOccurrenceCacheLocationSearch *_eventsSearch;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSObject<OS_dispatch_queue> *_conferenceRoomProcessingQueue;
    NSOperationQueue *_conferenceRoomOperationQueue;
    NSMutableArray *_mutableConferenceRoomSearchResults;
    NSMutableDictionary *_conferenceRoomAddressesToConferenceRooms;
    NSMutableArray *_recentsSearchResults;
    NSMutableArray *_frequentsSearchResults;
    NSMutableArray *_eventsSearchResults;
    NSMutableArray *_contactsSearchResults;
    NSArray *_mapCompletionSearchResults;
    id<EKUILocationSearchModelDelegate> _delegate;
}

@property (readonly, nonatomic) NSArray *conferenceRoomSearchResults;
@property (readonly, nonatomic) NSArray *contactsSearchResults; // @synthesize contactsSearchResults=_contactsSearchResults;
@property (strong, nonatomic) EKStructuredLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<EKUILocationSearchModelDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *eventsSearchResults; // @synthesize eventsSearchResults=_eventsSearchResults;
@property (readonly, nonatomic) NSArray *frequentsSearchResults; // @synthesize frequentsSearchResults=_frequentsSearchResults;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<GEOMapServiceCompletionTicket> lastTicket;
@property (readonly, nonatomic) NSArray *mapCompletionSearchResults; // @synthesize mapCompletionSearchResults=_mapCompletionSearchResults;
@property (readonly, nonatomic) NSArray *recentsSearchResults; // @synthesize recentsSearchResults=_recentsSearchResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CLLocationForDictionary:(id)arg1;
- (void)_addDiscoveredConferenceRooms:(id)arg1;
- (void)_handleAvailabilityResults:(id)arg1 forOperation:(id)arg2;
- (void)_processDirectorySearchResultSet:(id)arg1 forOperation:(id)arg2;
- (void)addLocationToRecents:(id)arg1 addressString:(id)arg2;
- (void)beginSearchForTerm:(id)arg1;
- (void)cancelSearch;
- (void)completerDidUpdateResults:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (void)dedupeResults;
- (id)dictionaryForCLLocation:(id)arg1;
- (void)getCurrentLocation;
- (id)initWithEventStore:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)resetConferenceRoomSearchResults;
- (void)resetContactsSearchResults;
- (void)resetEventsSearchResults;
- (void)resetSearchResults:(BOOL)arg1;
- (void)searchConferenceRooms:(id)arg1;
- (void)searchFrequentLocations:(id)arg1;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3;
- (void)selectCurrentLocation;
- (void)selectLocation:(id)arg1;
- (void)selectMapSearchCompletion:(id)arg1;
- (void)stopUpdatingLocation;
- (void)updateEventLocations:(id)arg1;
- (void)updateRecents:(id)arg1;

@end

