//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPGaplessInfo, MPModelAlbum, MPModelArtist, MPModelComposer, MPModelFileAsset, MPModelGenre, MPModelHomeSharingAsset, MPModelLyrics, MPModelPlaybackPosition, MPModelStoreAsset, NSDate, NSString;

@interface MPModelSong : MPModelObject
{
    BOOL _explicitSong;
    BOOL _artistUploadedContent;
    BOOL _hasVideo;
    BOOL _shouldExcludeFromShuffle;
    BOOL _shouldShowComposer;
    BOOL _libraryAdded;
    BOOL _libraryAddEligible;
    BOOL _hasCloudSyncSource;
    float _volumeNormalization;
    float _userRating;
    float _volumeAdjustment;
    NSString *_title;
    NSString *_grouping;
    double _duration;
    long long _trackNumber;
    long long _discNumber;
    long long _beatsPerMinute;
    NSString *_copyrightText;
    long long _year;
    MPGaplessInfo *_gaplessInfo;
    NSString *_classicalWork;
    NSString *_classicalMovement;
    long long _classicalMovementCount;
    long long _classicalMovementNumber;
    MPModelAlbum *_album;
    MPModelArtist *_artist;
    MPModelGenre *_genre;
    MPModelComposer *_composer;
    MPModelLyrics *_lyrics;
    MPModelHomeSharingAsset *_homeSharingAsset;
    MPModelFileAsset *_localFileAsset;
    MPModelPlaybackPosition *_playbackPosition;
    MPModelStoreAsset *_storeAsset;
    NSDate *_libraryAddedDate;
    long long _keepLocalEnableState;
    long long _keepLocalManagedStatus;
    CDUnknownBlockType _artworkCatalogBlock;
}

@property (strong, nonatomic) MPModelAlbum *album; // @synthesize album=_album;
@property (strong, nonatomic) MPModelArtist *artist; // @synthesize artist=_artist;
@property (nonatomic, getter=isArtistUploadedContent) BOOL artistUploadedContent; // @synthesize artistUploadedContent=_artistUploadedContent;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property (nonatomic) long long beatsPerMinute; // @synthesize beatsPerMinute=_beatsPerMinute;
@property (copy, nonatomic) NSString *classicalMovement; // @synthesize classicalMovement=_classicalMovement;
@property (nonatomic) long long classicalMovementCount; // @synthesize classicalMovementCount=_classicalMovementCount;
@property (nonatomic) long long classicalMovementNumber; // @synthesize classicalMovementNumber=_classicalMovementNumber;
@property (copy, nonatomic) NSString *classicalWork; // @synthesize classicalWork=_classicalWork;
@property (strong, nonatomic) MPModelComposer *composer; // @synthesize composer=_composer;
@property (copy, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property (nonatomic) long long discNumber; // @synthesize discNumber=_discNumber;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic, getter=isExplicitSong) BOOL explicitSong; // @synthesize explicitSong=_explicitSong;
@property (strong, nonatomic) MPGaplessInfo *gaplessInfo; // @synthesize gaplessInfo=_gaplessInfo;
@property (strong, nonatomic) MPModelGenre *genre; // @synthesize genre=_genre;
@property (copy, nonatomic) NSString *grouping; // @synthesize grouping=_grouping;
@property (nonatomic) BOOL hasCloudSyncSource; // @synthesize hasCloudSyncSource=_hasCloudSyncSource;
@property (nonatomic) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property (strong, nonatomic) MPModelHomeSharingAsset *homeSharingAsset; // @synthesize homeSharingAsset=_homeSharingAsset;
@property (nonatomic) long long keepLocalEnableState; // @synthesize keepLocalEnableState=_keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus; // @synthesize keepLocalManagedStatus=_keepLocalManagedStatus;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible; // @synthesize libraryAddEligible=_libraryAddEligible;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded; // @synthesize libraryAdded=_libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate; // @synthesize libraryAddedDate=_libraryAddedDate;
@property (strong, nonatomic) MPModelFileAsset *localFileAsset; // @synthesize localFileAsset=_localFileAsset;
@property (strong, nonatomic) MPModelLyrics *lyrics; // @synthesize lyrics=_lyrics;
@property (strong, nonatomic) MPModelPlaybackPosition *playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property (nonatomic) BOOL shouldExcludeFromShuffle; // @synthesize shouldExcludeFromShuffle=_shouldExcludeFromShuffle;
@property (nonatomic) BOOL shouldShowComposer; // @synthesize shouldShowComposer=_shouldShowComposer;
@property (strong, nonatomic) MPModelStoreAsset *storeAsset; // @synthesize storeAsset=_storeAsset;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) long long trackNumber; // @synthesize trackNumber=_trackNumber;
@property (nonatomic) float userRating; // @synthesize userRating=_userRating;
@property (nonatomic) float volumeAdjustment; // @synthesize volumeAdjustment=_volumeAdjustment;
@property (nonatomic) float volumeNormalization; // @synthesize volumeNormalization=_volumeNormalization;
@property (nonatomic) long long year; // @synthesize year=_year;

+ (id)__MPModelPropertySongArtistUploadedContent__PROPERTY;
+ (id)__MPModelPropertySongArtwork__PROPERTY;
+ (id)__MPModelPropertySongBeatsPerMinute__PROPERTY;
+ (id)__MPModelPropertySongClassicalMovementCount__PROPERTY;
+ (id)__MPModelPropertySongClassicalMovementNumber__PROPERTY;
+ (id)__MPModelPropertySongClassicalMovement__PROPERTY;
+ (id)__MPModelPropertySongClassicalWork__PROPERTY;
+ (id)__MPModelPropertySongCopyrightText__PROPERTY;
+ (id)__MPModelPropertySongDiscNumber__PROPERTY;
+ (id)__MPModelPropertySongDuration__PROPERTY;
+ (id)__MPModelPropertySongExplicit__PROPERTY;
+ (id)__MPModelPropertySongGaplessInfo__PROPERTY;
+ (id)__MPModelPropertySongGrouping__PROPERTY;
+ (id)__MPModelPropertySongHasCloudSyncSource__PROPERTY;
+ (id)__MPModelPropertySongHasVideo__PROPERTY;
+ (id)__MPModelPropertySongKeepLocalEnableState__PROPERTY;
+ (id)__MPModelPropertySongKeepLocalManagedStatus__PROPERTY;
+ (id)__MPModelPropertySongLibraryAddEligible__PROPERTY;
+ (id)__MPModelPropertySongLibraryAddedDate__PROPERTY;
+ (id)__MPModelPropertySongLibraryAdded__PROPERTY;
+ (id)__MPModelPropertySongShouldExcludeFromShuffle__PROPERTY;
+ (id)__MPModelPropertySongShouldShowComposer__PROPERTY;
+ (id)__MPModelPropertySongTitle__PROPERTY;
+ (id)__MPModelPropertySongTrackNumber__PROPERTY;
+ (id)__MPModelPropertySongUserRating__PROPERTY;
+ (id)__MPModelPropertySongVolumeAdjustment__PROPERTY;
+ (id)__MPModelPropertySongVolumeNormalization__PROPERTY;
+ (id)__MPModelPropertySongYear__PROPERTY;
+ (id)__MPModelRelationshipSongAlbum__PROPERTY;
+ (id)__MPModelRelationshipSongArtist__PROPERTY;
+ (id)__MPModelRelationshipSongComposer__PROPERTY;
+ (id)__MPModelRelationshipSongGenre__PROPERTY;
+ (id)__MPModelRelationshipSongHomeSharingAsset__PROPERTY;
+ (id)__MPModelRelationshipSongLocalFileAsset__PROPERTY;
+ (id)__MPModelRelationshipSongLyrics__PROPERTY;
+ (id)__MPModelRelationshipSongPlaybackPosition__PROPERTY;
+ (id)__MPModelRelationshipSongStoreAsset__PROPERTY;
+ (id)__album__KEY;
+ (id)__artistUploadedContent__KEY;
+ (id)__artist__KEY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__beatsPerMinute__KEY;
+ (id)__classicalMovementCount__KEY;
+ (id)__classicalMovementNumber__KEY;
+ (id)__classicalMovement__KEY;
+ (id)__classicalWork__KEY;
+ (id)__composer__KEY;
+ (id)__copyrightText__KEY;
+ (id)__discNumber__KEY;
+ (id)__duration__KEY;
+ (id)__explicitSong__KEY;
+ (id)__gaplessInfo__KEY;
+ (id)__genre__KEY;
+ (id)__grouping__KEY;
+ (id)__hasCloudSyncSource__KEY;
+ (id)__hasVideo__KEY;
+ (id)__homeSharingAsset__KEY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__libraryAddEligible__KEY;
+ (id)__libraryAddedDate__KEY;
+ (id)__libraryAdded__KEY;
+ (id)__localFileAsset__KEY;
+ (id)__lyrics__KEY;
+ (id)__playbackPosition__KEY;
+ (id)__shouldExcludeFromShuffle__KEY;
+ (id)__shouldShowComposer__KEY;
+ (id)__storeAsset__KEY;
+ (id)__title__KEY;
+ (id)__trackNumber__KEY;
+ (id)__userRating__KEY;
+ (id)__volumeAdjustment__KEY;
+ (id)__volumeNormalization__KEY;
+ (id)__year__KEY;
+ (id)kindWithVariants:(unsigned long long)arg1;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;
+ (BOOL)storeItemMetadataRequestNeedsPersonalizationForIdentifiers:(id)arg1;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (BOOL)supportsLibraryRemoval;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)descriptionWithType:(long long)arg1;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end

