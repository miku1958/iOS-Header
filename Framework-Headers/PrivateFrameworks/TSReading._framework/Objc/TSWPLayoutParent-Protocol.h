//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSWPAttachment, TSWPLayout, TSWPStorage;
@protocol NSFastEnumeration, TSWPStyleProvider;

@protocol TSWPLayoutParent
- (unsigned int)autosizeFlagsForTextLayout:(TSWPLayout *)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(TSWPLayout *)arg1 textSize:(struct CGSize)arg2;
- (id<NSFastEnumeration>)dependentsOfTextLayout:(TSWPLayout *)arg1;
- (void)invalidateForAutosizingTextLayout:(TSWPLayout *)arg1;
- (struct CGRect)nonAutosizedFrameForTextLayout:(TSWPLayout *)arg1;
- (Class)repClassForTextLayout:(TSWPLayout *)arg1;
- (unsigned int)verticalAlignmentForTextLayout:(TSWPLayout *)arg1;

@optional
- (BOOL)allowsLastLineTruncation:(TSWPLayout *)arg1;
- (unsigned long long)initialCharIndex;
- (struct CGSize)initialTextSize;
- (struct CGRect)maskRectForTextLayout:(TSWPLayout *)arg1;
- (double)maxAutoGrowHeightForTextLayout:(TSWPLayout *)arg1;
- (double)maxAutoGrowWidthForTextLayout:(TSWPLayout *)arg1;
- (unsigned int)maxLineCountForTextLayout:(TSWPLayout *)arg1;
- (unsigned int)naturalAlignmentForTextLayout:(TSWPLayout *)arg1;
- (unsigned long long)pageCountForAttachment:(TSWPAttachment *)arg1;
- (unsigned long long)pageNumberForAttachment:(TSWPAttachment *)arg1;
- (BOOL)shouldHyphenateTextLayout:(TSWPLayout *)arg1;
- (id<TSWPStyleProvider>)styleProviderForLayout:(TSWPLayout *)arg1;
- (id<TSWPStyleProvider>)styleProviderForStorage:(TSWPStorage *)arg1;
- (unsigned int)textLayoutShouldIgnoreEquationAlignment:(TSWPLayout *)arg1;
- (BOOL)textLayoutShouldLayoutVertically:(TSWPLayout *)arg1;
- (BOOL)textLayoutShouldWrapAroundExternalDrawables:(TSWPLayout *)arg1;
@end
