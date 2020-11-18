//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/AVMetadataObject.h>

#import <AVFCapture/NSCopying-Protocol.h>

@class NSData;

@interface AVMetadataSaliencyHeatMap : AVMetadataObject <NSCopying>
{
    long long _bytesPerRow;
    long long _width;
    long long _height;
    NSData *_heatMap;
}

@property (readonly) long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property (readonly) NSData *heatMap; // @synthesize heatMap=_heatMap;
@property (readonly) long long height; // @synthesize height=_height;
@property (readonly) long long width; // @synthesize width=_width;

+ (id)saliencyHeatMapWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 type:(id)arg4;
- (id)initWithHeatMap:(id)arg1 width:(long long)arg2 height:(long long)arg3 bytesPerRow:(long long)arg4 time:(CDStruct_1b6d18a9)arg5 duration:(CDStruct_1b6d18a9)arg6 bounds:(struct CGRect)arg7 optionalInfoDict:(id)arg8 originalMetadataObject:(id)arg9 sourceCaptureInput:(id)arg10;

@end
