//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAsset-Protocol.h>

@class NSData, NSDate, NSNumber, NSString, PHAsset, PHMomentShare, UIImage;

@interface PXCMMPreviewAsset : NSObject <PXDisplayAsset>
{
    UIImage *_cachedImage;
    PHMomentShare *_momentShare;
    PHAsset *_underlyingAsset;
}

@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) unsigned long long burstSelectionTypes;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) BOOL isPreviewImageDataAvailable;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) long long playbackVariation;
@property (readonly, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) NSData *previewImageData;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly, nonatomic) unsigned long long thumbnailVersion;
@property (readonly, nonatomic) PHAsset *underlyingAsset; // @synthesize underlyingAsset=_underlyingAsset;
@property (readonly, nonatomic) NSString *uuid;

- (void).cxx_destruct;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithMomentShare:(id)arg1 underlyingAsset:(id)arg2;
- (long long)isContentEqualTo:(id)arg1;
- (struct CGSize)size;

@end
