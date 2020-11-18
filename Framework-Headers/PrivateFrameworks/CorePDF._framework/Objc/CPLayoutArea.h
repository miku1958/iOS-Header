//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPRegion.h>

@interface CPLayoutArea : CPRegion
{
    BOOL isFirstLayout;
}

- (void)accept:(id)arg1;
- (void)addColumnBreaks;
- (id)description;
- (id)init;
- (BOOL)isBoxRegion;
- (BOOL)isFirstLayout;
- (BOOL)isGraphicalRegion;
- (BOOL)isImageRegion;
- (BOOL)isRowRegion;
- (BOOL)isShapeRegion;
- (BOOL)isSimilarTo:(id)arg1;
- (struct CGRect)layoutAreaBounds;
- (id)properties;
- (double)selectionBottom;
- (void)setIsFirstLayout:(BOOL)arg1;
- (void)setIsImageRegion:(BOOL)arg1;

@end
