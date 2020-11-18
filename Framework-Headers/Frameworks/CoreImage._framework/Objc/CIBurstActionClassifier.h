//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstActionClassifier : NSObject
{
    BOOL hasBeenScaled;
    double testVector[7];
    float testAverageCameraTravelDistance;
    float testMaxRegistrationErrorIntegral;
    float testMaxPeakRegistrationError;
    float testMeanPeakRegistrationError;
    float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
    float testInOutRatio;
    float testMaxInnerDistance;
    float testAverageRegistrationErrorSkewness;
    float testMinRegionOfInterestSize;
    float testMaxRegistrationErrorSkewness;
    struct __SVMParameters *_svmParameters;
}

@property struct __SVMParameters *svmParameters; // @synthesize svmParameters=_svmParameters;
@property float testAverageCameraTravelDistance; // @synthesize testAverageCameraTravelDistance;
@property float testAverageRegistrationErrorSkewness; // @synthesize testAverageRegistrationErrorSkewness;
@property float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix; // @synthesize testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
@property float testInOutRatio; // @synthesize testInOutRatio;
@property float testMaxInnerDistance; // @synthesize testMaxInnerDistance;
@property float testMaxPeakRegistrationError; // @synthesize testMaxPeakRegistrationError;
@property float testMaxRegistrationErrorIntegral; // @synthesize testMaxRegistrationErrorIntegral;
@property float testMaxRegistrationErrorSkewness; // @synthesize testMaxRegistrationErrorSkewness;
@property float testMeanPeakRegistrationError; // @synthesize testMeanPeakRegistrationError;
@property float testMinRegionOfInterestSize; // @synthesize testMinRegionOfInterestSize;

- (double)computeKernelValueWithSupportVector:(const struct CIBurstSupportVector *)arg1;
- (id)init;
- (id)initWithVersion:(int)arg1;
- (BOOL)isBurstAction;
- (float)predictResult;
- (void)scaleVector;

@end
