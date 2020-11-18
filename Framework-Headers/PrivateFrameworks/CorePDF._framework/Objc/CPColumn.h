//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPRegion.h>

@interface CPColumn : CPRegion
{
    BOOL hasCentredParagraph;
    BOOL hasColumnBreak;
    double maxLeftPad;
    double maxRightPad;
    double maxRight;
    double minLeft;
    BOOL complete;
}

@property BOOL complete; // @synthesize complete;

- (void)accept:(id)arg1;
- (double)bottomBaseline;
- (struct CGRect)columnBounds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasCentredParagraph;
- (int)inOrder;
- (id)init;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isImageRegion;
- (BOOL)isRowRegion;
- (BOOL)isShapeRegion;
- (double)leftPad;
- (double)maxLeftPad;
- (double)maxRightPad;
- (int)outOrder;
- (struct CGRect)paddedBounds;
- (double)rightPad;
- (double)selectionBottom;
- (void)setHasCentredParagraph:(BOOL)arg1;
- (void)setHasColumnBreak:(BOOL)arg1;
- (void)setIsImageRegion:(BOOL)arg1;
- (void)setMaxLeftPad:(double)arg1;
- (void)setMaxRightPad:(double)arg1;

@end

