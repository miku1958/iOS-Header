//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKGraphNode.h>

@class MISSING_TYPE;

@interface GKGridGraphNode : GKGraphNode
{
    struct GKCGridGraphNode *_cGridGraphNode;
    MISSING_TYPE *_gridPosition;
}

@property (nonatomic) MISSING_TYPE *gridPosition; // @synthesize gridPosition=_gridPosition;

+ (id)nodeWithGridPosition: /* Error: Ran out of types for this method. */;
- (struct GKCGridGraphNode *)cGridGraphNode;
- (float)costToNode:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)init;
- (id)initWithGridPosition: /* Error: Ran out of types for this method. */;
- (struct GKCGraphNode *)makeCGraphNode;

@end
