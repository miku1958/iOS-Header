//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoLivePhotoMetadataWritingEnabledCommand : CAMCaptureCommand
{
    BOOL __livePhotoMetadataWritingEnabled;
}

@property (readonly, nonatomic, getter=isLivePhotoMetadataWritingEnabled) BOOL _livePhotoMetadataWritingEnabled; // @synthesize _livePhotoMetadataWritingEnabled=__livePhotoMetadataWritingEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(BOOL)arg1;

@end

