//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAsset-Protocol.h>
#import <PhotosUICore/PXLayoutItemInput-Protocol.h>
#import <PhotosUICore/PXMetadataAsset-Protocol.h>

@class CLLocation, NSDate, NSNumber, NSString, NSURL, PXFileBackedAssetDescription, _PXFileBackedAssetMetadata;

@interface PXFileBackedAsset : NSObject <PXDisplayAsset, PXLayoutItemInput, PXMetadataAsset>
{
    _PXFileBackedAssetMetadata *_metadata;
    PXFileBackedAssetDescription *_description;
    NSString *_fileBackedUUID;
    NSURL *_url;
    NSString *_uniformTypeIdentifier;
}

@property (readonly, nonatomic) struct CGRect acceptableCropRect;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) unsigned long long burstSelectionTypes;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) BOOL cloudIsDeletable;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) long long playbackVariation;
@property (readonly, nonatomic) struct CGPoint positionOffset;
@property (readonly, nonatomic) struct CGRect preferredCropRect;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic) struct CGSize size;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly, nonatomic) unsigned long long thumbnailVersion;
@property (readonly, nonatomic) struct CGAffineTransform transform;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property (readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) double weight;

+ (id)_creationDateFromImageProperties:(id)arg1;
+ (id)_exifDateFormatter;
+ (id)_globalCache;
+ (id)_locationFromImageProperties:(id)arg1;
- (void).cxx_destruct;
- (void)_loadFileMetadataIfNeeded;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDescription:(id)arg1;
- (id)initWithURL:(id)arg1;
- (long long)isContentEqualTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFileBackedAsset:(id)arg1;
- (double)weightUsingCriterion:(long long)arg1;

@end
