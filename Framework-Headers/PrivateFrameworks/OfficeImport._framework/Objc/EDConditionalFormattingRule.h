//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDResources, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface EDConditionalFormattingRule : NSObject
{
    EDResources *mResources;
    int mType;
    int mOperator;
    NSMutableArray *mFormulas;
    unsigned long long mDifferentialStyleIndex;
    BOOL mStopIfTrue;
    BOOL mAppliesToDateOnly;
    long long mPriority;
    BOOL mAboveAverage;
    BOOL mBottom;
    BOOL mEqualAverage;
    BOOL mPercent;
    unsigned long long mRank;
    long long mStdDev;
    NSString *mText;
    int mTimePeriod;
}

+ (id)conditionalFormattingRuleWithResources:(id)arg1;
- (void).cxx_destruct;
- (BOOL)aboveAverage;
- (void)addFormula:(id)arg1 worksheet:(id)arg2;
- (BOOL)appliesToDateOnly;
- (BOOL)bottom;
- (long long)compareToOtherRuleUsingPriority:(id)arg1;
- (id)description;
- (id)differentialStyle;
- (unsigned long long)differentialStyleIndex;
- (BOOL)equalAverage;
- (id)formulaAtIndex:(unsigned long long)arg1;
- (unsigned long long)formulaCount;
- (id)initWithResources:(id)arg1;
- (int)operatorEnum;
- (BOOL)percent;
- (long long)priority;
- (unsigned long long)rank;
- (void)setAboveAverage:(BOOL)arg1;
- (void)setAppliesToDateOnly:(BOOL)arg1;
- (void)setBottom:(BOOL)arg1;
- (void)setDifferentialStyle:(id)arg1;
- (void)setDifferentialStyleIndex:(unsigned long long)arg1;
- (void)setEqualAverage:(BOOL)arg1;
- (void)setOperatorEnum:(int)arg1;
- (void)setPercent:(BOOL)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRank:(unsigned long long)arg1;
- (void)setStdDev:(long long)arg1;
- (void)setStopIfTrue:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTimePeriod:(int)arg1;
- (void)setType:(int)arg1;
- (long long)stdDev;
- (BOOL)stopIfTrue;
- (id)text;
- (int)timePeriod;
- (int)type;

@end
