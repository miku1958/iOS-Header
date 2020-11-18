//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVVideoComposition, NSDictionary, NSError, NSURL, PHAsset, PLPhotoEditModel, UIImage;

@interface PXAssetVariationRenderResult : NSObject
{
    BOOL _success;
    BOOL _fullsizeRender;
    PHAsset *_asset;
    long long _variationType;
    NSDictionary *_analysisResult;
    PLPhotoEditModel *_editModel;
    NSError *_error;
    NSURL *_imageURL;
    UIImage *_image;
    NSURL *_videoURL;
    AVAsset *_videoAsset;
    AVVideoComposition *_videoComposition;
    long long _baseVersion;
}

@property (readonly, copy, nonatomic) NSDictionary *analysisResult; // @synthesize analysisResult=_analysisResult;
@property (readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property (readonly, nonatomic) long long baseVersion; // @synthesize baseVersion=_baseVersion;
@property (readonly, copy, nonatomic) PLPhotoEditModel *editModel; // @synthesize editModel=_editModel;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic, getter=isFullsizeRender) BOOL fullsizeRender; // @synthesize fullsizeRender=_fullsizeRender;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property (readonly, nonatomic) BOOL success; // @synthesize success=_success;
@property (readonly, nonatomic) long long variationType; // @synthesize variationType=_variationType;
@property (strong, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property (strong, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property (readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithAsset:(id)arg1 variationType:(long long)arg2 imageURL:(id)arg3 videoURL:(id)arg4 analysisResult:(id)arg5 editModel:(id)arg6 baseVersion:(long long)arg7 success:(BOOL)arg8 error:(id)arg9;

@end

