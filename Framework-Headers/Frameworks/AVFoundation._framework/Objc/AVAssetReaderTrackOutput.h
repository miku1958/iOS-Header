//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput
{
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

@property (nonatomic) BOOL appliesPreferredTrackTransform;
@property (readonly, nonatomic, getter=_isAttachedToAdaptor) BOOL attachedToAdaptor;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic) AVAssetTrack *track;

+ (id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2;
- (id)_asset;
- (id)_attachedAdaptor;
- (struct opaqueCMSampleBuffer *)_copyNextSampleBufferForAdaptor;
- (BOOL)_enableTrackExtractionReturningError:(id *)arg1;
- (id)_figAssetReaderExtractionOptions;
- (id)_formatDescriptions;
- (unsigned int)_getUniformMediaSubtypeIfExists;
- (void)_setAttachedAdaptor:(id)arg1;
- (BOOL)_trimsSampleDurations;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithTrack:(id)arg1 outputSettings:(id)arg2;
- (id)mediaType;

@end

