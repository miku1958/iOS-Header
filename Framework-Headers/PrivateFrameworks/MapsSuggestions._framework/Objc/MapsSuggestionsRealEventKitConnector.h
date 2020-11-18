//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsEventKitConnector-Protocol.h>

@class NSString;
@protocol MapsSuggestionsEventKitConnectorDelegate, OS_dispatch_queue;

@interface MapsSuggestionsRealEventKitConnector : NSObject <MapsSuggestionsEventKitConnector>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<MapsSuggestionsEventKitConnectorDelegate> delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsEventKitConnectorDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

- (void).cxx_destruct;
- (void)_eventStoreDidChange:(id)arg1;
- (id)calendarsForEntityType:(unsigned long long)arg1;
- (id)eventWithIdentifier:(id)arg1;
- (id)eventsMatchingPredicate:(id)arg1;
- (id)init;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
- (BOOL)removeEvent:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (id)visibleCalendars;

@end
