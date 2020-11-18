//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, WBSMutableOrderedSet;

@interface WBSMutableOrderedDictionary : NSObject
{
    WBSMutableOrderedSet *_mutableOrderedSetOfKeys;
    NSMutableDictionary *_mutableDictionary;
    unsigned long long _maximumCount;
}

@property (readonly, nonatomic) NSArray *orderedKeys;
@property (readonly, nonatomic) NSArray *orderedValues;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMaximumCount:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

