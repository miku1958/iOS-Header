//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@class AVCaptureDevice, AVCaptureDeviceFormat;

@interface ARVideoFormat : NSObject <NSCopying>
{
    AVCaptureDevice *_device;
    AVCaptureDeviceFormat *_deviceFormat;
    struct CGSize _imageResolution;
    long long _framesPerSecond;
}

@property (readonly, nonatomic) AVCaptureDevice *device;
@property (readonly, nonatomic) AVCaptureDeviceFormat *deviceFormat;
@property (nonatomic) long long framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
@property (readonly, nonatomic) struct CGSize imageResolution;

+ (id)bestVideoFormatForDevice:(id)arg1 resolution:(CDStruct_1ef3fb1f)arg2 frameRate:(double)arg3 videoBinned:(BOOL)arg4;
+ (id)supportedVideoFormatsForDevicePosition:(long long)arg1 deviceType:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCaptureDevice:(id)arg1 format:(id)arg2;
- (id)initWithImageResolution:(struct CGSize)arg1;
- (BOOL)isEqual:(id)arg1;

@end

