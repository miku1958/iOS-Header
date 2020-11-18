//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsLocationUpdater-Protocol.h>

@class MapsSuggestionsObservers, NSString;

@interface MapsSuggestionsBaseLocationUpdater : NSObject <MapsSuggestionsLocationUpdater>
{
    NSString *_name;
    struct Queue _queue;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)awaitQueue;
- (void)considerMyAllowanceAsLimited:(BOOL)arg1;
- (void)considerMyNewLocation:(id)arg1;
- (void)considerMyNewVisit:(id)arg1;
- (unsigned long long)countLocationObservers;
- (void)dealloc;
- (id)dispatchQueue;
- (BOOL)hasObservers;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (void)onStartImplementation;
- (void)onStopImplementation;
- (id)restartLocationUpdatesForDelegate:(id)arg1;
- (id)startLocationUpdatesForDelegate:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;

@end
