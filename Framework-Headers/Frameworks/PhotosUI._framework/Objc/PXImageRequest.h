//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, PHImageRequestOptions, UIImage;
@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXImageRequest : NSObject
{
    BOOL _gotFullQualityImage;
    BOOL _resultIsInCloud;
    BOOL _canceled;
    id<PXUIImageProvider> _mediaProvider;
    id<PXDisplayAsset> _asset;
    PHImageRequestOptions *_options;
    long long _requestID;
    UIImage *_image;
    NSError *_error;
    struct CGSize _targetSize;
}

@property (readonly, nonatomic) id<PXDisplayAsset> asset; // @synthesize asset=_asset;
@property (readonly, nonatomic, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) BOOL gotFullQualityImage; // @synthesize gotFullQualityImage=_gotFullQualityImage;
@property (nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (readonly, nonatomic) PHImageRequestOptions *options; // @synthesize options=_options;
@property (nonatomic) long long requestID; // @synthesize requestID=_requestID;
@property (nonatomic) BOOL resultIsInCloud; // @synthesize resultIsInCloud=_resultIsInCloud;
@property (readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id)initWithMediaProvider:(id)arg1 asset:(id)arg2 targetSize:(struct CGSize)arg3 options:(id)arg4;
- (void)performWithResultHandler:(CDUnknownBlockType)arg1;

@end

