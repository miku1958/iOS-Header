//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVURLAsset, NSData, PHAdjustmentData;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSnapshot : NSObject
{
    long long _workImageVersion;
    PHAdjustmentData *_adjustmentData;
    NSData *_imageData;
    NSData *_baseImageData;
    AVURLAsset *_videoComplement;
    AVURLAsset *_baseVideoComplement;
}

@property (strong, nonatomic, setter=_setAdjustmentData:) PHAdjustmentData *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property (strong, nonatomic, setter=_setBaseImageData:) NSData *baseImageData; // @synthesize baseImageData=_baseImageData;
@property (strong, nonatomic, setter=_setBaseVideoComplement:) AVURLAsset *baseVideoComplement; // @synthesize baseVideoComplement=_baseVideoComplement;
@property (strong, nonatomic, setter=_setImageData:) NSData *imageData; // @synthesize imageData=_imageData;
@property (strong, nonatomic, setter=_setVideoComplement:) AVURLAsset *videoComplement; // @synthesize videoComplement=_videoComplement;
@property (nonatomic, setter=_setWorkImageVersion:) long long workImageVersion; // @synthesize workImageVersion=_workImageVersion;

+ (void)captureSnapshotForAsset:(id)arg1 mediaProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)_copyAsset:(id)arg1;
- (id)_copyData:(id)arg1;
- (id)_copyDataAtURL:(id)arg1;
- (void)_copySourceData:(id)arg1 destinationData:(out id *)arg2 destinationURL:(out id *)arg3;
- (id)init;

@end

