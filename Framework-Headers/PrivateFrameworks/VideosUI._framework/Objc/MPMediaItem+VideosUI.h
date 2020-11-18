//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaItem.h>

@class HSHomeSharingLibrary, NSDate, NSNumber, NSObject, NSString, NSURL, VUIMediaEntityType, VUIMediaItemCredits, _TVContentRating;
@protocol VUIMediaEntityIdentifier;

@interface MPMediaItem (VideosUI)

@property (readonly, nonatomic) NSNumber *vui_HLSAudioCapability;
@property (readonly, nonatomic) NSNumber *vui_HLSColorCapability;
@property (readonly, nonatomic) NSNumber *vui_HLSResolution;
@property (readonly, nonatomic) NSNumber *vui_assetType;
@property (readonly, nonatomic) NSNumber *vui_audioCapability;
@property (readonly, nonatomic) NSNumber *vui_colorCapability;
@property (readonly, nonatomic) _TVContentRating *vui_contentRating;
@property (readonly, nonatomic) NSString *vui_coverArtImageIdentifier;
@property (readonly, nonatomic) VUIMediaItemCredits *vui_credits;
@property (readonly, nonatomic) NSURL *vui_extrasURL;
@property (readonly, nonatomic) HSHomeSharingLibrary *vui_homeSharingLibrary;
@property (readonly, nonatomic) BOOL vui_isHomeSharingMediaItem;
@property (readonly, nonatomic) NSNumber *vui_isLocal;
@property (readonly, nonatomic) NSNumber *vui_isPlayable;
@property (readonly, nonatomic) VUIMediaEntityType *vui_mediaEntityType;
@property (readonly, nonatomic) NSNumber *vui_playedState;
@property (readonly, nonatomic) NSString *vui_previewFrameImageIdentifier;
@property (readonly, nonatomic) NSDate *vui_rentalEndDate;
@property (readonly, nonatomic) NSDate *vui_rentalExpirationDate;
@property (readonly, nonatomic) NSDate *vui_rentalPlaybackEndDate;
@property (readonly, nonatomic) NSNumber *vui_resolution;
@property (readonly, nonatomic) NSObject<VUIMediaEntityIdentifier> *vui_seasonIdentifier;
@property (readonly, nonatomic) NSObject<VUIMediaEntityIdentifier> *vui_showIdentifier;
@property (readonly, nonatomic) NSString *vui_studio;

+ (BOOL)_vui_isLocalWithPropertyValues:(id)arg1;
+ (BOOL)_vui_isNetworkPlayableWithPropertyValues:(id)arg1;
+ (long long)vui_MPMediaItemAudioCapabilityFromVUIMediaEntityAudioCapability:(unsigned long long)arg1;
+ (long long)vui_MPMediaItemColorCapabilityFromVUIMediaEntityColorCapability:(unsigned long long)arg1;
+ (long long)vui_MPMediaItemVideoQualityFromVUIMediaEntityResolution:(unsigned long long)arg1;
+ (unsigned long long)vui_VUIMediaEntityAudioCapabilityFromMPMediaItemAudioCapability:(long long)arg1;
+ (unsigned long long)vui_VUIMediaEntityColorCapabilityFromMPMediaItemColorCapability:(long long)arg1;
+ (unsigned long long)vui_VUIMediaEntityResolutionFromMPMediaItemVideoQuality:(long long)arg1;
+ (id)vui_mediaItemForPersistentIdentifier:(id)arg1;
+ (id)vui_mediaItemForStoreIdentifier:(id)arg1;
+ (id)vui_mediaItemForStoreIdentifierString:(id)arg1;
- (id)_vui_imageIdentifierWithImageType:(unsigned long long)arg1;
- (id)vui_artworkCatalogWithImageType:(unsigned long long)arg1;
- (id)vui_assetTypeIgnoringLocalAsset:(BOOL)arg1;
- (id)vui_imageIdentifierWithImageType:(unsigned long long)arg1;
- (id)vui_imageLoadParamsWithImageType:(unsigned long long)arg1;
@end
