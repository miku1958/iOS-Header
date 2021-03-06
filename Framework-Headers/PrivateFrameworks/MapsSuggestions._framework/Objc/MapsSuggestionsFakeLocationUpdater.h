//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseLocationUpdater.h>

#import <MapsSuggestions/MapsSuggestionsLocationUpdater-Protocol.h>

@class NSString;

@interface MapsSuggestionsFakeLocationUpdater : MapsSuggestionsBaseLocationUpdater <MapsSuggestionsLocationUpdater>
{
    BOOL _isRunning;
    unsigned long long _calledStartImplementation;
    unsigned long long _calledStopImplementation;
}

@property (readonly, nonatomic) unsigned long long calledStartImplementation; // @synthesize calledStartImplementation=_calledStartImplementation;
@property (readonly, nonatomic) unsigned long long calledStopImplementation; // @synthesize calledStopImplementation=_calledStopImplementation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

- (id)init;
- (void)onStartImplementation;
- (void)onStopImplementation;
- (void)sendLocation:(id)arg1;
- (void)sendVisit:(id)arg1;

@end

