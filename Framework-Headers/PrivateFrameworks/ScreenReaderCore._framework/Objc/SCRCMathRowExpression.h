//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathRowExpression : SCRCMathArrayExpression
{
}

- (void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned long long)arg5 treePosition:(id)arg6;
- (id)_indexesOfCharactersInWords;
- (BOOL)beginsWithSpace;
- (BOOL)canBeUsedWithBase;
- (BOOL)canBeUsedWithRange;
- (id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long *)arg4;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (BOOL)endsWithSpace;
- (unsigned long long)fractionLevel;
- (long long)integerValue;
- (BOOL)isFunctionName;
- (BOOL)isInteger;
- (BOOL)isNumber;
- (BOOL)isWordOrAbbreviation;
- (id)latexDescriptionInMathMode:(BOOL)arg1;
- (id)mathMLTag;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)speakableSummary;

@end
