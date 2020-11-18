//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoKitAdjustedDisplayAsset-Protocol.h>

@class NSDate, NSString, PHAsset;
@protocol PXDisplayAsset, PXDisplaySuggestion;

@interface PXForYouSuggestionDisplayAsset : NSObject <PXPhotoKitAdjustedDisplayAsset>
{
    BOOL _shouldInvert;
    PHAsset *_photoKitAsset;
    NSString *_adjustedContentIdentifier;
    id<PXDisplaySuggestion> _suggestion;
    id<PXDisplayAsset> _keyAsset;
}

@property (readonly, nonatomic) NSString *adjustedContentIdentifier; // @synthesize adjustedContentIdentifier=_adjustedContentIdentifier;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) unsigned long long burstSelectionTypes;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) float hdrGain;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) BOOL isApplied;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) PHAsset *photoKitAsset; // @synthesize photoKitAsset=_photoKitAsset;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) long long playbackVariation;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic) BOOL shouldInvert; // @synthesize shouldInvert=_shouldInvert;
@property (readonly, nonatomic) id<PXDisplaySuggestion> suggestion; // @synthesize suggestion=_suggestion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly, nonatomic) unsigned long long thumbnailVersion;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL wantsAdjustments;

- (void).cxx_destruct;
- (id)_computedPortraitEffectSettingsForCompositionController:(id)arg1;
- (id)applyAdjustmentsToCompositionController:(id)arg1 renderer:(id)arg2;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2;
- (id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2 shouldRevert:(BOOL)arg3;
- (id)inverseSuggestionAsset;
- (long long)isContentEqualTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSuggestionDisplayAsset:(id)arg1;

@end
