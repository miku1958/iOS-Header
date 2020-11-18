//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureRequest.h>

#import <CameraUI/NSCopying-Protocol.h>
#import <CameraUI/NSMutableCopying-Protocol.h>

@protocol CAMVideoCaptureRequestDelegate;

@interface CAMVideoCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>
{
    BOOL _timelapse;
    BOOL _shouldGenerateVideoPreviewImage;
    double _maximumRecordedDuration;
    long long _maximumRecordedFileSize;
    long long _remainingDiskUsageThreshold;
    id<CAMVideoCaptureRequestDelegate> _delegate;
    long long _captureVideoConfiguration;
    long long _torchMode;
    double _userInitationTimestamp;
}

@property (readonly, nonatomic) long long captureVideoConfiguration; // @synthesize captureVideoConfiguration=_captureVideoConfiguration;
@property (readonly, weak, nonatomic) id<CAMVideoCaptureRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) double maximumRecordedDuration; // @synthesize maximumRecordedDuration=_maximumRecordedDuration;
@property (readonly, nonatomic) long long maximumRecordedFileSize; // @synthesize maximumRecordedFileSize=_maximumRecordedFileSize;
@property (readonly, nonatomic) long long remainingDiskUsageThreshold; // @synthesize remainingDiskUsageThreshold=_remainingDiskUsageThreshold;
@property (readonly, nonatomic) BOOL shouldGenerateVideoPreviewImage; // @synthesize shouldGenerateVideoPreviewImage=_shouldGenerateVideoPreviewImage;
@property (readonly, nonatomic, getter=isTimelapse) BOOL timelapse; // @synthesize timelapse=_timelapse;
@property (readonly, nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property (readonly, nonatomic) double userInitationTimestamp; // @synthesize userInitationTimestamp=_userInitationTimestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
