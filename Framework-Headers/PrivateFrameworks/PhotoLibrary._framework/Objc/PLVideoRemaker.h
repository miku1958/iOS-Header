//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetExportSession, NSString, NSTimer, PFVideoAVObjectBuilder, PLProgressView;

@interface PLVideoRemaker : NSObject
{
    NSString *_trimmedPath;
    double _duration;
    double _trimStartTime;
    double _trimEndTime;
    int _mode;
    AVAssetExportSession *_exportSession;
    float _percentComplete;
    NSTimer *_progressTimer;
    PLProgressView *_progressView;
    id _delegate;
    BOOL _shouldExportToPhotoDataDirectory;
    CDUnknownBlockType _progressHandler;
    NSString *_customAccessibilityLabel;
    PFVideoAVObjectBuilder *__videoAVObjectBuilder;
}

@property (readonly, strong, nonatomic) PFVideoAVObjectBuilder *_videoAVObjectBuilder; // @synthesize _videoAVObjectBuilder=__videoAVObjectBuilder;
@property (copy, nonatomic) NSString *customAccessibilityLabel; // @synthesize customAccessibilityLabel=_customAccessibilityLabel;
@property (copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property (nonatomic) BOOL shouldExportToPhotoDataDirectory; // @synthesize shouldExportToPhotoDataDirectory=_shouldExportToPhotoDataDirectory;

+ (long long)approximateByteSizeForMode:(int)arg1 duration:(double)arg2;
+ (long long)fileLengthLimitForRemakerMode:(int)arg1;
+ (int)getHDRemakerModeForMode:(int)arg1;
+ (int)getSDRemakerModeForMode:(int)arg1;
+ (double)maximumDurationForTrimMode:(int)arg1;
- (void)_didEndRemakingWithTemporaryPath:(id)arg1;
- (void)_exportCompletedWithSuccess:(BOOL)arg1;
- (id)_fileFormatForURL:(id)arg1;
- (id)_metadata;
- (void)_removeProgressTimer;
- (void)_resetProgressTimer;
- (void)_updateProgress;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (id)initWithAVAsset:(id)arg1;
- (id)initWithManagedAsset:(id)arg1 applyVideoAdjustments:(BOOL)arg2;
- (id)initWithPublishingMedia:(id)arg1;
- (id)messageForRemakingProgress;
- (int)mode;
- (id)progressView;
- (void)remake;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setTrimEndTime:(double)arg1;
- (void)setTrimStartTime:(double)arg1;
- (double)trimEndTime;
- (double)trimStartTime;

@end

