//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>

#import <MapsSuggestions/MNNavigationServiceObserver-Protocol.h>

@class NSString;

@interface MapsSuggestionsNavigationStateChangedTrigger : MapsSuggestionsBaseTrigger <MNNavigationServiceObserver>
{
    BOOL _isNavigating;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)init;
- (void)navigationService:(id)arg1 didChangeNavigationState:(int)arg2;

@end

