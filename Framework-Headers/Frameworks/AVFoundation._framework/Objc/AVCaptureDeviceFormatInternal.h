//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FigCaptureSourceFormat, NSArray;

@interface AVCaptureDeviceFormatInternal : NSObject
{
    FigCaptureSourceFormat *sourceFormat;
    NSArray *videoSupportedFrameRateRanges;
    CDStruct_1b6d18a9 defaultActiveMinFrameDuration;
    CDStruct_1b6d18a9 defaultActiveMaxFrameDuration;
    NSArray *supportedDepthDataFormats;
}

@end

