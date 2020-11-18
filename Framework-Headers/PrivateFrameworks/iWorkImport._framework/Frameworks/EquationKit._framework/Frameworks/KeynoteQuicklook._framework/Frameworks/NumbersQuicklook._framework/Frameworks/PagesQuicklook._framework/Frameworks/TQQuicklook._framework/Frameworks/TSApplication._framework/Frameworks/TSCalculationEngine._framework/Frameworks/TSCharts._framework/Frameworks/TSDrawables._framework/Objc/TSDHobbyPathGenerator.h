//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDHobbyPathGenerator : NSObject
{
    BOOL mClosed;
    struct vector<CGPoint, std::__1::allocator<CGPoint>> *mPoints;
    struct vector<CGPoint, std::__1::allocator<CGPoint>> *mMorphedPoints;
}

- (void)adjustNodeTypes:(id)arg1;
- (void)adjustRatio:(id)arg1;
- (void)adjustRemoveStraightNodes:(id)arg1;
- (void)adjustRotationalSymmetry:(id)arg1;
- (void)adjustStraightEdges:(id)arg1;
- (void)adjustStraightenUp:(id)arg1;
- (void)calculateClosings;
- (id)calculateHobbyPath;
- (void)dealloc;
- (double)distanceForSegment:(unsigned long long)arg1 overRange:(struct _NSRange)arg2 furthestNode:(unsigned long long *)arg3 inSubpath:(id)arg4;
- (id)hobbyPathFrom:(id)arg1 morphedPath:(id *)arg2;
- (id)init;
- (void)morphPointsTo:(id)arg1;
- (BOOL)pathWillClose:(id)arg1;

@end
