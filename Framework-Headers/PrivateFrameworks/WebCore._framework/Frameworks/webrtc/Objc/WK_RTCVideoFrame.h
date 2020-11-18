//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RTCVideoFrameBuffer;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoFrame : NSObject
{
    long long _rotation;
    long long _timeStampNs;
    int timeStamp;
    id<RTCVideoFrameBuffer> _buffer;
}

@property (readonly, nonatomic) id<RTCVideoFrameBuffer> buffer; // @synthesize buffer=_buffer;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) long long rotation;
@property (nonatomic) int timeStamp; // @synthesize timeStamp;
@property (readonly, nonatomic) long long timeStampNs;
@property (readonly, nonatomic) int width;

- (void).cxx_destruct;
- (id)initWithBuffer:(id)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 scaledWidth:(int)arg2 scaledHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7 rotation:(long long)arg8 timeStampNs:(long long)arg9;
- (id)newI420VideoFrame;

@end

