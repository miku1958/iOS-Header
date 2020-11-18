//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNPetsDetector;

@interface VCPImagePetsAnalyzer : VCPImageAnalyzer
{
    int _maxNumRegions;
    VCPCNNPetsDetector *_petsDetector;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)convertResultsToDict:(id)arg1 results:(id)arg2;
- (id)initWithMaxNumRegions:(int)arg1;

@end
