//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHImageManagerRequest.h>

@class PHImageRequestOptions;

@interface PHImageRequest : PHImageManagerRequest
{
    int _bestFormat;
    int _degradedFormat;
    long long _contentMode;
    PHImageRequestOptions *_options;
    CDUnknownBlockType _resultHandler;
    struct CGSize _targetSize;
}

@property int bestFormat; // @synthesize bestFormat=_bestFormat;
@property (readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property int degradedFormat; // @synthesize degradedFormat=_degradedFormat;
@property (readonly, nonatomic) PHImageRequestOptions *options; // @synthesize options=_options;
@property (readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property (readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;

+ (id)descriptionWithContentMode:(long long)arg1;
+ (id)imageRequestWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 domain:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
- (void)clearResultHandler;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;
- (id)description;
- (id)initImageRequestWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 domain:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;

@end
