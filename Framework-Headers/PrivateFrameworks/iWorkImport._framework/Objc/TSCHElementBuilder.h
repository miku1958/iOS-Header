//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHElementBuilder : NSObject
{
}

+ (struct CGRect)clipRectForElementsDrawnByRenderState:(id)arg1;
+ (struct CGRect)elementsRectForElementsDrawnByRenderState:(id)arg1;
+ (struct CGRect)p_chartLayoutSpaceClipRectUnionForElementsDrawnByRenderState:(id)arg1 returningItemCount:(unsigned long long *)arg2;
+ (double)referenceLineLabelRightAxisPadding;
+ (double)referenceLineLabelTopAxisPadding;
- (unsigned long long)countOfCalloutLinesForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewClipRect:(struct CGRect *)arg4;
- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect **)arg4 outNewClipRects:(struct CGRect **)arg5 outNewElementPaths:(const struct CGPath ***)arg6 outSelectionKnobLocations:(id *)arg7;
- (unsigned long long)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(struct CGRect *)arg5 outNewErrorBarDescriptors:(CDStruct_183601bc **)arg6;
- (unsigned long long)countOfGridLinesInBody:(id)arg1 forAxis:(id)arg2 minor:(BOOL)arg3 outNewLineDescriptors:(CDStruct_183601bc **)arg4;
- (unsigned long long)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const struct CGPath ***)arg4 outSelectionKnobLocations:(id *)arg5;
- (unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform **)arg4 outNewElementSizes:(struct CGSize **)arg5 outNewClipRect:(struct CGRect **)arg6 outNewStrings:(id *)arg7;
- (unsigned long long)countOfReferenceLineLabelsForAxisID:(id)arg1 model:(id)arg2 forRefLineLabelsLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform **)arg4 outNewElementSizes:(struct CGSize **)arg5 outNewClipRects:(struct CGRect **)arg6 outNewParagraphStyles:(id *)arg7 outNewStrings:(id *)arg8 outNewLabelTypes:(unsigned long long **)arg9 outReferenceLines:(id *)arg10 includeOutsideChartBodyBounds:(BOOL)arg11 outOutsideChartBodyBounds:(BOOL **)arg12;
- (unsigned long long)countOfReferenceLineLabelsForReferenceLine:(id)arg1 forRefLineLabelsLayout:(id)arg2 outNewTransforms:(struct CGAffineTransform **)arg3 outNewElementSizes:(struct CGSize **)arg4 outNewClipRects:(struct CGRect **)arg5 outNewParagraphStyles:(id *)arg6 outNewStrings:(id *)arg7 outNewLabelTypes:(unsigned long long **)arg8 includeOutsideChartBodyBounds:(BOOL)arg9 outOutsideChartBodyBounds:(BOOL **)arg10;
- (unsigned long long)countOfReferenceLinesForAxisID:(id)arg1 model:(id)arg2 forBodyLayout:(id)arg3 outClipRect:(struct CGRect *)arg4 outNewClipRects:(struct CGRect **)arg5 outNewLineDescriptors:(CDStruct_183601bc **)arg6 outReferenceLines:(id *)arg7 includeOutsideChartBodyBounds:(BOOL)arg8 outOutsideChartBodyBounds:(BOOL **)arg9;
- (BOOL)hasAxisLineInBody:(id)arg1 forAxis:(id)arg2 outTransform:(struct CGAffineTransform *)arg3 outLine:(CDStruct_e3b9714e *)arg4;
- (long long)hitCheckPoint:(struct CGPoint)arg1 inSeries:(id)arg2 withBodyLayout:(id)arg3;
- (struct CGPoint)labelPointForPosition:(unsigned int)arg1 rect:(struct CGRect)arg2 stringSize:(struct CGSize)arg3;
- (unsigned long long)p_countOfReferenceLineLabelsForReferenceLine:(id)arg1 forRefLineLabelsLayout:(id)arg2 substringRange:(struct _NSRange *)arg3 outNewTransforms:(struct CGAffineTransform **)arg4 outNewElementSizes:(struct CGSize **)arg5 outNewClipRects:(struct CGRect **)arg6 outNewParagraphStyles:(id *)arg7 outNewStrings:(id *)arg8 outNewLabelTypes:(unsigned long long **)arg9 includeOutsideChartBodyBounds:(BOOL)arg10 outOutsideChartBodyBounds:(BOOL **)arg11;
- (struct CGAffineTransform)p_transformForRenderingTrendlineTextNotR2:(BOOL)arg1 forSeries:(id)arg2 forAreaLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outParagraphStyle:(id *)arg6 outString:(const struct __CFAttributedString **)arg7;
- (void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(BOOL *)arg3 outOffsetInBody:(double *)arg4;
- (struct CGAffineTransform)transformForRenderingLabelForReferenceLine:(id)arg1 ofType:(unsigned long long)arg2 range:(struct _NSRange)arg3 inLayoutItem:(id)arg4 outElementSize:(struct CGSize *)arg5 outClipRect:(struct CGRect *)arg6;
- (struct CGAffineTransform)transformForRenderingLabelInBody:(id)arg1 forSeries:(unsigned long long)arg2 forGroup:(unsigned long long)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5;
- (struct CGAffineTransform)transformForRenderingR2TextForSeries:(id)arg1 forAreaLayout:(id)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 outParagraphStyle:(id *)arg5 outString:(id *)arg6;
- (struct CGAffineTransform)transformForRenderingTrendlineTextForSeries:(id)arg1 forAreaLayout:(id)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 outParagraphStyle:(id *)arg5 outNewString:(const struct __CFAttributedString **)arg6;
- (void)trendlineElementForSeries:(id)arg1 forBodyLayout:(id)arg2 outElementBounds:(struct CGRect *)arg3 outElementClipRect:(struct CGRect *)arg4 outElementPath:(id *)arg5;

@end

