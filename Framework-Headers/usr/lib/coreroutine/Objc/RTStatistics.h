//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTStatistics : NSObject
{
}

+ (double)betaDistributionCdfAtX:(double)arg1 paramA:(double)arg2 paramB:(double)arg3;
+ (double)calculateModelConfidenceWithCorrectPredictions:(double)arg1 incorrectPredictions:(double)arg2;
+ (double)calculateModelConfidenceWithCorrectPredictions:(double)arg1 incorrectPredictions:(double)arg2 iterations:(unsigned long long)arg3 minimumConfidence:(double)arg4;

@end

