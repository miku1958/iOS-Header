//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDDrawableLayout.h>

#import <iWorkImport/TSWPColumnMetrics-Protocol.h>
#import <iWorkImport/TSWPLayoutParent-Protocol.h>

@class NSArray, NSMapTable, TSAGalleryItem, TSDLayoutGeometry, TSUBezierPath, TSWPLayout, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSAGalleryLayout : TSDDrawableLayout <TSWPLayoutParent, TSWPColumnMetrics>
{
    struct CGRect _imageRectInImageContainer;
    TSWPLayout *_galleryCaptionLayout;
    NSMapTable *_captionLayoutsForItems;
    NSArray *_captionLayouts;
    TSUBezierPath *_cachedPathForClippingConnectionLines;
    TSAGalleryItem *_currentItem;
    struct CGRect _imageContainerRect;
    struct CGRect _pageControlBoundingRect;
}

@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) TSWPLayout *currentCaptionLayout;
@property (strong, nonatomic) TSAGalleryItem *currentItem; // @synthesize currentItem=_currentItem;
@property (readonly, nonatomic) TSDLayoutGeometry *imageContainerGeometry;
@property (readonly, nonatomic) struct CGRect imageContainerRect; // @synthesize imageContainerRect=_imageContainerRect;
@property (readonly, nonatomic) TSDLayoutGeometry *imageGeometry;
@property (readonly, nonatomic) TSDLayoutGeometry *imageGeometryInRoot;
@property (readonly, nonatomic) struct CGRect imageRect;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) struct CGRect pageControlBoundingRect; // @synthesize pageControlBoundingRect=_pageControlBoundingRect;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) double textScaleFactor;

+ (double)p_constrainedDimensionForDimension:(double)arg1 min:(double)arg2 max:(double)arg3;
- (void).cxx_destruct;
- (id)additionalGuides;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)boundsForStandardKnobs;
- (id)children;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (id)dependentsOfTextLayout:(id)arg1;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (struct CGRect)imageFrameInRootWithDragOffset:(struct CGPoint)arg1;
- (struct CGRect)imageRectInImageContainerForItem:(id)arg1;
- (id)initWithInfo:(id)arg1;
- (void)invalidateExteriorWrap;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidateSize;
- (struct CGSize)minimumSize;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (id)p_galleryInfo;
- (struct CGRect)p_imageRectInImageContainerForItem:(id)arg1 dragOffset:(struct CGPoint)arg2;
- (struct CGSize)p_maximumLayoutSize;
- (double)p_minScaleForItem:(id)arg1;
- (id)pathForClippingConnectionLines;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (Class)repClassForTextLayout:(id)arg1;
- (void)updateChildrenFromInfo;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end
