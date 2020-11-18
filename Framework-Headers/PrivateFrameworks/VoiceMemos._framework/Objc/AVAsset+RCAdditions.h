//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@class AVAssetTrack, NSDictionary, NSURL;

@interface AVAsset (RCAdditions)

@property (readonly, nonatomic) AVAssetTrack *rc_audioTrack;
@property (strong, nonatomic, setter=rc_setComposedAVURL:) NSURL *rc_composedAVURL;
@property (readonly, nonatomic) NSDictionary *rc_recordingMetadata;

+ (BOOL)rc_updateMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id *)arg3;
+ (BOOL)rc_updateMetadataInFile:(id)arg1 withRecordingMetadata:(id)arg2 error:(id *)arg3;
@end
