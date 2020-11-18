//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPColumnMaker : NSObject
{
    NSMutableArray *columns;
    CPZone *currentZone;
    NSMutableArray *allParagraphs;
    NSMutableArray *thinHorizontalShapes;
    NSMutableArray *otherShapes;
    NSMutableArray *images;
    NSMutableArray *paragraphWrappers;
    struct CGRect pageBounds;
    double maxParagraphDistance;
}

@property struct CGRect pageBounds; // @synthesize pageBounds;

- (void)anchorImages;
- (double)averageSpacing:(id)arg1;
- (void)callOuts;
- (BOOL)canSafelyAdd:(id)arg1 to:(id)arg2;
- (id)chunkAbove:(id)arg1 in:(id)arg2;
- (BOOL)closeImagesBetween:(id)arg1 and:(id)arg2 bounds:(struct CGRect)arg3;
- (BOOL)column:(id)arg1 isLinkedBelowTo:(id)arg2;
- (id)columns;
- (BOOL)cuttingShapeBetween:(id)arg1 and:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)intersectionCallout:(id)arg1;
- (BOOL)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3;
- (void)makeColumnsFrom:(id)arg1 zone:(id)arg2;
- (BOOL)paragraph:(id)arg1 isAbove:(id)arg2;
- (BOOL)paragraph:(id)arg1 isBelow:(id)arg2;
- (BOOL)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2;
- (BOOL)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2;
- (id)paragraphAbove:(id)arg1 in:(id)arg2;
- (id)paragraphBelow:(id)arg1 in:(id)arg2;
- (void)partitionShapes:(id)arg1;
- (void)splitColumns:(id)arg1;

@end
