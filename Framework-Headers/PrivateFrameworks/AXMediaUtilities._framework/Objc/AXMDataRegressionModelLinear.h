//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelLinear : AXMDataRegressionModel
{
    double _rSquared;
}

@property (readonly, nonatomic) double rSquared; // @synthesize rSquared=_rSquared;

- (double)fitDataWithModelParams:(double *)arg1 finalParams:(double *)arg2;
- (void)getInitialParams:(double *)arg1;
- (id)modelDescription;
- (CDUnknownBlockType)modelFunction;
- (id)modelFunctionStringForParameters:(double *)arg1 significantFigures:(int)arg2;
- (int)modelParameterCount;
- (id)partialDerivatives;

@end

