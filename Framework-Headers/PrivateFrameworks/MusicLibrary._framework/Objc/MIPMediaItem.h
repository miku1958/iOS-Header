//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class MIPAudiobook, MIPMovie, MIPPodcast, MIPSong, MIPTVShow, NSData, NSMutableArray, NSString;

@interface MIPMediaItem : PBCodable <NSCopying>
{
    long long _accountId;
    long long _bookmarkTimeMilliseconds;
    long long _creationDateTime;
    long long _drmKey1IdCode;
    long long _drmKey2IdCode;
    long long _drmPlatformIdCode;
    long long _duration;
    long long _familyAccountId;
    long long _fileSize;
    long long _lastPlayedDateTime;
    long long _lastSkippedDateTime;
    long long _modificationDateTime;
    long long _purchaseDateTime;
    long long _purchaseHistoryId;
    long long _releaseDateTime;
    long long _sagaId;
    long long _storeId;
    long long _storePlaylistId;
    long long _storefrontId;
    long long _subscriptionStoreItemId;
    NSString *_artworkId;
    MIPAudiobook *_audiobook;
    NSString *_chapterMetadataUrl;
    int _cloudMatchedStatus;
    int _cloudPlaybackEndpointType;
    int _cloudStatus;
    NSString *_cloudUniversalLibraryId;
    NSString *_comment;
    int _contentRating;
    int _contentRatingLevel;
    NSString *_copyright;
    int _drmVersionsCode;
    NSString *_extrasUrl;
    int _fileKind;
    NSData *_flattenedChapterData;
    NSString *_grouping;
    NSMutableArray *_libraryIdentifiers;
    int _likedState;
    NSString *_longDescription;
    int _mediaType;
    MIPMovie *_movie;
    int _playCount;
    int _playCountDelta;
    int _playbackEndpointType;
    MIPPodcast *_podcast;
    NSString *_purchaseHistoryRedownloadParams;
    int _purchaseHistoryToken;
    NSString *_sagaRedownloadParams;
    NSString *_secondaryArtworkId;
    int _secondaryArtworkSourceType;
    NSString *_shortDescription;
    int _skipCount;
    int _skipCountDelta;
    MIPSong *_song;
    NSString *_sortTitle;
    NSString *_storeAssetFlavor;
    int _storeProtectionType;
    NSString *_storeXID;
    NSString *_title;
    MIPTVShow *_tvShow;
    int _year;
    BOOL _cloudAssetAvailable;
    BOOL _explicitContent;
    BOOL _hasChapterData;
    BOOL _hasLocalAsset;
    BOOL _hidden;
    BOOL _inUsersCloudLibrary;
    BOOL _isInUsersLibrary;
    BOOL _likedStateChanged;
    BOOL _needsReporting;
    BOOL _rememberBookmark;
    BOOL _userDisabled;
    struct {
        unsigned int accountId:1;
        unsigned int bookmarkTimeMilliseconds:1;
        unsigned int creationDateTime:1;
        unsigned int drmKey1IdCode:1;
        unsigned int drmKey2IdCode:1;
        unsigned int drmPlatformIdCode:1;
        unsigned int duration:1;
        unsigned int familyAccountId:1;
        unsigned int fileSize:1;
        unsigned int lastPlayedDateTime:1;
        unsigned int lastSkippedDateTime:1;
        unsigned int modificationDateTime:1;
        unsigned int purchaseDateTime:1;
        unsigned int purchaseHistoryId:1;
        unsigned int releaseDateTime:1;
        unsigned int sagaId:1;
        unsigned int storeId:1;
        unsigned int storePlaylistId:1;
        unsigned int storefrontId:1;
        unsigned int subscriptionStoreItemId:1;
        unsigned int cloudMatchedStatus:1;
        unsigned int cloudPlaybackEndpointType:1;
        unsigned int cloudStatus:1;
        unsigned int contentRating:1;
        unsigned int contentRatingLevel:1;
        unsigned int drmVersionsCode:1;
        unsigned int fileKind:1;
        unsigned int likedState:1;
        unsigned int mediaType:1;
        unsigned int playCount:1;
        unsigned int playCountDelta:1;
        unsigned int playbackEndpointType:1;
        unsigned int purchaseHistoryToken:1;
        unsigned int secondaryArtworkSourceType:1;
        unsigned int skipCount:1;
        unsigned int skipCountDelta:1;
        unsigned int storeProtectionType:1;
        unsigned int year:1;
        unsigned int cloudAssetAvailable:1;
        unsigned int explicitContent:1;
        unsigned int hasChapterData:1;
        unsigned int hasLocalAsset:1;
        unsigned int hidden:1;
        unsigned int inUsersCloudLibrary:1;
        unsigned int isInUsersLibrary:1;
        unsigned int likedStateChanged:1;
        unsigned int needsReporting:1;
        unsigned int rememberBookmark:1;
        unsigned int userDisabled:1;
    } _has;
}

@property (nonatomic) long long accountId; // @synthesize accountId=_accountId;
@property (strong, nonatomic) NSString *artworkId; // @synthesize artworkId=_artworkId;
@property (strong, nonatomic) MIPAudiobook *audiobook; // @synthesize audiobook=_audiobook;
@property (nonatomic) long long bookmarkTimeMilliseconds; // @synthesize bookmarkTimeMilliseconds=_bookmarkTimeMilliseconds;
@property (strong, nonatomic) NSString *chapterMetadataUrl; // @synthesize chapterMetadataUrl=_chapterMetadataUrl;
@property (nonatomic) BOOL cloudAssetAvailable; // @synthesize cloudAssetAvailable=_cloudAssetAvailable;
@property (nonatomic) int cloudMatchedStatus; // @synthesize cloudMatchedStatus=_cloudMatchedStatus;
@property (nonatomic) int cloudPlaybackEndpointType; // @synthesize cloudPlaybackEndpointType=_cloudPlaybackEndpointType;
@property (nonatomic) int cloudStatus; // @synthesize cloudStatus=_cloudStatus;
@property (strong, nonatomic) NSString *cloudUniversalLibraryId; // @synthesize cloudUniversalLibraryId=_cloudUniversalLibraryId;
@property (strong, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property (nonatomic) int contentRating; // @synthesize contentRating=_contentRating;
@property (nonatomic) int contentRatingLevel; // @synthesize contentRatingLevel=_contentRatingLevel;
@property (strong, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property (nonatomic) long long creationDateTime; // @synthesize creationDateTime=_creationDateTime;
@property (nonatomic) long long drmKey1IdCode; // @synthesize drmKey1IdCode=_drmKey1IdCode;
@property (nonatomic) long long drmKey2IdCode; // @synthesize drmKey2IdCode=_drmKey2IdCode;
@property (nonatomic) long long drmPlatformIdCode; // @synthesize drmPlatformIdCode=_drmPlatformIdCode;
@property (nonatomic) int drmVersionsCode; // @synthesize drmVersionsCode=_drmVersionsCode;
@property (nonatomic) long long duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL explicitContent; // @synthesize explicitContent=_explicitContent;
@property (strong, nonatomic) NSString *extrasUrl; // @synthesize extrasUrl=_extrasUrl;
@property (nonatomic) long long familyAccountId; // @synthesize familyAccountId=_familyAccountId;
@property (nonatomic) int fileKind; // @synthesize fileKind=_fileKind;
@property (nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property (strong, nonatomic) NSData *flattenedChapterData; // @synthesize flattenedChapterData=_flattenedChapterData;
@property (strong, nonatomic) NSString *grouping; // @synthesize grouping=_grouping;
@property (nonatomic) BOOL hasAccountId;
@property (readonly, nonatomic) BOOL hasArtworkId;
@property (readonly, nonatomic) BOOL hasAudiobook;
@property (nonatomic) BOOL hasBookmarkTimeMilliseconds;
@property (nonatomic) BOOL hasChapterData; // @synthesize hasChapterData=_hasChapterData;
@property (readonly, nonatomic) BOOL hasChapterMetadataUrl;
@property (nonatomic) BOOL hasCloudAssetAvailable;
@property (nonatomic) BOOL hasCloudMatchedStatus;
@property (nonatomic) BOOL hasCloudPlaybackEndpointType;
@property (nonatomic) BOOL hasCloudStatus;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryId;
@property (readonly, nonatomic) BOOL hasComment;
@property (nonatomic) BOOL hasContentRating;
@property (nonatomic) BOOL hasContentRatingLevel;
@property (readonly, nonatomic) BOOL hasCopyright;
@property (nonatomic) BOOL hasCreationDateTime;
@property (nonatomic) BOOL hasDrmKey1IdCode;
@property (nonatomic) BOOL hasDrmKey2IdCode;
@property (nonatomic) BOOL hasDrmPlatformIdCode;
@property (nonatomic) BOOL hasDrmVersionsCode;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasExplicitContent;
@property (readonly, nonatomic) BOOL hasExtrasUrl;
@property (nonatomic) BOOL hasFamilyAccountId;
@property (nonatomic) BOOL hasFileKind;
@property (nonatomic) BOOL hasFileSize;
@property (readonly, nonatomic) BOOL hasFlattenedChapterData;
@property (readonly, nonatomic) BOOL hasGrouping;
@property (nonatomic) BOOL hasHasChapterData;
@property (nonatomic) BOOL hasHasLocalAsset;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hasInUsersCloudLibrary;
@property (nonatomic) BOOL hasIsInUsersLibrary;
@property (nonatomic) BOOL hasLastPlayedDateTime;
@property (nonatomic) BOOL hasLastSkippedDateTime;
@property (nonatomic) BOOL hasLikedState;
@property (nonatomic) BOOL hasLikedStateChanged;
@property (nonatomic) BOOL hasLocalAsset; // @synthesize hasLocalAsset=_hasLocalAsset;
@property (readonly, nonatomic) BOOL hasLongDescription;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasModificationDateTime;
@property (readonly, nonatomic) BOOL hasMovie;
@property (nonatomic) BOOL hasNeedsReporting;
@property (nonatomic) BOOL hasPlayCount;
@property (nonatomic) BOOL hasPlayCountDelta;
@property (nonatomic) BOOL hasPlaybackEndpointType;
@property (readonly, nonatomic) BOOL hasPodcast;
@property (nonatomic) BOOL hasPurchaseDateTime;
@property (nonatomic) BOOL hasPurchaseHistoryId;
@property (readonly, nonatomic) BOOL hasPurchaseHistoryRedownloadParams;
@property (nonatomic) BOOL hasPurchaseHistoryToken;
@property (nonatomic) BOOL hasReleaseDateTime;
@property (nonatomic) BOOL hasRememberBookmark;
@property (nonatomic) BOOL hasSagaId;
@property (readonly, nonatomic) BOOL hasSagaRedownloadParams;
@property (readonly, nonatomic) BOOL hasSecondaryArtworkId;
@property (nonatomic) BOOL hasSecondaryArtworkSourceType;
@property (readonly, nonatomic) BOOL hasShortDescription;
@property (nonatomic) BOOL hasSkipCount;
@property (nonatomic) BOOL hasSkipCountDelta;
@property (readonly, nonatomic) BOOL hasSong;
@property (readonly, nonatomic) BOOL hasSortTitle;
@property (readonly, nonatomic) BOOL hasStoreAssetFlavor;
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) BOOL hasStorePlaylistId;
@property (nonatomic) BOOL hasStoreProtectionType;
@property (readonly, nonatomic) BOOL hasStoreXID;
@property (nonatomic) BOOL hasStorefrontId;
@property (nonatomic) BOOL hasSubscriptionStoreItemId;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasTvShow;
@property (nonatomic) BOOL hasUserDisabled;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property (nonatomic) BOOL inUsersCloudLibrary; // @synthesize inUsersCloudLibrary=_inUsersCloudLibrary;
@property (nonatomic) BOOL isInUsersLibrary; // @synthesize isInUsersLibrary=_isInUsersLibrary;
@property (nonatomic) long long lastPlayedDateTime; // @synthesize lastPlayedDateTime=_lastPlayedDateTime;
@property (nonatomic) long long lastSkippedDateTime; // @synthesize lastSkippedDateTime=_lastSkippedDateTime;
@property (strong, nonatomic) NSMutableArray *libraryIdentifiers; // @synthesize libraryIdentifiers=_libraryIdentifiers;
@property (nonatomic) int likedState; // @synthesize likedState=_likedState;
@property (nonatomic) BOOL likedStateChanged; // @synthesize likedStateChanged=_likedStateChanged;
@property (strong, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property (nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property (nonatomic) long long modificationDateTime; // @synthesize modificationDateTime=_modificationDateTime;
@property (strong, nonatomic) MIPMovie *movie; // @synthesize movie=_movie;
@property (nonatomic) BOOL needsReporting; // @synthesize needsReporting=_needsReporting;
@property (nonatomic) int playCount; // @synthesize playCount=_playCount;
@property (nonatomic) int playCountDelta; // @synthesize playCountDelta=_playCountDelta;
@property (nonatomic) int playbackEndpointType; // @synthesize playbackEndpointType=_playbackEndpointType;
@property (strong, nonatomic) MIPPodcast *podcast; // @synthesize podcast=_podcast;
@property (nonatomic) long long purchaseDateTime; // @synthesize purchaseDateTime=_purchaseDateTime;
@property (nonatomic) long long purchaseHistoryId; // @synthesize purchaseHistoryId=_purchaseHistoryId;
@property (strong, nonatomic) NSString *purchaseHistoryRedownloadParams; // @synthesize purchaseHistoryRedownloadParams=_purchaseHistoryRedownloadParams;
@property (nonatomic) int purchaseHistoryToken; // @synthesize purchaseHistoryToken=_purchaseHistoryToken;
@property (nonatomic) long long releaseDateTime; // @synthesize releaseDateTime=_releaseDateTime;
@property (nonatomic) BOOL rememberBookmark; // @synthesize rememberBookmark=_rememberBookmark;
@property (nonatomic) long long sagaId; // @synthesize sagaId=_sagaId;
@property (strong, nonatomic) NSString *sagaRedownloadParams; // @synthesize sagaRedownloadParams=_sagaRedownloadParams;
@property (strong, nonatomic) NSString *secondaryArtworkId; // @synthesize secondaryArtworkId=_secondaryArtworkId;
@property (nonatomic) int secondaryArtworkSourceType; // @synthesize secondaryArtworkSourceType=_secondaryArtworkSourceType;
@property (strong, nonatomic) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property (nonatomic) int skipCount; // @synthesize skipCount=_skipCount;
@property (nonatomic) int skipCountDelta; // @synthesize skipCountDelta=_skipCountDelta;
@property (strong, nonatomic) MIPSong *song; // @synthesize song=_song;
@property (strong, nonatomic) NSString *sortTitle; // @synthesize sortTitle=_sortTitle;
@property (strong, nonatomic) NSString *storeAssetFlavor; // @synthesize storeAssetFlavor=_storeAssetFlavor;
@property (nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property (nonatomic) long long storePlaylistId; // @synthesize storePlaylistId=_storePlaylistId;
@property (nonatomic) int storeProtectionType; // @synthesize storeProtectionType=_storeProtectionType;
@property (strong, nonatomic) NSString *storeXID; // @synthesize storeXID=_storeXID;
@property (nonatomic) long long storefrontId; // @synthesize storefrontId=_storefrontId;
@property (nonatomic) long long subscriptionStoreItemId; // @synthesize subscriptionStoreItemId=_subscriptionStoreItemId;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) MIPTVShow *tvShow; // @synthesize tvShow=_tvShow;
@property (nonatomic) BOOL userDisabled; // @synthesize userDisabled=_userDisabled;
@property (nonatomic) int year; // @synthesize year=_year;

+ (Class)libraryIdentifiersType;
- (void).cxx_destruct;
- (int)StringAsMediaType:(id)arg1;
- (void)addLibraryIdentifiers:(id)arg1;
- (void)clearLibraryIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)libraryIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)libraryIdentifiersCount;
- (id)mediaTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

