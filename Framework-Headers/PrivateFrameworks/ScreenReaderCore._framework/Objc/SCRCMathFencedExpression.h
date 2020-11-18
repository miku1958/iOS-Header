//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathRowExpression.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathFencedExpression : SCRCMathRowExpression
{
    NSString *_openString;
    NSString *_closeString;
}

@property (copy, nonatomic) NSString *closeString; // @synthesize closeString=_closeString;
@property (copy, nonatomic) NSString *openString; // @synthesize openString=_openString;

- (void).cxx_destruct;
- (id)_binomialCoefficientContent;
- (BOOL)_isBinomialCoefficient;
- (id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg1;
- (id)description;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (unsigned long long)fractionLevel;
- (id)initWithDictionary:(id)arg1;
- (id)latexDescriptionInMathMode:(BOOL)arg1;
- (id)mathMLAttributes;
- (id)mathMLTag;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;

@end
