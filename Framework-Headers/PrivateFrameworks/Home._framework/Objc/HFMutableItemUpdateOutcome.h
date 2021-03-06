//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemUpdateOutcome.h>

@class NSDictionary, NSMutableDictionary;

@interface HFMutableItemUpdateOutcome : HFItemUpdateOutcome
{
    NSMutableDictionary *_mutableResults;
}

@property (strong, nonatomic) NSMutableDictionary *mutableResults; // @synthesize mutableResults=_mutableResults;
@property (nonatomic) unsigned long long outcomeType; // @dynamic outcomeType;
@property (strong, nonatomic) NSDictionary *results;

- (void).cxx_destruct;
- (void)addResultsFromDictionary:(id)arg1;
- (void)addResultsFromOutcome:(id)arg1;
- (id)allKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResults:(id)arg1 type:(unsigned long long)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

