//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

__attribute__((visibility("hidden")))
@interface HMIDenseOpticalFlowFrame : HMFObject
{
    struct __CVBuffer *_pixelBuffer;
    CDStruct_1b6d18a9 _time;
}

@property (readonly) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property (readonly) CDStruct_1b6d18a9 time; // @synthesize time=_time;

- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2;

@end
