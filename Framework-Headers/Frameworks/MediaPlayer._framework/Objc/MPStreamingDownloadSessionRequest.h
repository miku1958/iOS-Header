//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPMediaPlaybackItemMetadata, NSString;

@interface MPStreamingDownloadSessionRequest : NSObject
{
    BOOL _prefersHLS;
    BOOL _shouldStartLeaseSession;
    BOOL _shouldUseAccountLessStreaming;
    BOOL _shouldUseStreamingRedownload;
    MPMediaPlaybackItemMetadata *_playbackItemMetadata;
    unsigned long long _preferredAssetQuality;
    NSString *_buyParameters;
    long long _endpointType;
    long long _storeAdamID;
}

@property (readonly, copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property (readonly, nonatomic) long long endpointType; // @synthesize endpointType=_endpointType;
@property (strong, nonatomic) MPMediaPlaybackItemMetadata *playbackItemMetadata; // @synthesize playbackItemMetadata=_playbackItemMetadata;
@property (nonatomic) unsigned long long preferredAssetQuality; // @synthesize preferredAssetQuality=_preferredAssetQuality;
@property (nonatomic) BOOL prefersHLS; // @synthesize prefersHLS=_prefersHLS;
@property (nonatomic) BOOL shouldStartLeaseSession; // @synthesize shouldStartLeaseSession=_shouldStartLeaseSession;
@property (nonatomic) BOOL shouldUseAccountLessStreaming; // @synthesize shouldUseAccountLessStreaming=_shouldUseAccountLessStreaming;
@property (nonatomic) BOOL shouldUseStreamingRedownload; // @synthesize shouldUseStreamingRedownload=_shouldUseStreamingRedownload;
@property (readonly, nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property (readonly, nonatomic) BOOL usesSubscriptionLease;

- (void).cxx_destruct;

@end

