//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MAGraph, NSMutableSet;

@interface MAMemoryFootprint : NSObject
{
    MAGraph *_graph;
    NSMutableSet *_allKeys;
    NSMutableSet *_allValues;
    unsigned long long _allNodesSize;
    unsigned long long _allEdgesSize;
    unsigned long long _halfEdgeCount;
    unsigned long long _orderedSetCount;
    unsigned long long _arrayCount;
    unsigned long long _dictionaryCount;
    unsigned long long _basicHashCount;
    unsigned long long _basicHashValueStoreCount;
    unsigned long long _graphSize;
    unsigned long long _basicNodeSize;
    unsigned long long _basicEdgeSize;
    unsigned long long _nodeCount;
    unsigned long long _edgeCount;
    unsigned long long _maximumEdgeCountInNode;
    unsigned long long _countOfNodesWithAtMostEightEdges;
}

@property (readonly, nonatomic) unsigned long long actualKeyCount;
@property (readonly, nonatomic) unsigned long long actualKeysSize;
@property (readonly, nonatomic) unsigned long long actualValueCount;
@property (readonly, nonatomic) unsigned long long actualValuesSize;
@property (readonly, nonatomic) unsigned long long allEdgesSize; // @synthesize allEdgesSize=_allEdgesSize;
@property (readonly, nonatomic) unsigned long long allNodesSize; // @synthesize allNodesSize=_allNodesSize;
@property (readonly, nonatomic) float averageEdgeCountPerNode;
@property (readonly, nonatomic) unsigned long long averageEdgeSize;
@property (readonly, nonatomic) unsigned long long averageNodeSize;
@property (readonly, nonatomic) unsigned long long basicEdgeSize; // @synthesize basicEdgeSize=_basicEdgeSize;
@property (readonly, nonatomic) unsigned long long basicNodeSize; // @synthesize basicNodeSize=_basicNodeSize;
@property (readonly, nonatomic) unsigned long long countOfNodesWithAtMostEightEdges; // @synthesize countOfNodesWithAtMostEightEdges=_countOfNodesWithAtMostEightEdges;
@property (readonly, nonatomic) unsigned long long edgeCount; // @synthesize edgeCount=_edgeCount;
@property (readonly, nonatomic) unsigned long long graphSize; // @synthesize graphSize=_graphSize;
@property (readonly, nonatomic) unsigned long long maximumEdgeCountInNode; // @synthesize maximumEdgeCountInNode=_maximumEdgeCountInNode;
@property (readonly, nonatomic) unsigned long long nodeCount; // @synthesize nodeCount=_nodeCount;
@property (readonly, nonatomic) unsigned long long optimalKeyCount;
@property (readonly, nonatomic) unsigned long long optimalKeysSize;
@property (readonly, nonatomic) unsigned long long optimalValueCount;
@property (readonly, nonatomic) unsigned long long optimalValuesSize;
@property (readonly, nonatomic) unsigned long long totalSize;

- (void).cxx_destruct;
- (unsigned long long)_reportArray:(id)arg1;
- (unsigned long long)_reportDictionary:(id)arg1;
- (void)_reportEdge:(id)arg1 withSize:(unsigned long long)arg2;
- (void)_reportGraph:(id)arg1 withSize:(unsigned long long)arg2;
- (void)_reportKey:(id)arg1;
- (void)_reportNode:(id)arg1 withSize:(unsigned long long)arg2 edgeCount:(unsigned long long)arg3;
- (unsigned long long)_reportOrderedSet:(id)arg1;
- (void)_reportValue:(id)arg1;
- (void)dump;
- (id)initWithGraph:(id)arg1;
- (void)update;
- (unsigned long long)version;

@end

