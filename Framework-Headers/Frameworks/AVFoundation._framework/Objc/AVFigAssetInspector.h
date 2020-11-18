//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAssetInspector.h>

@class NSArray, NSURL;

@interface AVFigAssetInspector : AVAssetInspector
{
    struct OpaqueFigAsset *_figAsset;
    struct OpaqueFigFormatReader *_formatReader;
    long long _formatReaderOnce;
    long long _checkIsStreamingOnce;
    BOOL _isStreaming;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) unsigned long long downloadToken;
@property (readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset *figAsset;
@property (readonly, nonatomic) NSArray *figChapterGroupInfo;
@property (readonly, nonatomic) NSArray *figChapters;
@property (readonly, nonatomic, getter=_formatReader) struct OpaqueFigFormatReader *formatReader;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic) NSURL *originalNetworkContentURL;
@property (readonly, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic, getter=_isStreaming) BOOL streaming;

- (id)SHA1Digest;
- (BOOL)_hasQTSaveRestriction;
- (id)_instanceIdentifier;
- (id)_mediaSelectionGroupDictionaries;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (BOOL)canContainFragments;
- (id)commonMetadata;
- (BOOL)containsFragments;
- (id)creationDate;
- (void)dealloc;
- (CDStruct_1b6d18a9)duration;
- (void)finalize;
- (unsigned long long)hash;
- (id)identifyingTagClass;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isReadable;
- (id)lyrics;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize)naturalSize;
- (int)naturalTimeScale;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform)preferredTransform;
- (float)preferredVolume;
- (id)propertyListForProxy;
- (BOOL)providesPreciseDurationAndTiming;
- (long long)trackCount;
- (id)trackReferences;

@end

