//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetResource.h>

@class PLImageFormat;

@interface PHDerivativeAssetResource : PHAssetResource
{
    BOOL _tableFormat;
    PLImageFormat *_format;
    unsigned long long _cplResourceType;
}

@property (readonly, nonatomic) unsigned long long cplResourceType; // @synthesize cplResourceType=_cplResourceType;
@property (readonly, nonatomic, getter=isCroppedToSquare) BOOL croppedToSquare;
@property (strong, nonatomic) PLImageFormat *format; // @synthesize format=_format;
@property (readonly, nonatomic, getter=isTableFormat) BOOL tableFormat; // @synthesize tableFormat=_tableFormat;
@property (readonly, nonatomic, getter=isThumbnail) BOOL thumbnail;
@property (readonly, nonatomic, getter=isVideo) BOOL video;

+ (id)CPLDerivativeAssetResourcesForAsset:(id)arg1 managedAsset:(id)arg2;
+ (id)assetResourceForAsset:(id)arg1 qualityClass:(id)arg2;
+ (id)tableThumbnailDataForAsset:(id)arg1 resource:(id)arg2 dataSpecification:(id *)arg3;
+ (id)thumbnailDerivativeAssetResourcesForAsset:(id)arg1;
- (void).cxx_destruct;
- (long long)analysisType;
- (id)description;
- (id)initWithCloudResource:(id)arg1 forAsset:(id)arg2;
- (id)initWithQualityClass:(id)arg1 forAsset:(id)arg2;
- (id)initWithThumbnailFormat:(id)arg1 forAsset:(id)arg2;
- (BOOL)isTableThumbnail;

@end

