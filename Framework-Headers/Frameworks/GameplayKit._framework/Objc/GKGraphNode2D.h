//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKGraphNode.h>

@class MISSING_TYPE;

@interface GKGraphNode2D : GKGraphNode
{
    struct GKCGraphNode2D *_cGraphNode2D;
}

@property (nonatomic) MISSING_TYPE *position;

+ (id)nodeWithPoint: /* Error: Ran out of types for this method. */;
- (struct GKCGraphNode2D *)cGraphNode2D;
- (float)costToNode:(id)arg1;
- (void)deleteCGraphNode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoint: /* Error: Ran out of types for this method. */;
- (struct GKCGraphNode *)makeCGraphNode;

@end

