//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPBlurAnalyzer.h>

@class NSArray;

@interface VCPImageLivePhotoBlurAnalyzer : VCPBlurAnalyzer
{
    NSArray *_movingObjects;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (id)initWithMovingObjectsResults:(id)arg1;

@end

