//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSURegressionModel : NSObject
{
    BOOL mModelValid;
    int mErrorType;
}

- (double)coefficientAtIndex:(int)arg1;
- (id)equationString;
- (int)errorType;
- (double)estimateForX:(double *)arg1;
- (id)formattedStringWithCoefficient:(double)arg1 locale:(id)arg2;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg1;
- (id)initAffineWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4;
- (id)initNonAffineWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;
- (BOOL)isModelValid;
- (int)numCoefficients;
- (int)numSuperscriptRanges;
- (double)rSquared;
- (int)regressionType;
- (struct _NSRange)superscriptRangeAtIndex:(int)arg1;

@end
