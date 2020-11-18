//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPCopying-Protocol.h>
#import <CorePDF/NSCopying-Protocol.h>

@class CPPage, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPZoneBorder : NSObject <NSCopying, CPCopying>
{
    struct CGRect bounds;
    CPPage *page;
    NSMutableArray *ownerArray;
    NSMutableArray *graphicObjects;
    NSMutableArray *neighbors;
    NSMutableArray *intersections;
    BOOL isHorizontal;
    BOOL hasForwardVector;
    BOOL hasBackwardVector;
    double overhangMin;
    double overhangMax;
}

+ (void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(struct CGRect)arg3;
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1;
+ (struct CGRect)extendRect:(struct CGRect)arg1;
+ (void)outerVertices:(struct CGPoint *)arg1 fromBorders:(id)arg2 swollenBy:(double)arg3;
+ (void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2;
- (void)addGraphicObject:(id)arg1;
- (void)addNeighbor:(id)arg1;
- (void)addToArray:(id)arg1;
- (void)addToArray:(id)arg1 atIndex:(unsigned int)arg2;
- (struct CGRect)bounds;
- (void)combine:(id)arg1;
- (long long)compareXBounds:(id)arg1;
- (long long)compareYBounds:(id)arg1;
- (BOOL)continues:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithoutIntersections;
- (BOOL)crosses:(id)arg1;
- (void)dealloc;
- (BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 startingAtIndex:(unsigned int)arg3;
- (BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 throughIntersectionIndex:(unsigned int)arg3 returningTo:(id)arg4 atRect:(struct CGRect *)arg5;
- (id)getNextBorder:(unsigned int)arg1;
- (id)graphicObjectAtIndex:(unsigned int)arg1;
- (unsigned int)graphicObjectCount;
- (id)graphicObjects;
- (BOOL)hasBackwardVector;
- (BOOL)hasClockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(BOOL)arg2;
- (BOOL)hasCounterclockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(BOOL)arg2;
- (BOOL)hasForwardVector;
- (BOOL)hasNeighborShape:(id)arg1;
- (BOOL)hasNeighborShape:(id)arg1 atSide:(int)arg2;
- (BOOL)hasVectorGoingForward:(BOOL)arg1 startingAtIndex:(unsigned int *)arg2;
- (unsigned int)indexOfIntersectionWith:(id)arg1;
- (id)init;
- (id)initSuper;
- (id)initWithGraphicObject:(id)arg1;
- (void)instantiateVectors;
- (unsigned int)intersectionCount;
- (BOOL)intersectsWith:(id)arg1 atRect:(struct CGRect *)arg2;
- (BOOL)isHorizontal;
- (BOOL)isVertical;
- (id)neighborAtIndex:(unsigned int)arg1;
- (unsigned int)neighborCount;
- (id)ownerArray;
- (id)page;
- (void)removeFromArray;
- (void)removeFromArrayAtIndex:(unsigned int)arg1;
- (void)removeGraphicObjectAtIndex:(unsigned int)arg1;
- (void)removeLooseThreadsStartingFrom:(id)arg1;
- (void)removeNeighborAtIndex:(unsigned int)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setHasBackwardVector:(BOOL)arg1;
- (void)setHasForwardVector:(BOOL)arg1;
- (void)setSide:(int)arg1 ofPage:(id)arg2;
- (void)trimToLastIntersections;
- (BOOL)windsClockwiseOnto:(id)arg1;
- (long long)zOrder;

@end
