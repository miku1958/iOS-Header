//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsTriggerObserver-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MapsSuggestionsLimitedDictionary : NSObject <MapsSuggestionsTriggerObserver>
{
    unsigned long long _maxCapacity;
    NSMutableDictionary *_dict;
    NSMutableDictionary *_hits;
    NSMutableArray *_order;
    unsigned long long _totalHits;
    unsigned long long _totalMisses;
    NSString *uniqueName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName; // @synthesize uniqueName;

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)hitsOnKey:(id)arg1;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (double)totalHitRatio;
- (void)triggerFired:(id)arg1;

@end

