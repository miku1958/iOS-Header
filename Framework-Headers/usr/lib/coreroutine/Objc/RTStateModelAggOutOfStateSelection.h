//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RTStateModelAggOutOfStateSelection : NSObject
{
    NSMutableArray *_selectOOStStates;
    double _weeklyDensityCorrection;
    double _dailyDensityCorrection;
}

@property (nonatomic) double dailyDensityCorrection; // @synthesize dailyDensityCorrection=_dailyDensityCorrection;
@property (strong, nonatomic) NSMutableArray *selectOOStStates; // @synthesize selectOOStStates=_selectOOStStates;
@property (nonatomic) double weeklyDensityCorrection; // @synthesize weeklyDensityCorrection=_weeklyDensityCorrection;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSelectOOStStates:(id)arg1 dailyDensityCorrection:(double)arg2 weeklyDensityCorrection:(double)arg3;

@end

