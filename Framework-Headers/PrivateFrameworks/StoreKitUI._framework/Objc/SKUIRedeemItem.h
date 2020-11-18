//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIItem.h>

#import <StoreKitUI/NSSecureCoding-Protocol.h>

@class NSString;
@protocol SKUIArtworkProviding;

@interface SKUIRedeemItem : SKUIItem <NSSecureCoding>
{
    id<SKUIArtworkProviding> _artworks;
}

@property (strong, nonatomic) id<SKUIArtworkProviding> artworks; // @synthesize artworks=_artworks;
@property (nonatomic) long long itemIdentifier; // @dynamic itemIdentifier;
@property (nonatomic) long long itemKind; // @dynamic itemKind;
@property (strong, nonatomic) NSString *title; // @dynamic title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (struct _NSRange)ageBandRange;
- (id)artworkURLForSize:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)largestArtworkURL;

@end

