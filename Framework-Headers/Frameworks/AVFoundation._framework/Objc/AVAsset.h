//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVAsynchronousKeyValueLoading-Protocol.h>
#import <AVFoundation/NSCopying-Protocol.h>

@class AVAssetInternal, NSArray;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVAssetInternal *_asset;
}

@property (readonly) NSArray *availableChapterLocales;
@property (readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property (readonly, nonatomic) BOOL isProxy;
@property (readonly, nonatomic) struct CGSize naturalSize;
@property (readonly, nonatomic) float preferredRate;
@property (readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) id propertyListForProxy;

+ (id)assetProxyWithPropertyList:(id)arg1;
+ (id)assetWithURL:(id)arg1;
+ (id)assetWithURL:(id)arg1 figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4;
- (id)_ID3Metadata;
- (id)_absoluteURL;
- (unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (id)_chapterDataTypeForMediaSubType:(int)arg1;
- (id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3;
- (id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)_chapterTracks;
- (Class)_classForTrackInspectors;
- (id)_comparisonToken;
- (BOOL)_containsAtLeastOnePlayableAudioTrack;
- (BOOL)_containsAtLeastOnePlayableVideoTrack;
- (id)_exportURL;
- (struct OpaqueFigAsset *)_figAsset;
- (id)_firstTrackGroupWithMediaType:(id)arg1;
- (struct OpaqueFigFormatReader *)_formatReader;
- (double)_fragmentMindingInterval;
- (void)_handleURLRequest:(id)arg1;
- (BOOL)_hasResourceLoaderDelegate;
- (BOOL)_isStreaming;
- (void)_loadChapterInfo;
- (void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2;
- (id)_mediaSelectionGroupDictionaries;
- (BOOL)_mindsFragments;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (BOOL)_needsLegacyChangeNotifications;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (void)_setFragmentMindingInterval:(double)arg1;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1;
- (void)_tracksDidChange;
- (id)_weakReference;
- (id)alternateTrackGroups;
- (id)audioAlternatesTrackGroup;
- (id)availableChapterLanguages;
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;
- (id)availableMetadataFormats;
- (BOOL)canContainFragments;
- (void)cancelLoading;
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1;
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)commonMetadata;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (BOOL)containsFragments;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)creationDate;
- (void)dealloc;
- (BOOL)hasProtectedContent;
- (unsigned long long)hash;
- (id)init;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)lyrics;
- (id)makePropertyListForProxyWithOptions:(id)arg1;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id *)arg2;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (int)naturalTimeScale;
- (id)preferredMediaSelection;
- (float)preferredSoundCheckVolumeNormalization;
- (BOOL)providesPreciseDurationAndTiming;
- (unsigned long long)referenceRestrictions;
- (long long)statusOfValueForKey:(id)arg1;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)subtitleAlternatesTrackGroup;
- (id)trackGroups;
- (id)trackReferences;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaCharacteristics:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (int)unusedTrackID;
- (id)valueForUndefinedKey:(id)arg1;

@end

