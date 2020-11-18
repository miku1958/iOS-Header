//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPColumnMetrics-Protocol.h>
#import <iWorkImport/TSWPLayoutOwner-Protocol.h>
#import <iWorkImport/TSWPLayoutTarget-Protocol.h>

@class NSMutableArray, NSString, TSDCanvas, TSDLayout, TSPObject, TSWPPadding, TSWPStorage;
@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn, TSWPTopicNumberHints;

__attribute__((visibility("hidden")))
@interface TSWPStorageMeasurer : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics>
{
    TSWPStorage *_storage;
    NSMutableArray *_columns;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    unsigned int _flags;
    struct CGPoint _anchor;
}

@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) struct CGPoint anchorPoint;
@property (strong, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property (readonly, nonatomic) unsigned int autosizeFlags;
@property (readonly, nonatomic) TSDCanvas *canvas;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) struct CGSize currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property (readonly, nonatomic) id<TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct __CFLocale *hyphenationLocale;
@property (readonly, nonatomic) BOOL isInstructional;
@property (readonly, nonatomic) BOOL isLinked;
@property (readonly, nonatomic) BOOL layoutIsValid;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) BOOL marginsAreMirrored;
@property (readonly, nonatomic) struct CGRect maskRect;
@property (readonly, nonatomic) double maxAnchorY;
@property (readonly, nonatomic) struct CGSize maxSize;
@property (readonly, nonatomic) struct CGSize minSize;
@property (readonly, nonatomic) int naturalAlignment;
@property (readonly, nonatomic) int naturalDirection;
@property (readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property (readonly, nonatomic) id<TSWPOffscreenColumn> nextTargetFirstColumn;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumbers;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, nonatomic) unsigned long long pageNumber;
@property (readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
@property (readonly, nonatomic) struct CGPoint position;
@property (readonly, nonatomic) id<TSWPOffscreenColumn> previousTargetLastColumn;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *previousTargetTopicNumbers;
@property (readonly, nonatomic) BOOL repShouldPreventCaret;
@property (readonly, nonatomic) BOOL shouldHyphenate;
@property (readonly, nonatomic) BOOL shouldWrapAroundExternalDrawables;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) double textScaleFactor;
@property (readonly, nonatomic) int verticalAlignment;
@property (readonly, nonatomic) BOOL wantsLineFragments;

- (void).cxx_destruct;
- (void)addAttachmentLayout:(id)arg1;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (BOOL)caresAboutStorageChanges;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (void)didLayoutChangingDirtyRanges;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (id)initWithStorage:(id)arg1;
- (BOOL)isLastTarget;
- (BOOL)isLayoutOffscreen;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (struct CGSize)measuredSizeWithFlags:(unsigned int)arg1;
- (struct CGSize)measuredSizeWithFlags:(unsigned int)arg1 minSize:(struct CGSize)arg2 maxSize:(struct CGSize)arg3;
- (id)pLayoutWithMinSize:(struct CGSize)arg1 maxSize:(struct CGSize)arg2 anchor:(struct CGPoint)arg3 flags:(unsigned int)arg4;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;
- (id)textWrapper;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)validatedLayoutForInlineDrawable:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end

