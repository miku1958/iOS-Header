//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSURegressionModel.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSUPowerRegressionModel : TSURegressionModel
{
    double *mCoefficients;
    int mNumCoefficients;
    BOOL mAffine;
    double mIntercept;
    double mRSquared;
    int mNumSuperscriptRanges;
    NSMutableArray *mSuperscriptRangesArray;
}

- (double)coefficientAtIndex:(int)arg1;
- (void)dealloc;
- (double)estimateForX:(double *)arg1;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg1;
- (id)initAffineWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4;
- (id)initNonAffineWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;
- (id)initWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4 makeAffine:(BOOL)arg5 desiredIntercept:(double)arg6;
- (int)numCoefficients;
- (int)numSuperscriptRanges;
- (double)rSquared;
- (int)regressionType;
- (struct _NSRange)superscriptRangeAtIndex:(int)arg1;

@end

