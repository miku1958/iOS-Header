//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSTimeErrorAnalysis.h>

@class NSArray;

@interface TSAllanDeviationAnalysis : TSTimeErrorAnalysis
{
    double *_adev;
}

@property (readonly, copy, nonatomic) NSArray *adev; // @dynamic adev;

+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)variableName;
- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (id)adevFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (long long)analysisLimit;
- (void)dealloc;
- (BOOL)exportAnalysisToDirectoryURL:(id)arg1;
- (BOOL)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)arg1;
- (id)initWithTimeErrorValues:(id)arg1;

@end

