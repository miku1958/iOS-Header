//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface SKUIPlayableAsset : NSObject
{
    BOOL _ITunesStream;
    BOOL _shouldUseITunesStoreSecureKeyDelivery;
    NSURL *_contentURL;
    double _initialPlaybackTime;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
    double _playbackDuration;
    long long _storeItemIdentifier;
}

@property (readonly, nonatomic, getter=isITunesStream) BOOL ITunesStream; // @synthesize ITunesStream=_ITunesStream;
@property (copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property (nonatomic) double initialPlaybackTime; // @synthesize initialPlaybackTime=_initialPlaybackTime;
@property (readonly, strong, nonatomic) NSURL *keyCertificateURL; // @synthesize keyCertificateURL=_keyCertificateURL;
@property (readonly, strong, nonatomic) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
@property (nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property (nonatomic) BOOL shouldUseITunesStoreSecureKeyDelivery; // @synthesize shouldUseITunesStoreSecureKeyDelivery=_shouldUseITunesStoreSecureKeyDelivery;
@property (nonatomic) long long storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContentURL:(id)arg1;
- (id)initWithVideo:(id)arg1;
- (id)initWithVideoViewElement:(id)arg1 assetViewElement:(id)arg2;

@end

