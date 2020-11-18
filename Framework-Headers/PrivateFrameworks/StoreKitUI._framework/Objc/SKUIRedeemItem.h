//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIItem.h>

@class NSString;
@protocol SKUIArtworkProviding;

@interface SKUIRedeemItem : SKUIItem
{
    id<SKUIArtworkProviding> _artworks;
}

@property (strong, nonatomic) id<SKUIArtworkProviding> artworks; // @synthesize artworks=_artworks;
@property (nonatomic) long long itemIdentifier; // @dynamic itemIdentifier;
@property (nonatomic) long long itemKind; // @dynamic itemKind;
@property (strong, nonatomic) NSString *title; // @dynamic title;

- (void).cxx_destruct;
- (struct _NSRange)ageBandRange;
- (id)artworkURLForSize:(long long)arg1;
- (id)largestArtworkURL;

@end

