//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BehaviorMiner/BMPatternMiner-Protocol.h>

@class NSArray;

@interface BMAprioriPatternMiner : NSObject <BMPatternMiner>
{
    BOOL _shouldStop;
    NSArray *_items;
    NSArray *_indexBaskets;
    unsigned long long _maxItemsetSize;
}

@property (readonly, nonatomic) NSArray *indexBaskets; // @synthesize indexBaskets=_indexBaskets;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (nonatomic) unsigned long long maxItemsetSize; // @synthesize maxItemsetSize=_maxItemsetSize;
@property BOOL shouldStop; // @synthesize shouldStop=_shouldStop;

- (void).cxx_destruct;
- (id)getItemIndexSetsWithMinSupport:(double)arg1 itemIndexSets:(id)arg2;
- (id)initWithBaskets:(id)arg1;
- (id)minePatternsWithMinSupport:(unsigned long long)arg1 constrainedToPatternsWithTypes:(id)arg2;
- (id)supportOfItemIndexSet:(id)arg1;
- (void)terminateEarly;

@end
