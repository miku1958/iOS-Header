//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICRadioContentReference, ICRadioPlaybackHistory, ICStoreRequestContext, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface ICRadioGetTracksRequest : NSObject <NSCopying>
{
    BOOL _allowsExplicitContent;
    BOOL _preservingCurrentlyPlayingItem;
    BOOL _shouldResponseContainStationMetadata;
    NSDictionary *_additionalRequestParameters;
    NSArray *_playActivityEvents;
    ICRadioPlaybackHistory *_playbackContext;
    NSNumber *_privateListeningEnabled;
    NSNumber *_delegatedPrivateListeningEnabled;
    long long _reasonType;
    ICStoreRequestContext *_requestContext;
    long long _requestedTrackCount;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationStringID;
    NSURL *_stationURL;
    ICRadioContentReference *_seedContentReference;
    ICRadioContentReference *_nowPlayingContentReference;
    NSArray *_queueContentReferences;
}

@property (copy, nonatomic) NSDictionary *additionalRequestParameters; // @synthesize additionalRequestParameters=_additionalRequestParameters;
@property (nonatomic) BOOL allowsExplicitContent; // @synthesize allowsExplicitContent=_allowsExplicitContent;
@property (copy, nonatomic, getter=isDelegatedPrivateListeningEnabled) NSNumber *delegatedPrivateListeningEnabled; // @synthesize delegatedPrivateListeningEnabled=_delegatedPrivateListeningEnabled;
@property (copy, nonatomic) ICRadioContentReference *nowPlayingContentReference; // @synthesize nowPlayingContentReference=_nowPlayingContentReference;
@property (copy, nonatomic) NSArray *playActivityEvents; // @synthesize playActivityEvents=_playActivityEvents;
@property (copy, nonatomic) ICRadioPlaybackHistory *playbackContext; // @synthesize playbackContext=_playbackContext;
@property (nonatomic, getter=isPreservingCurrentlyPlayingItem) BOOL preservingCurrentlyPlayingItem; // @synthesize preservingCurrentlyPlayingItem=_preservingCurrentlyPlayingItem;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // @synthesize privateListeningEnabled=_privateListeningEnabled;
@property (copy, nonatomic) NSArray *queueContentReferences; // @synthesize queueContentReferences=_queueContentReferences;
@property (nonatomic) long long reasonType; // @synthesize reasonType=_reasonType;
@property (copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property (nonatomic) long long requestedTrackCount; // @synthesize requestedTrackCount=_requestedTrackCount;
@property (copy, nonatomic) ICRadioContentReference *seedContentReference; // @synthesize seedContentReference=_seedContentReference;
@property (nonatomic) BOOL shouldResponseContainStationMetadata; // @synthesize shouldResponseContainStationMetadata=_shouldResponseContainStationMetadata;
@property (copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property (nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property (copy, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
@property (copy, nonatomic) NSURL *stationURL; // @synthesize stationURL=_stationURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;

@end

