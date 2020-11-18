//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AVAsset, AVAssetExportSession, AVAudioMix, AVVideoComposition, NSArray, NSError, NSObject, NSString, NSURL, PFAssetAdjustments;
@protocol OS_dispatch_queue;

@interface PFVideoSharingOperation : NSOperation
{
    AVAsset *_videoAsset;
    AVAudioMix *_audioMix;
    AVVideoComposition *_videoComposition;
    NSArray *_videoMetadata;
    NSObject<OS_dispatch_queue> *_externalIsolation;
    AVAssetExportSession *_exportSession;
    BOOL _beganExport;
    BOOL _operationSuccess;
    NSError *_operationError;
    BOOL _shouldStripMetadata;
    BOOL _shouldStripLocation;
    NSURL *_outputDirectoryURL;
    NSString *_outputFilename;
    NSString *_customAccessibilityLabel;
    NSString *_exportPreset;
    NSURL *_videoURL;
    PFAssetAdjustments *__adjustments;
}

@property (strong, nonatomic, setter=_setAdjustments:) PFAssetAdjustments *_adjustments; // @synthesize _adjustments=__adjustments;
@property (copy, nonatomic) NSString *customAccessibilityLabel; // @synthesize customAccessibilityLabel=_customAccessibilityLabel;
@property (copy, nonatomic) NSString *exportPreset; // @synthesize exportPreset=_exportPreset;
@property (strong, nonatomic, setter=_setOperationError:) NSError *operationError;
@property (copy, nonatomic) NSURL *outputDirectoryURL; // @synthesize outputDirectoryURL=_outputDirectoryURL;
@property (copy, nonatomic) NSString *outputFilename; // @synthesize outputFilename=_outputFilename;
@property (readonly, nonatomic) float progress;
@property (nonatomic) BOOL shouldStripLocation; // @synthesize shouldStripLocation=_shouldStripLocation;
@property (nonatomic) BOOL shouldStripMetadata; // @synthesize shouldStripMetadata=_shouldStripMetadata;
@property (nonatomic, setter=_setSuccess:) BOOL success;
@property (copy, nonatomic, setter=_setVideoURL:) NSURL *videoURL; // @synthesize videoURL=_videoURL;

- (void).cxx_destruct;
- (BOOL)_ensureVideoProperties;
- (BOOL)_runExport;
- (void)_validateMetadata;
- (void)cancel;
- (id)initWithVideoURL:(id)arg1 adjustmentData:(id)arg2;
- (void)main;

@end
