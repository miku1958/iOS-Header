//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface NFContainerPool : NSObject
{
    BOOL _objectGraphDrainingEnabled;
    NSMutableDictionary *_singletons;
    NSMutableDictionary *_containerSingletons;
    NSMutableDictionary *_graph;
    unsigned long long _depth;
    unsigned long long _drainDepth;
    NSMutableArray *_onDrainBlocks;
    NSMutableArray *_onDrainCopyPoolObjectGraphBlocks;
}

@property (strong, nonatomic) NSMutableDictionary *containerSingletons; // @synthesize containerSingletons=_containerSingletons;
@property (nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property (nonatomic) unsigned long long drainDepth; // @synthesize drainDepth=_drainDepth;
@property (strong, nonatomic) NSMutableDictionary *graph; // @synthesize graph=_graph;
@property (nonatomic, getter=isObjectGraphDrainingEnabled) BOOL objectGraphDrainingEnabled; // @synthesize objectGraphDrainingEnabled=_objectGraphDrainingEnabled;
@property (strong, nonatomic) NSMutableArray *onDrainBlocks; // @synthesize onDrainBlocks=_onDrainBlocks;
@property (strong, nonatomic) NSMutableArray *onDrainCopyPoolObjectGraphBlocks; // @synthesize onDrainCopyPoolObjectGraphBlocks=_onDrainCopyPoolObjectGraphBlocks;
@property (readonly, nonatomic, getter=isPoolPreparedForLockingGraph) BOOL poolPreparedForLockingGraph;
@property (strong, nonatomic) NSMutableDictionary *singletons; // @synthesize singletons=_singletons;

- (void).cxx_destruct;
- (id)copyWithObjectGraphDrainingDisabled;
- (void)drain;
- (id)enter:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithSingletonPool:(id)arg1;
- (void)linkDepth:(CDUnknownBlockType)arg1;
- (void)onDrain:(CDUnknownBlockType)arg1;
- (void)onDrainCopyPoolObjectGraph:(CDUnknownBlockType)arg1;

@end

