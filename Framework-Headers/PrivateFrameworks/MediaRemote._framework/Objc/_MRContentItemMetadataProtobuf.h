//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying>
{
    double _duration;
    double _elapsedTime;
    double _elapsedTimeTimestamp;
    long long _iTunesStoreAlbumIdentifier;
    long long _iTunesStoreArtistIdentifier;
    long long _iTunesStoreIdentifier;
    long long _iTunesStoreSubscriptionIdentifier;
    double _inferredTimestamp;
    long long _radioStationIdentifier;
    double _releaseDate;
    double _startTime;
    NSString *_albumArtistName;
    NSString *_albumName;
    NSData *_appMetricsData;
    int _artworkDataHeight;
    int _artworkDataWidth;
    NSString *_artworkIdentifier;
    NSString *_artworkMIMEType;
    NSString *_artworkURL;
    NSString *_assetURLString;
    int _chapterCount;
    NSString *_collectionIdentifier;
    NSData *_collectionInfoData;
    NSString *_composer;
    NSString *_contentIdentifier;
    NSData *_currentPlaybackDateData;
    float _defaultPlaybackRate;
    NSData *_deviceSpecificUserInfoData;
    NSString *_directorName;
    int _discNumber;
    float _downloadProgress;
    int _downloadState;
    int _editingStyleFlags;
    int _episodeNumber;
    NSString *_genre;
    NSString *_localizedContentRating;
    NSString *_lyricsURL;
    int _mediaSubType;
    int _mediaType;
    NSData *_nowPlayingInfoData;
    int _numberOfSections;
    int _playCount;
    float _playbackProgress;
    float _playbackRate;
    int _playlistType;
    NSString *_profileIdentifier;
    NSData *_purchaseInfoData;
    NSString *_radioStationName;
    NSString *_radioStationString;
    int _radioStationType;
    int _seasonNumber;
    NSString *_seriesName;
    NSString *_serviceIdentifier;
    NSString *_subtitle;
    NSString *_title;
    int _totalDiscCount;
    int _totalTrackCount;
    NSString *_trackArtistName;
    int _trackNumber;
    NSData *_userInfoData;
    BOOL _artworkAvailable;
    BOOL _infoAvailable;
    BOOL _isAlwaysLive;
    BOOL _isContainer;
    BOOL _isCurrentlyPlaying;
    BOOL _isExplicitItem;
    BOOL _isInWishList;
    BOOL _isLiked;
    BOOL _isPlayable;
    BOOL _isSharable;
    BOOL _isSteerable;
    BOOL _isStreamingContent;
    BOOL _languageOptionsAvailable;
    BOOL _lyricsAvailable;
    struct {
        unsigned int duration:1;
        unsigned int elapsedTime:1;
        unsigned int elapsedTimeTimestamp:1;
        unsigned int iTunesStoreAlbumIdentifier:1;
        unsigned int iTunesStoreArtistIdentifier:1;
        unsigned int iTunesStoreIdentifier:1;
        unsigned int iTunesStoreSubscriptionIdentifier:1;
        unsigned int inferredTimestamp:1;
        unsigned int radioStationIdentifier:1;
        unsigned int releaseDate:1;
        unsigned int startTime:1;
        unsigned int artworkDataHeight:1;
        unsigned int artworkDataWidth:1;
        unsigned int chapterCount:1;
        unsigned int defaultPlaybackRate:1;
        unsigned int discNumber:1;
        unsigned int downloadProgress:1;
        unsigned int downloadState:1;
        unsigned int editingStyleFlags:1;
        unsigned int episodeNumber:1;
        unsigned int mediaSubType:1;
        unsigned int mediaType:1;
        unsigned int numberOfSections:1;
        unsigned int playCount:1;
        unsigned int playbackProgress:1;
        unsigned int playbackRate:1;
        unsigned int playlistType:1;
        unsigned int radioStationType:1;
        unsigned int seasonNumber:1;
        unsigned int totalDiscCount:1;
        unsigned int totalTrackCount:1;
        unsigned int trackNumber:1;
        unsigned int artworkAvailable:1;
        unsigned int infoAvailable:1;
        unsigned int isAlwaysLive:1;
        unsigned int isContainer:1;
        unsigned int isCurrentlyPlaying:1;
        unsigned int isExplicitItem:1;
        unsigned int isInWishList:1;
        unsigned int isLiked:1;
        unsigned int isPlayable:1;
        unsigned int isSharable:1;
        unsigned int isSteerable:1;
        unsigned int isStreamingContent:1;
        unsigned int languageOptionsAvailable:1;
        unsigned int lyricsAvailable:1;
    } _has;
}

@property (strong, nonatomic) NSString *albumArtistName; // @synthesize albumArtistName=_albumArtistName;
@property (strong, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property (strong, nonatomic) NSData *appMetricsData; // @synthesize appMetricsData=_appMetricsData;
@property (nonatomic) BOOL artworkAvailable; // @synthesize artworkAvailable=_artworkAvailable;
@property (nonatomic) int artworkDataHeight; // @synthesize artworkDataHeight=_artworkDataHeight;
@property (nonatomic) int artworkDataWidth; // @synthesize artworkDataWidth=_artworkDataWidth;
@property (strong, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property (strong, nonatomic) NSString *artworkMIMEType; // @synthesize artworkMIMEType=_artworkMIMEType;
@property (strong, nonatomic) NSString *artworkURL; // @synthesize artworkURL=_artworkURL;
@property (strong, nonatomic) NSString *assetURLString; // @synthesize assetURLString=_assetURLString;
@property (nonatomic) int chapterCount; // @synthesize chapterCount=_chapterCount;
@property (strong, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property (strong, nonatomic) NSData *collectionInfoData; // @synthesize collectionInfoData=_collectionInfoData;
@property (strong, nonatomic) NSString *composer; // @synthesize composer=_composer;
@property (strong, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
@property (strong, nonatomic) NSData *currentPlaybackDateData; // @synthesize currentPlaybackDateData=_currentPlaybackDateData;
@property (nonatomic) float defaultPlaybackRate; // @synthesize defaultPlaybackRate=_defaultPlaybackRate;
@property (strong, nonatomic) NSData *deviceSpecificUserInfoData; // @synthesize deviceSpecificUserInfoData=_deviceSpecificUserInfoData;
@property (strong, nonatomic) NSString *directorName; // @synthesize directorName=_directorName;
@property (nonatomic) int discNumber; // @synthesize discNumber=_discNumber;
@property (nonatomic) float downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property (nonatomic) int downloadState; // @synthesize downloadState=_downloadState;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) int editingStyleFlags; // @synthesize editingStyleFlags=_editingStyleFlags;
@property (nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property (nonatomic) double elapsedTimeTimestamp; // @synthesize elapsedTimeTimestamp=_elapsedTimeTimestamp;
@property (nonatomic) int episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property (strong, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property (readonly, nonatomic) BOOL hasAlbumArtistName;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (readonly, nonatomic) BOOL hasAppMetricsData;
@property (nonatomic) BOOL hasArtworkAvailable;
@property (nonatomic) BOOL hasArtworkDataHeight;
@property (nonatomic) BOOL hasArtworkDataWidth;
@property (readonly, nonatomic) BOOL hasArtworkIdentifier;
@property (readonly, nonatomic) BOOL hasArtworkMIMEType;
@property (readonly, nonatomic) BOOL hasArtworkURL;
@property (readonly, nonatomic) BOOL hasAssetURLString;
@property (nonatomic) BOOL hasChapterCount;
@property (readonly, nonatomic) BOOL hasCollectionIdentifier;
@property (readonly, nonatomic) BOOL hasCollectionInfoData;
@property (readonly, nonatomic) BOOL hasComposer;
@property (readonly, nonatomic) BOOL hasContentIdentifier;
@property (readonly, nonatomic) BOOL hasCurrentPlaybackDateData;
@property (nonatomic) BOOL hasDefaultPlaybackRate;
@property (readonly, nonatomic) BOOL hasDeviceSpecificUserInfoData;
@property (readonly, nonatomic) BOOL hasDirectorName;
@property (nonatomic) BOOL hasDiscNumber;
@property (nonatomic) BOOL hasDownloadProgress;
@property (nonatomic) BOOL hasDownloadState;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEditingStyleFlags;
@property (nonatomic) BOOL hasElapsedTime;
@property (nonatomic) BOOL hasElapsedTimeTimestamp;
@property (nonatomic) BOOL hasEpisodeNumber;
@property (readonly, nonatomic) BOOL hasGenre;
@property (nonatomic) BOOL hasITunesStoreAlbumIdentifier;
@property (nonatomic) BOOL hasITunesStoreArtistIdentifier;
@property (nonatomic) BOOL hasITunesStoreIdentifier;
@property (nonatomic) BOOL hasITunesStoreSubscriptionIdentifier;
@property (nonatomic) BOOL hasInferredTimestamp;
@property (nonatomic) BOOL hasInfoAvailable;
@property (nonatomic) BOOL hasIsAlwaysLive;
@property (nonatomic) BOOL hasIsContainer;
@property (nonatomic) BOOL hasIsCurrentlyPlaying;
@property (nonatomic) BOOL hasIsExplicitItem;
@property (nonatomic) BOOL hasIsInWishList;
@property (nonatomic) BOOL hasIsLiked;
@property (nonatomic) BOOL hasIsPlayable;
@property (nonatomic) BOOL hasIsSharable;
@property (nonatomic) BOOL hasIsSteerable;
@property (nonatomic) BOOL hasIsStreamingContent;
@property (nonatomic) BOOL hasLanguageOptionsAvailable;
@property (readonly, nonatomic) BOOL hasLocalizedContentRating;
@property (nonatomic) BOOL hasLyricsAvailable;
@property (readonly, nonatomic) BOOL hasLyricsURL;
@property (nonatomic) BOOL hasMediaSubType;
@property (nonatomic) BOOL hasMediaType;
@property (readonly, nonatomic) BOOL hasNowPlayingInfoData;
@property (nonatomic) BOOL hasNumberOfSections;
@property (nonatomic) BOOL hasPlayCount;
@property (nonatomic) BOOL hasPlaybackProgress;
@property (nonatomic) BOOL hasPlaybackRate;
@property (nonatomic) BOOL hasPlaylistType;
@property (readonly, nonatomic) BOOL hasProfileIdentifier;
@property (readonly, nonatomic) BOOL hasPurchaseInfoData;
@property (nonatomic) BOOL hasRadioStationIdentifier;
@property (readonly, nonatomic) BOOL hasRadioStationName;
@property (readonly, nonatomic) BOOL hasRadioStationString;
@property (nonatomic) BOOL hasRadioStationType;
@property (nonatomic) BOOL hasReleaseDate;
@property (nonatomic) BOOL hasSeasonNumber;
@property (readonly, nonatomic) BOOL hasSeriesName;
@property (readonly, nonatomic) BOOL hasServiceIdentifier;
@property (nonatomic) BOOL hasStartTime;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasTotalDiscCount;
@property (nonatomic) BOOL hasTotalTrackCount;
@property (readonly, nonatomic) BOOL hasTrackArtistName;
@property (nonatomic) BOOL hasTrackNumber;
@property (readonly, nonatomic) BOOL hasUserInfoData;
@property (nonatomic) long long iTunesStoreAlbumIdentifier; // @synthesize iTunesStoreAlbumIdentifier=_iTunesStoreAlbumIdentifier;
@property (nonatomic) long long iTunesStoreArtistIdentifier; // @synthesize iTunesStoreArtistIdentifier=_iTunesStoreArtistIdentifier;
@property (nonatomic) long long iTunesStoreIdentifier; // @synthesize iTunesStoreIdentifier=_iTunesStoreIdentifier;
@property (nonatomic) long long iTunesStoreSubscriptionIdentifier; // @synthesize iTunesStoreSubscriptionIdentifier=_iTunesStoreSubscriptionIdentifier;
@property (nonatomic) double inferredTimestamp; // @synthesize inferredTimestamp=_inferredTimestamp;
@property (nonatomic) BOOL infoAvailable; // @synthesize infoAvailable=_infoAvailable;
@property (nonatomic) BOOL isAlwaysLive; // @synthesize isAlwaysLive=_isAlwaysLive;
@property (nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
@property (nonatomic) BOOL isCurrentlyPlaying; // @synthesize isCurrentlyPlaying=_isCurrentlyPlaying;
@property (nonatomic) BOOL isExplicitItem; // @synthesize isExplicitItem=_isExplicitItem;
@property (nonatomic) BOOL isInWishList; // @synthesize isInWishList=_isInWishList;
@property (nonatomic) BOOL isLiked; // @synthesize isLiked=_isLiked;
@property (nonatomic) BOOL isPlayable; // @synthesize isPlayable=_isPlayable;
@property (nonatomic) BOOL isSharable; // @synthesize isSharable=_isSharable;
@property (nonatomic) BOOL isSteerable; // @synthesize isSteerable=_isSteerable;
@property (nonatomic) BOOL isStreamingContent; // @synthesize isStreamingContent=_isStreamingContent;
@property (nonatomic) BOOL languageOptionsAvailable; // @synthesize languageOptionsAvailable=_languageOptionsAvailable;
@property (strong, nonatomic) NSString *localizedContentRating; // @synthesize localizedContentRating=_localizedContentRating;
@property (nonatomic) BOOL lyricsAvailable; // @synthesize lyricsAvailable=_lyricsAvailable;
@property (strong, nonatomic) NSString *lyricsURL; // @synthesize lyricsURL=_lyricsURL;
@property (nonatomic) int mediaSubType; // @synthesize mediaSubType=_mediaSubType;
@property (nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property (strong, nonatomic) NSData *nowPlayingInfoData; // @synthesize nowPlayingInfoData=_nowPlayingInfoData;
@property (nonatomic) int numberOfSections; // @synthesize numberOfSections=_numberOfSections;
@property (nonatomic) int playCount; // @synthesize playCount=_playCount;
@property (nonatomic) float playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property (nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property (nonatomic) int playlistType; // @synthesize playlistType=_playlistType;
@property (strong, nonatomic) NSString *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property (strong, nonatomic) NSData *purchaseInfoData; // @synthesize purchaseInfoData=_purchaseInfoData;
@property (nonatomic) long long radioStationIdentifier; // @synthesize radioStationIdentifier=_radioStationIdentifier;
@property (strong, nonatomic) NSString *radioStationName; // @synthesize radioStationName=_radioStationName;
@property (strong, nonatomic) NSString *radioStationString; // @synthesize radioStationString=_radioStationString;
@property (nonatomic) int radioStationType; // @synthesize radioStationType=_radioStationType;
@property (nonatomic) double releaseDate; // @synthesize releaseDate=_releaseDate;
@property (nonatomic) int seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property (strong, nonatomic) NSString *seriesName; // @synthesize seriesName=_seriesName;
@property (strong, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (strong, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) int totalDiscCount; // @synthesize totalDiscCount=_totalDiscCount;
@property (nonatomic) int totalTrackCount; // @synthesize totalTrackCount=_totalTrackCount;
@property (strong, nonatomic) NSString *trackArtistName; // @synthesize trackArtistName=_trackArtistName;
@property (nonatomic) int trackNumber; // @synthesize trackNumber=_trackNumber;
@property (strong, nonatomic) NSData *userInfoData; // @synthesize userInfoData=_userInfoData;

+ (void)initialize;
- (id)_init;
- (id)_initWithData:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

