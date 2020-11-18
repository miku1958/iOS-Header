//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

#import <MediaPlaybackCore/MPRTCReportingItemSessionCreating-Protocol.h>

@class MPModelGenericObject, MPModelResponse, NSArray, NSString, RadioArtworkCollection, RadioStation, RadioTrack;

@interface MPCRadioAVItem : MPAVItem <MPRTCReportingItemSessionCreating>
{
    NSArray *_buyOffers;
    MPModelResponse *_modelSongPersonalizationResponse;
    MPModelGenericObject *_modelGenericObject;
    RadioTrack *_radioTrack;
    BOOL _isInWishList;
    BOOL _heartbeatInvalid;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
    NSString *_stationStringID;
    id _rtcReportingParentHierarchyToken;
}

@property (readonly, copy, nonatomic) RadioArtworkCollection *_artworkCollection;
@property (readonly, nonatomic) double _expectedDuration;
@property (readonly, nonatomic) BOOL _hasLyrics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHeartbeatInvalid) BOOL heartbeatInvalid; // @synthesize heartbeatInvalid=_heartbeatInvalid;
@property (nonatomic) BOOL isInWishList; // @synthesize isInWishList=_isInWishList;
@property (readonly, nonatomic) long long rtcReportingAssetType;
@property (strong, nonatomic) id rtcReportingParentHierarchyToken; // @synthesize rtcReportingParentHierarchyToken=_rtcReportingParentHierarchyToken;
@property (readonly, copy, nonatomic) NSString *rtcReportingServiceIdentifier;
@property (strong, nonatomic) RadioStation *station; // @synthesize station=_station;
@property (readonly, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property (readonly, nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property (readonly, nonatomic) NSString *stationName; // @synthesize stationName=_stationName;
@property (readonly, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyLoudnessInfoForVolumeNormalization;
- (void)_beginUsingPlaybackLease;
- (void)_contentTasteControllerDidChangeNotification:(id)arg1;
- (void)_handleUpdatedLikedState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_internalIsInWishlistDidChangeNotification:(id)arg1;
- (void)_invalidateModelGenericObject;
- (BOOL)_isSubscriptionEligible;
- (void)_loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_modelSongPersonalizationResponseDidInvalidateNotification:(id)arg1;
- (long long)_persistedLikedState;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)_sendLikeOrBanRequestWithStatus:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDerivedStationForArtist:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)aggregateDictionaryItemType;
- (id)album;
- (long long)albumStoreID;
- (id)artist;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)buyOffers;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)copyrightText;
- (void)dealloc;
- (id)initWithRadioTrack:(id)arg1;
- (BOOL)isCloudItem;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitTrack;
- (BOOL)isLikedStateEnabled;
- (BOOL)isRadioItem;
- (BOOL)isStreamable;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (id)localizedPositionInPlaylistString;
- (id)mainTitle;
- (id)mediaItem;
- (id)modelGenericObject;
- (unsigned long long)mpcReporting_itemType;
- (BOOL)mpcReporting_shouldReportPlayEventsToStore;
- (id)mpcReporting_trackInfo;
- (unsigned long long)persistentID;
- (id)radioTrack;
- (void)reevaluateType;
- (long long)storeItemInt64ID;
- (long long)storeSubscriptionAdamID;
- (BOOL)supportsLikedState;
- (BOOL)supportsSettingCurrentTime;
- (id)title;
- (id)titlesForTime:(double)arg1;
- (id)urlTimeMarkers;
- (BOOL)usesSubscriptionLease;

@end

