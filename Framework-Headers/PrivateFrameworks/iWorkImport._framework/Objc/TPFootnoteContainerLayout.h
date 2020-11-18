//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

#import <iWorkImport/TSWPColumnMetrics-Protocol.h>
#import <iWorkImport/TSWPFootnoteMarkProvider-Protocol.h>
#import <iWorkImport/TSWPLayoutParent-Protocol.h>

@class NSString, TSWPPadding;
@protocol TSWPFootnoteMarkProvider;

__attribute__((visibility("hidden")))
@interface TPFootnoteContainerLayout : TSDLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPFootnoteMarkProvider>
{
    BOOL _vertical;
    double _lineWidth;
    double _maxFootnoteBlockHeight;
    double _footnoteSpacing;
    BOOL _includeFootnoteSeparatorLine;
    id<TSWPFootnoteMarkProvider> _footnoteMarkProvider;
}

@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) double blockHeight;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct CGRect footnoteSeparatorLineFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL includeFootnoteSeparatorLine; // @synthesize includeFootnoteSeparatorLine=_includeFootnoteSeparatorLine;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) double maxBlockHeight; // @synthesize maxBlockHeight=_maxFootnoteBlockHeight;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double textScaleFactor;

- (void).cxx_destruct;
- (void)addFootnoteLayout:(id)arg1;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (unsigned long long)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (id)computeLayoutGeometry;
- (id)dependentsOfTextLayout:(id)arg1;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (id)initWithFootnoteMarkProvider:(id)arg1 vertical:(BOOL)arg2 lineWidth:(double)arg3 maxFootnoteBlockHeight:(double)arg4 footnoteSpacing:(double)arg5;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (id)markStringForFootnoteReferenceStorage:(id)arg1;
- (id)markStringForFootnoteReferenceStorage:(id)arg1 ignoreDeletedFootnotes:(BOOL)arg2 forceDocumentEndnotes:(BOOL)arg3;
- (double)maxAutoGrowBlockHeightForTextLayout:(id)arg1;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (void)removeAllFootnoteLayouts;
- (void)removeFootnoteLayout:(id)arg1;
- (void)removeFootnoteLayoutWithInfo:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (Class)repClassOverride;
- (void)setFootnoteSpacing:(long long)arg1;
- (void)setLineWidth:(double)arg1;
- (BOOL)shouldProvideSizingGuides;
- (BOOL)textIsVertical;
- (BOOL)textIsVerticalForFootnoteReferenceStorage:(id)arg1;
- (BOOL)textLayoutShouldLayoutVertically:(id)arg1;
- (void)trimFootnoteLayoutsFromIndex:(unsigned long long)arg1;
- (void)validate;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end

