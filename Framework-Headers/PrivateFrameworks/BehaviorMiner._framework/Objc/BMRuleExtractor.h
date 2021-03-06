//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface BMRuleExtractor : NSObject
{
    BOOL _shouldStop;
    NSMutableDictionary *_patterns;
    NSArray *_items;
    unsigned long long _basketCount;
}

@property (readonly, nonatomic) unsigned long long basketCount; // @synthesize basketCount=_basketCount;
@property (strong, nonatomic) NSArray *items; // @synthesize items=_items;
@property (strong, nonatomic) NSMutableDictionary *patterns; // @synthesize patterns=_patterns;
@property BOOL shouldStop; // @synthesize shouldStop=_shouldStop;

- (void).cxx_destruct;
- (void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 currentDate:(id)arg5 datedBaskets:(id)arg6 handler:(CDUnknownBlockType)arg7;
- (void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithPatterns:(id)arg1 items:(id)arg2 basketCount:(unsigned long long)arg3;
- (id)itemSetForItemIndexSet:(id)arg1;
- (id)subsetsOfItemset:(id)arg1;
- (unsigned long long)supportOfItemSet:(id)arg1;
- (void)terminateEarly;

@end

