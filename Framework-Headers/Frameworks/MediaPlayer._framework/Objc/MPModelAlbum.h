//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelArtist, MPModelGenre, MPModelSong, NSDate, NSDateComponents, NSString;

@interface MPModelAlbum : MPModelObject
{
    BOOL _hasCleanContent;
    BOOL _hasExplicitContent;
    BOOL _compilation;
    BOOL _classical;
    BOOL _preorder;
    BOOL _libraryAdded;
    BOOL _libraryAddEligible;
    float _volumeNormalization;
    NSString *_title;
    MPModelArtist *_artist;
    MPModelGenre *_genre;
    MPModelSong *_representativeSong;
    long long _trackCount;
    long long _maximumItemTrackNumber;
    long long _discCount;
    NSDateComponents *_releaseDateComponents;
    long long _year;
    NSString *_copyrightText;
    NSDate *_lastDevicePlaybackDate;
    NSString *_editorNotes;
    NSString *_shortEditorNotes;
    NSDate *_libraryAddedDate;
    long long _keepLocalEnableState;
    long long _keepLocalManagedStatus;
    CDUnknownBlockType _artworkCatalogBlock;
    CDUnknownBlockType _songPopularityBlock;
}

@property (strong, nonatomic) MPModelArtist *artist; // @synthesize artist=_artist;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property (nonatomic, getter=isClassical) BOOL classical; // @synthesize classical=_classical;
@property (nonatomic, getter=isCompilation) BOOL compilation; // @synthesize compilation=_compilation;
@property (copy, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property (nonatomic) long long discCount; // @synthesize discCount=_discCount;
@property (copy, nonatomic) NSString *editorNotes; // @synthesize editorNotes=_editorNotes;
@property (strong, nonatomic) MPModelGenre *genre; // @synthesize genre=_genre;
@property (nonatomic) BOOL hasCleanContent; // @synthesize hasCleanContent=_hasCleanContent;
@property (nonatomic) BOOL hasExplicitContent; // @synthesize hasExplicitContent=_hasExplicitContent;
@property (nonatomic) long long keepLocalEnableState; // @synthesize keepLocalEnableState=_keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus; // @synthesize keepLocalManagedStatus=_keepLocalManagedStatus;
@property (copy, nonatomic) NSDate *lastDevicePlaybackDate; // @synthesize lastDevicePlaybackDate=_lastDevicePlaybackDate;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible; // @synthesize libraryAddEligible=_libraryAddEligible;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded; // @synthesize libraryAdded=_libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate; // @synthesize libraryAddedDate=_libraryAddedDate;
@property (nonatomic) long long maximumItemTrackNumber; // @synthesize maximumItemTrackNumber=_maximumItemTrackNumber;
@property (nonatomic, getter=isPreorder) BOOL preorder; // @synthesize preorder=_preorder;
@property (copy, nonatomic) NSDateComponents *releaseDateComponents; // @synthesize releaseDateComponents=_releaseDateComponents;
@property (strong, nonatomic) MPModelSong *representativeSong; // @synthesize representativeSong=_representativeSong;
@property (copy, nonatomic) NSString *shortEditorNotes; // @synthesize shortEditorNotes=_shortEditorNotes;
@property (copy, nonatomic) CDUnknownBlockType songPopularityBlock; // @synthesize songPopularityBlock=_songPopularityBlock;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) long long trackCount; // @synthesize trackCount=_trackCount;
@property (nonatomic) float volumeNormalization; // @synthesize volumeNormalization=_volumeNormalization;
@property (nonatomic) long long year; // @synthesize year=_year;

+ (id)__MPModelPropertyAlbumArtwork__PROPERTY;
+ (id)__MPModelPropertyAlbumCopyrightText__PROPERTY;
+ (id)__MPModelPropertyAlbumDiscCount__PROPERTY;
+ (id)__MPModelPropertyAlbumEditorNotes__PROPERTY;
+ (id)__MPModelPropertyAlbumEditorialArtwork__PROPERTY;
+ (id)__MPModelPropertyAlbumHasCleanContent__PROPERTY;
+ (id)__MPModelPropertyAlbumHasExplicitContent__PROPERTY;
+ (id)__MPModelPropertyAlbumIsClassical__PROPERTY;
+ (id)__MPModelPropertyAlbumIsCompilation__PROPERTY;
+ (id)__MPModelPropertyAlbumKeepLocalEnableState__PROPERTY;
+ (id)__MPModelPropertyAlbumKeepLocalManagedStatus__PROPERTY;
+ (id)__MPModelPropertyAlbumLastDevicePlaybackDate__PROPERTY;
+ (id)__MPModelPropertyAlbumLibraryAddEligible__PROPERTY;
+ (id)__MPModelPropertyAlbumLibraryAddedDate__PROPERTY;
+ (id)__MPModelPropertyAlbumLibraryAdded__PROPERTY;
+ (id)__MPModelPropertyAlbumMaximumItemTrackNumber__PROPERTY;
+ (id)__MPModelPropertyAlbumPreorder__PROPERTY;
+ (id)__MPModelPropertyAlbumReleaseDateComponents__PROPERTY;
+ (id)__MPModelPropertyAlbumShortEditorNotes__PROPERTY;
+ (id)__MPModelPropertyAlbumSongPopularity__PROPERTY;
+ (id)__MPModelPropertyAlbumTitle__PROPERTY;
+ (id)__MPModelPropertyAlbumTrackCount__PROPERTY;
+ (id)__MPModelPropertyAlbumVolumeNormalization__PROPERTY;
+ (id)__MPModelPropertyAlbumYear__PROPERTY;
+ (id)__MPModelRelationshipAlbumArtist__PROPERTY;
+ (id)__MPModelRelationshipAlbumGenre__PROPERTY;
+ (id)__MPModelRelationshipAlbumRepresentativeSong__PROPERTY;
+ (id)__artist__KEY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__classical__KEY;
+ (id)__compilation__KEY;
+ (id)__copyrightText__KEY;
+ (id)__discCount__KEY;
+ (id)__editorNotes__KEY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__genre__KEY;
+ (id)__hasCleanContent__KEY;
+ (id)__hasExplicitContent__KEY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__lastDevicePlaybackDate__KEY;
+ (id)__libraryAddEligible__KEY;
+ (id)__libraryAddedDate__KEY;
+ (id)__libraryAdded__KEY;
+ (id)__maximumItemTrackNumber__KEY;
+ (id)__preorder__KEY;
+ (id)__releaseDateComponents__KEY;
+ (id)__representativeSong__KEY;
+ (id)__shortEditorNotes__KEY;
+ (id)__songPopularityBlock__KEY;
+ (id)__title__KEY;
+ (id)__trackCount__KEY;
+ (id)__volumeNormalization__KEY;
+ (id)__year__KEY;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (BOOL)supportsLibraryRemoval;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)descriptionWithType:(long long)arg1;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)songPopularityForIdentifiers:(id)arg1;

@end

