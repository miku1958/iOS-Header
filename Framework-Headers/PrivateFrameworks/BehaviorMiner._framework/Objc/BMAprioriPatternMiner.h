//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BehaviorMiner/BMPatternMiner-Protocol.h>

@class NSMutableArray;

@interface BMAprioriPatternMiner : NSObject <BMPatternMiner>
{
    NSMutableArray *_indexBaskets;
    NSMutableArray *_items;
}

@property (copy, nonatomic) NSMutableArray *indexBaskets; // @synthesize indexBaskets=_indexBaskets;
@property (copy, nonatomic) NSMutableArray *items; // @synthesize items=_items;

- (void).cxx_destruct;
- (id)getItemIndexSetsWithMinSupport:(double)arg1 itemIndexSets:(id)arg2;
- (id)initWithBaskets:(id)arg1;
- (id)minePatternsWithMinSupport:(unsigned long long)arg1 constrainedToPatternsWithTypes:(id)arg2;
- (id)supportOfItemIndexSet:(id)arg1;

@end
