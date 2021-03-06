//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsTrigger-Protocol.h>

@class MapsSuggestionsObservers, NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsBaseTrigger : NSObject <MapsSuggestionsTrigger>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    MapsSuggestionsObservers *_observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)dispatchQueue;
- (BOOL)hasObservers;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)triggerMyObservers;

@end

