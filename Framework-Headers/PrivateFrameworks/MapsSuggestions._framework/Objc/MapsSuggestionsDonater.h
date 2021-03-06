//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsDonater : NSObject <MapsSuggestionsObject>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)donateETA:(id)arg1 entry:(id)arg2;
- (BOOL)donateFlightLookupWithFlightNumber:(id)arg1 departureAirportCode:(id)arg2 departureTime:(id)arg3;
- (BOOL)donateSignalPack:(id)arg1;
- (id)init;

@end

