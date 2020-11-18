//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelFileAsset, MPModelPlaybackPosition, MPModelStoreAsset, NSArray, NSDate, NSDictionary, NSString;

@interface MPModelMovie : MPModelObject
{
    BOOL _hasCloudSyncSource;
    BOOL _libraryAdded;
    BOOL _libraryAddEligible;
    NSString *_title;
    NSString *_descriptionText;
    double _duration;
    long long _explicitRating;
    NSString *_tagline;
    NSDictionary *_movieInfoDictionary;
    NSDate *_releaseDate;
    NSArray *_clips;
    MPModelFileAsset *_localFileAsset;
    MPModelPlaybackPosition *_playbackPosition;
    MPModelStoreAsset *_storeAsset;
    NSDate *_libraryAddedDate;
    long long _keepLocalEnableState;
    long long _keepLocalManagedStatus;
    CDUnknownBlockType _artworkCatalogBlock;
    CDUnknownBlockType _editorialArtworkCatalogBlock;
}

@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property (copy, nonatomic) NSArray *clips; // @synthesize clips=_clips;
@property (copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @synthesize editorialArtworkCatalogBlock=_editorialArtworkCatalogBlock;
@property (nonatomic) long long explicitRating; // @synthesize explicitRating=_explicitRating;
@property (nonatomic) BOOL hasCloudSyncSource; // @synthesize hasCloudSyncSource=_hasCloudSyncSource;
@property (nonatomic) long long keepLocalEnableState; // @synthesize keepLocalEnableState=_keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus; // @synthesize keepLocalManagedStatus=_keepLocalManagedStatus;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible; // @synthesize libraryAddEligible=_libraryAddEligible;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded; // @synthesize libraryAdded=_libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate; // @synthesize libraryAddedDate=_libraryAddedDate;
@property (strong, nonatomic) MPModelFileAsset *localFileAsset; // @synthesize localFileAsset=_localFileAsset;
@property (copy, nonatomic) NSDictionary *movieInfoDictionary; // @synthesize movieInfoDictionary=_movieInfoDictionary;
@property (strong, nonatomic) MPModelPlaybackPosition *playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property (copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property (strong, nonatomic) MPModelStoreAsset *storeAsset; // @synthesize storeAsset=_storeAsset;
@property (copy, nonatomic) NSString *tagline; // @synthesize tagline=_tagline;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)__MPModelPropertyMovieArtwork__PROPERTY;
+ (id)__MPModelPropertyMovieDescriptionText__PROPERTY;
+ (id)__MPModelPropertyMovieDuration__PROPERTY;
+ (id)__MPModelPropertyMovieEditorialArtwork__PROPERTY;
+ (id)__MPModelPropertyMovieExplicitRating__PROPERTY;
+ (id)__MPModelPropertyMovieHasCloudSyncSource__PROPERTY;
+ (id)__MPModelPropertyMovieInfoDictionary__PROPERTY;
+ (id)__MPModelPropertyMovieKeepLocalEnableState__PROPERTY;
+ (id)__MPModelPropertyMovieKeepLocalManagedStatus__PROPERTY;
+ (id)__MPModelPropertyMovieLibraryAddEligible__PROPERTY;
+ (id)__MPModelPropertyMovieLibraryAddedDate__PROPERTY;
+ (id)__MPModelPropertyMovieLibraryAdded__PROPERTY;
+ (id)__MPModelPropertyMovieReleaseDate__PROPERTY;
+ (id)__MPModelPropertyMovieTagline__PROPERTY;
+ (id)__MPModelPropertyMovieTitle__PROPERTY;
+ (id)__MPModelRelationshipMovieClips__PROPERTY;
+ (id)__MPModelRelationshipMovieLocalFileAsset__PROPERTY;
+ (id)__MPModelRelationshipMoviePlaybackPosition__PROPERTY;
+ (id)__MPModelRelationshipMovieStoreAsset__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__clips__KEY;
+ (id)__descriptionText__KEY;
+ (id)__duration__KEY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__explicitRating__KEY;
+ (id)__hasCloudSyncSource__KEY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__libraryAddEligible__KEY;
+ (id)__libraryAddedDate__KEY;
+ (id)__libraryAdded__KEY;
+ (id)__localFileAsset__KEY;
+ (id)__movieInfoDictionary__KEY;
+ (id)__playbackPosition__KEY;
+ (id)__releaseDate__KEY;
+ (id)__storeAsset__KEY;
+ (id)__tagline__KEY;
+ (id)__title__KEY;
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
- (id)editorialArtworkCatalog;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end

