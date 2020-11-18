//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/CLLocationManagerDelegate-Protocol.h>
#import <EventKitUI/MKSearchCompleterDelegate-Protocol.h>

@class CLGeocoder, CLInUseAssertion, CLLocationManager, CNContactStore, EKEventStore, EKOccurrenceCacheLocationSearch, EKStructuredLocation, MKLocalSearch, MKLocalSearchCompleter, NSArray, NSCharacterSet, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;
@protocol CNCancelable, EKUILocationSearchModelDelegate, GEOMapServiceCompletionTicket, OS_dispatch_queue;

@interface EKUILocationSearchModel : NSObject <CLLocationManagerDelegate, MKSearchCompleterDelegate>
{
    CLLocationManager *_locationManager;
    CLInUseAssertion *_locationAssertion;
    MKLocalSearchCompleter *_completer;
    EKStructuredLocation *_currentLocation;
    CLGeocoder *_geocoder;
    MKLocalSearch *_localSearch;
    CNContactStore *_contactStore;
    id<CNCancelable> _contactsSearchToken;
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
- (void)_addDiscoveredConferenceRooms:(id)arg1;
- (void)_handleAvailabilityResults:(id)arg1 forOperation:(id)arg2;
- (void)_processDirectorySearchResultSet:(id)arg1 forOperation:(id)arg2;
- (void)_updateContactsSearchWithResults:(id)arg1 forToken:(id)arg2;
- (void)addLocationToRecents:(id)arg1 addressString:(id)arg2;
- (void)beginSearchForTerm:(id)arg1;
- (void)cancelSearch;
- (void)completerDidUpdateResults:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (void)dedupeResults;
- (void)getCurrentLocation;
- (id)initWithEventStore:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (BOOL)removeRecentLocation:(id)arg1;
- (void)resetConferenceRoomSearchResults;
- (void)resetContactsSearchResults;
- (void)resetEventsSearchResults;
- (void)resetSearchResults:(BOOL)arg1;
- (void)searchConferenceRooms:(id)arg1;
- (void)searchFrequentLocations:(id)arg1;
- (void)selectCurrentLocation;
- (void)selectLocation:(id)arg1;
- (void)selectMapSearchCompletion:(id)arg1;
- (void)stopUpdatingLocation;
- (void)updateContacts:(id)arg1;
- (void)updateEventLocations:(id)arg1;
- (void)updateRecents:(id)arg1;

@end

