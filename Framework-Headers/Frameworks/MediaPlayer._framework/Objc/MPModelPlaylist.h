//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelCurator, MPTiledArtworkRequest, NSDate, NSDateComponents, NSString, NSURL;

@interface MPModelPlaylist : MPModelObject
{
    BOOL _hasCleanContent;
    BOOL _hasExplicitContent;
    BOOL _owner;
    BOOL _curatorPlaylist;
    BOOL _publicPlaylist;
    BOOL _visiblePlaylist;
    BOOL _subscribed;
    BOOL _libraryAdded;
    NSString *_name;
    NSString *_descriptionText;
    MPModelCurator *_curator;
    unsigned long long _trackCount;
    long long _userEditableComponents;
    long long _type;
    NSString *_editorNotes;
    NSString *_shortEditorNotes;
    NSURL *_shareURL;
    NSURL *_shareShortURL;
    NSDateComponents *_releaseDateComponents;
    NSDateComponents *_lastModifiedDateComponents;
    NSDate *_lastDevicePlaybackDate;
    NSString *_cloudVersionHash;
    NSDate *_libraryAddedDate;
    long long _keepLocalEnableState;
    long long _keepLocalManagedStatus;
    CDUnknownBlockType _artworkCatalogBlock;
    CDUnknownBlockType _editorialArtworkCatalogBlock;
    MPTiledArtworkRequest *_tiledArtworkRequest;
}

@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property (copy, nonatomic) NSString *cloudVersionHash; // @synthesize cloudVersionHash=_cloudVersionHash;
@property (copy, nonatomic) MPModelCurator *curator; // @synthesize curator=_curator;
@property (nonatomic, getter=isCuratorPlaylist) BOOL curatorPlaylist; // @synthesize curatorPlaylist=_curatorPlaylist;
@property (copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (copy, nonatomic) NSString *editorNotes; // @synthesize editorNotes=_editorNotes;
@property (copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @synthesize editorialArtworkCatalogBlock=_editorialArtworkCatalogBlock;
@property (nonatomic) BOOL hasCleanContent; // @synthesize hasCleanContent=_hasCleanContent;
@property (nonatomic) BOOL hasExplicitContent; // @synthesize hasExplicitContent=_hasExplicitContent;
@property (nonatomic) long long keepLocalEnableState; // @synthesize keepLocalEnableState=_keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus; // @synthesize keepLocalManagedStatus=_keepLocalManagedStatus;
@property (copy, nonatomic) NSDate *lastDevicePlaybackDate; // @synthesize lastDevicePlaybackDate=_lastDevicePlaybackDate;
@property (copy, nonatomic) NSDateComponents *lastModifiedDateComponents; // @synthesize lastModifiedDateComponents=_lastModifiedDateComponents;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded; // @synthesize libraryAdded=_libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate; // @synthesize libraryAddedDate=_libraryAddedDate;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic, getter=isOwner) BOOL owner; // @synthesize owner=_owner;
@property (nonatomic, getter=isPublicPlaylist) BOOL publicPlaylist; // @synthesize publicPlaylist=_publicPlaylist;
@property (copy, nonatomic) NSDateComponents *releaseDateComponents; // @synthesize releaseDateComponents=_releaseDateComponents;
@property (copy, nonatomic) NSURL *shareShortURL; // @synthesize shareShortURL=_shareShortURL;
@property (copy, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property (copy, nonatomic) NSString *shortEditorNotes; // @synthesize shortEditorNotes=_shortEditorNotes;
@property (nonatomic, getter=isSubscribed) BOOL subscribed; // @synthesize subscribed=_subscribed;
@property (copy, nonatomic) MPTiledArtworkRequest *tiledArtworkRequest; // @synthesize tiledArtworkRequest=_tiledArtworkRequest;
@property (nonatomic) unsigned long long trackCount; // @synthesize trackCount=_trackCount;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (nonatomic) long long userEditableComponents; // @synthesize userEditableComponents=_userEditableComponents;
@property (nonatomic, getter=isVisiblePlaylist) BOOL visiblePlaylist; // @synthesize visiblePlaylist=_visiblePlaylist;

+ (id)__MPModelPropertyPlaylistArtwork__PROPERTY;
+ (id)__MPModelPropertyPlaylistCloudVersionHash__PROPERTY;
+ (id)__MPModelPropertyPlaylistCuratorPlaylist__PROPERTY;
+ (id)__MPModelPropertyPlaylistDescriptionText__PROPERTY;
+ (id)__MPModelPropertyPlaylistEditorNotes__PROPERTY;
+ (id)__MPModelPropertyPlaylistEditorialArtwork__PROPERTY;
+ (id)__MPModelPropertyPlaylistHasCleanContent__PROPERTY;
+ (id)__MPModelPropertyPlaylistHasExplicitContent__PROPERTY;
+ (id)__MPModelPropertyPlaylistIsOwner__PROPERTY;
+ (id)__MPModelPropertyPlaylistKeepLocalEnableState__PROPERTY;
+ (id)__MPModelPropertyPlaylistKeepLocalManagedStatus__PROPERTY;
+ (id)__MPModelPropertyPlaylistLastDevicePlaybackDate__PROPERTY;
+ (id)__MPModelPropertyPlaylistLastModifiedDateComponents__PROPERTY;
+ (id)__MPModelPropertyPlaylistLibraryAddedDate__PROPERTY;
+ (id)__MPModelPropertyPlaylistLibraryAdded__PROPERTY;
+ (id)__MPModelPropertyPlaylistName__PROPERTY;
+ (id)__MPModelPropertyPlaylistPublicPlaylist__PROPERTY;
+ (id)__MPModelPropertyPlaylistReleaseDateComponents__PROPERTY;
+ (id)__MPModelPropertyPlaylistShareShortURL__PROPERTY;
+ (id)__MPModelPropertyPlaylistShareURL__PROPERTY;
+ (id)__MPModelPropertyPlaylistShortEditorNotes__PROPERTY;
+ (id)__MPModelPropertyPlaylistSubscribed__PROPERTY;
+ (id)__MPModelPropertyPlaylistTrackCount__PROPERTY;
+ (id)__MPModelPropertyPlaylistTracksTiledArtwork__PROPERTY;
+ (id)__MPModelPropertyPlaylistType__PROPERTY;
+ (id)__MPModelPropertyPlaylistUserEditableComponents__PROPERTY;
+ (id)__MPModelPropertyPlaylistVisiblePlaylist__PROPERTY;
+ (id)__MPModelRelationshipPlaylistCurator__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__cloudVersionHash__KEY;
+ (id)__curatorPlaylist__KEY;
+ (id)__curator__KEY;
+ (id)__descriptionText__KEY;
+ (id)__editorNotes__KEY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__hasCleanContent__KEY;
+ (id)__hasExplicitContent__KEY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__lastDevicePlaybackDate__KEY;
+ (id)__lastModifiedDateComponents__KEY;
+ (id)__libraryAddedDate__KEY;
+ (id)__libraryAdded__KEY;
+ (id)__name__KEY;
+ (id)__owner__KEY;
+ (id)__publicPlaylist__KEY;
+ (id)__releaseDateComponents__KEY;
+ (id)__shareShortURL__KEY;
+ (id)__shareURL__KEY;
+ (id)__shortEditorNotes__KEY;
+ (id)__subscribed__KEY;
+ (id)__tiledArtworkRequest__KEY;
+ (id)__trackCount__KEY;
+ (id)__type__KEY;
+ (id)__userEditableComponents__KEY;
+ (id)__visiblePlaylist__KEY;
+ (id)kindWithPlaylistEntryKind:(id)arg1 options:(unsigned long long)arg2;
+ (id)kindWithVariants:(unsigned long long)arg1 playlistEntryKind:(id)arg2 options:(unsigned long long)arg3;
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
- (id)editorialArtworkCatalog;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)trackArtworkCatalogsWithCount:(long long)arg1;
- (id)tracksTiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;

@end

