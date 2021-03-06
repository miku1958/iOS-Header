//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SKUIAssetViewElement : SKUIViewElement
{
    double _initialPlaybackTime;
    long long _itemIdentifier;
    NSString *_secureKeyDeliveryType;
    double _playbackDuration;
    NSURL *_url;
    BOOL _ITunesStream;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
}

@property (readonly, nonatomic, getter=isITunesStream) BOOL ITunesStream; // @synthesize ITunesStream=_ITunesStream;
@property (readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property (nonatomic) double initialPlaybackTime; // @synthesize initialPlaybackTime=_initialPlaybackTime;
@property (readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (readonly, strong, nonatomic) NSURL *keyCertificateURL; // @synthesize keyCertificateURL=_keyCertificateURL;
@property (readonly, strong, nonatomic) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
@property (readonly, nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property (readonly, copy, nonatomic) NSString *secureKeyDeliveryType; // @synthesize secureKeyDeliveryType=_secureKeyDeliveryType;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

