//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathFractionExpression : SCRCMathExpression
{
    SCRCMathExpression *_numerator;
    SCRCMathExpression *_denominator;
    SCRCMathExpression *_operator;
    double _lineThickness;
}

@property (strong, nonatomic) SCRCMathExpression *denominator; // @synthesize denominator=_denominator;
@property (nonatomic) double lineThickness; // @synthesize lineThickness=_lineThickness;
@property (strong, nonatomic) SCRCMathExpression *numerator; // @synthesize numerator=_numerator;
@property (strong, nonatomic) SCRCMathExpression *operator; // @synthesize operator=_operator;

- (void).cxx_destruct;
- (id)_dollarCodeDescriptionAsBinomialCoefficient:(BOOL)arg1 orMixedNumberFraction:(BOOL)arg2 withNumberOfOuterRadicals:(unsigned long long)arg3 treePosition:(id)arg4;
- (id)_speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 asBinomialCoefficient:(BOOL)arg3;
- (id)_speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 asBinomialCoefficient:(BOOL)arg4;
- (id)description;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (unsigned long long)fractionLevel;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isSimpleNumericalFraction;
- (BOOL)isUnlinedFraction;
- (id)latexMathModeDescription;
- (id)mathMLString;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(int)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)subExpressions;

@end
