//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASCAppOfferStateCenter, ASCArtworkFetcher, ASCLockupFetcher;

__attribute__((visibility("hidden")))
@interface ASCPresenterContext : NSObject
{
    ASCArtworkFetcher *_artworkFetcher;
    ASCLockupFetcher *_lockupFetcher;
    ASCAppOfferStateCenter *_appOfferStateCenter;
}

@property (readonly, nonatomic) ASCAppOfferStateCenter *appOfferStateCenter; // @synthesize appOfferStateCenter=_appOfferStateCenter;
@property (readonly, nonatomic) ASCArtworkFetcher *artworkFetcher; // @synthesize artworkFetcher=_artworkFetcher;
@property (readonly, nonatomic) ASCLockupFetcher *lockupFetcher; // @synthesize lockupFetcher=_lockupFetcher;

+ (id)sharedContext;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithArtworkFetcher:(id)arg1 lockupFetcher:(id)arg2 appOfferStateCenter:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end
