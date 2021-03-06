//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext, CIImage;

__attribute__((visibility("hidden")))
@interface CIPerspectiveAutoCalc : NSObject
{
    CIImage *img;
    CIContext *ctx;
    CDStruct_58ac58eb config;
    double pitch;
    double yaw;
    double roll;
    double confidence;
    CIImage *debugImage;
    long long pitchFailureReason;
    long long yawFailureReason;
    BOOL generateDebugImage;
}

@property (readonly) double confidence; // @synthesize confidence;
@property (readonly) CIImage *debugImage; // @synthesize debugImage;
@property BOOL generateDebugImage; // @synthesize generateDebugImage;
@property (readonly) double pitch; // @synthesize pitch;
@property (readonly) long long pitchFailureReason; // @synthesize pitchFailureReason;
@property (readonly) double roll; // @synthesize roll;
@property (readonly) double yaw; // @synthesize yaw;
@property (readonly) long long yawFailureReason; // @synthesize yawFailureReason;

- (BOOL)compute;
- (void)dealloc;
- (id)initWithContext:(id)arg1 image:(id)arg2 config:(const CDStruct_58ac58eb *)arg3;

@end

