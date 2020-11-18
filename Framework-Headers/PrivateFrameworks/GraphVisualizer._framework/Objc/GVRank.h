//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GVRank : NSObject
{
    NSMutableArray *nodes;
    double separation;
    GVRank *prev;
    GVRank *next;
}

@property (readonly, nonatomic) double height;
@property (nonatomic) GVRank *next; // @synthesize next;
@property (nonatomic) GVRank *prev; // @synthesize prev;
@property (readonly, nonatomic) double width;

- (void)addNode:(id)arg1;
- (void)buildNodeIterators;
- (void)centerNode:(id)arg1 at:(double)arg2;
- (void)centerNodesWithRespectoTo:(id)arg1;
- (void)dealloc;
- (void)exchangeNodeAtIndex:(unsigned long long)arg1 withNodeAtIndex:(unsigned long long)arg2;
- (unsigned long long)inCrossings;
- (id)initWithSeparation:(struct CGSize)arg1;
- (id)neighborsOfNode:(id)arg1;
- (id)nodes;
- (unsigned long long)outCrossings;
- (void)removeNode:(id)arg1;
- (struct CGSize)sizeForDummy;
- (void)sortByIndex;

@end

