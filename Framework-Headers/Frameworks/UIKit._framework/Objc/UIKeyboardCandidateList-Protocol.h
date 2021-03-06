//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, TIKeyboardBehaviors, TIKeyboardCandidate, TIKeyboardCandidateResultSet, TIKeyboardSecureCandidateRenderTraits;
@protocol UIKeyboardCandidateListDelegate;

@protocol UIKeyboardCandidateList <NSObject>
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (TIKeyboardCandidate *)currentCandidate;
- (unsigned long long)currentIndex;
- (BOOL)hasCandidates;
- (BOOL)isExtendedList;
- (BOOL)isFloatingList;
- (TIKeyboardBehaviors *)keyboardBehaviors;
- (unsigned long long)selectedSortIndex;
- (void)setCandidates:(TIKeyboardCandidateResultSet *)arg1 inlineText:(NSString *)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5;
- (void)setUIKeyboardCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1;
- (BOOL)showCandidate:(TIKeyboardCandidate *)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (NSString *)statisticsIdentifier;

@optional
- (TIKeyboardCandidateResultSet *)candidates;
- (void)candidatesDidChange;
- (BOOL)handleNumberKey:(unsigned long long)arg1;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (NSString *)inlineText;
- (void)jumpToCompositions;
- (void)revealHiddenCandidates;
- (long long)rowForCandidateAtIndex:(unsigned long long)arg1;
- (TIKeyboardSecureCandidateRenderTraits *)secureCandidateRenderTraits;
- (void)setCandidates:(TIKeyboardCandidateResultSet *)arg1 type:(int)arg2 inlineText:(NSString *)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6;
- (void)setInlineText:(NSString *)arg1;
- (void)showCaret:(BOOL)arg1 gradually:(BOOL)arg2;
- (long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;
@end

