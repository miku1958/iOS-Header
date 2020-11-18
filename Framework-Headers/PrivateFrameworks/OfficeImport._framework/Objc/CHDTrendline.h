//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDTrendlineLabel, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDTrendline : NSObject
{
    BOOL mDisplayEquation;
    BOOL mDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    long long mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}

+ (id)trendline;
- (void).cxx_destruct;
- (double)backward;
- (id)defaultNameWithSeriesName:(id)arg1;
- (id)description;
- (double)forward;
- (id)graphicProperties;
- (id)init;
- (double)interceptYAxis;
- (BOOL)isDisplayEquation;
- (BOOL)isDisplayRSquaredValue;
- (id)label;
- (long long)movingAveragePeriod;
- (id)name;
- (int)polynomialOrder;
- (void)setBackward:(double)arg1;
- (void)setDisplayEquation:(BOOL)arg1;
- (void)setDisplayRSquaredValue:(BOOL)arg1;
- (void)setForward:(double)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setInterceptYAxis:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setMovingAveragePeriod:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setPolynomialOrder:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
