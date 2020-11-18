//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKGraph.h>

@class MISSING_TYPE;

@interface GKGridGraph : GKGraph
{
    struct GKCGridGraph *_cGridGraph;
    BOOL _diagonalsAllowed;
}

@property (readonly, nonatomic) BOOL diagonalsAllowed; // @synthesize diagonalsAllowed=_diagonalsAllowed;
@property (readonly, nonatomic) unsigned long long gridHeight;
@property (readonly, nonatomic) MISSING_TYPE *gridOrigin;
@property (readonly, nonatomic) unsigned long long gridWidth;

+ (id)graphFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 diagonalsAllowed: /* Error: Ran out of types for this method. */;
+ (id)graphFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 diagonalsAllowed:(Class)arg4 nodeClass: /* Error: Ran out of types for this method. */;
+ (BOOL)supportsSecureCoding;
- (struct GKCGridGraph *)cGridGraph;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)connectNodeToAdjacentNodes:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 diagonalsAllowed: /* Error: Ran out of types for this method. */;
- (id)initFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 diagonalsAllowed:(Class)arg4 nodeClass: /* Error: Ran out of types for this method. */;
- (id)initWithCoder:(id)arg1;
- (struct GKCGraph *)makeCGraph;
- (id)nodeAtGridPosition: /* Error: Ran out of types for this method. */;
- (id)nodeAtGridPositionNoNilCheck: /* Error: Ran out of types for this method. */;
- (void)removeNodes:(id)arg1;

@end

