//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDContainerLayout.h>

#import <SilexText/TSWPColumnMetrics-Protocol.h>
#import <SilexText/TSWPExteriorTextWrap-Protocol.h>
#import <SilexText/TSWPLayoutParent-Protocol.h>

@class STTextTangierTextWrapper, TSWPPadding;

@interface STTextTangierLayout : TSDContainerLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPExteriorTextWrap>
{
    STTextTangierTextWrapper *_textWrapper;
}

@property (readonly, nonatomic) struct CGSize adjustedInsets;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) double textScaleFactor;
@property (strong, nonatomic) STTextTangierTextWrapper *textWrapper; // @synthesize textWrapper=_textWrapper;

- (void).cxx_destruct;
- (id)additionalReliedOnLayoutsForTextWrap;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (id)dependentsOfTextLayout:(id)arg1;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (struct CGSize)initialTextSize;
- (void)invalidate;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (Class)repClassForTextLayout:(id)arg1;
- (BOOL)shouldHyphenateTextLayout:(id)arg1;
- (id)textWrapperForExteriorWrap;
- (unsigned int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end

