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
}

@property (readonly, nonatomic) MISSING_TYPE *gridPosition;

+ (id)nodeWithGridPosition: /* Error: Ran out of types for this method. */;
- (struct GKCGridGraphNode *)cGridGraphNode;
- (float)costToNode:(id)arg1;
- (void)deleteCGraphNode;
- (void)encodeWithCoder:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGridPosition: /* Error: Ran out of types for this method. */;
- (struct GKCGraphNode *)makeCGraphNode;

@end
