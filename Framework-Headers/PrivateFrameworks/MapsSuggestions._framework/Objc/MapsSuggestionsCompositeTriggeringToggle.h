//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsTriggeringToggle.h>

#import <MapsSuggestions/MapsSuggestionsTriggerObserver-Protocol.h>

@class NSMutableArray, NSString;

@interface MapsSuggestionsCompositeTriggeringToggle : MapsSuggestionsTriggeringToggle <MapsSuggestionsTriggerObserver>
{
    NSMutableArray *_runConditions;
    NSMutableArray *_triggers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

- (void).cxx_destruct;
- (void)addRunCondition:(id)arg1;
- (void)addTrigger:(id)arg1;
- (void)dealloc;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)arg1 behavior:(unsigned long long)arg2;
- (id)objectForJSON;
- (BOOL)shouldRun;
- (void)triggerFired:(id)arg1;

@end

