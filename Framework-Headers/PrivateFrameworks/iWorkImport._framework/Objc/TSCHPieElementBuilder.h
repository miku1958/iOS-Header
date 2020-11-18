//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHElementBuilder.h>

__attribute__((visibility("hidden")))
@interface TSCHPieElementBuilder : TSCHElementBuilder
{
}

- (unsigned long long)countOfCalloutLinesForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewClipRect:(struct CGRect *)arg4;
- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect **)arg4 outNewClipRects:(struct CGRect **)arg5 outNewElementPaths:(const struct CGPath ***)arg6 outSelectionKnobLocations:(id *)arg7;
- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect **)arg4 outNewClipRects:(struct CGRect **)arg5 outNewElementPaths:(const struct CGPath ***)arg6 outSelectionKnobLocations:(id *)arg7 withInnerRadius:(id)arg8;
- (unsigned long long)countOfGridLinesInBody:(id)arg1 forAxis:(id)arg2 minor:(BOOL)arg3 outNewLineDescriptors:(CDStruct_183601bc **)arg4;
- (unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform **)arg4 outNewElementSizes:(struct CGSize **)arg5 outNewClipRect:(struct CGRect **)arg6 outNewStrings:(id *)arg7;
- (BOOL)hasAxisLineInBody:(id)arg1 forAxis:(id)arg2 outTransform:(struct CGAffineTransform *)arg3 outLine:(CDStruct_e3b9714e *)arg4;
- (struct CGPath *)newElementPathInBody:(id)arg1 forSeries:(id)arg2 outTransform:(struct CGAffineTransform *)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outWedgeCenterPoint:(struct CGPoint *)arg6 outSelectionKnobLocations:(id *)arg7 withInnerRadius:(id)arg8;

@end
