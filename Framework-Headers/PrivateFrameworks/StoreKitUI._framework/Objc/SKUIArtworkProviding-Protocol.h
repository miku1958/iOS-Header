//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSCopying-Protocol.h>
#import <StoreKitUI/NSObject-Protocol.h>
#import <StoreKitUI/SKUICacheCoding-Protocol.h>

@class NSURL, SKUIArtwork;

@protocol SKUIArtworkProviding <NSObject, SKUICacheCoding, NSCopying>

@property (readonly, nonatomic) SKUIArtwork *largestArtwork;
@property (readonly, nonatomic) SKUIArtwork *smallestArtwork;

+ (BOOL)canHandleArtworkFormat:(id)arg1;
- (SKUIArtwork *)artworkForSize:(long long)arg1;
- (NSURL *)artworkURLForSize:(long long)arg1;
- (SKUIArtwork *)artworkWithWidth:(long long)arg1;
- (SKUIArtwork *)bestArtworkForScaledSize:(struct CGSize)arg1;
- (SKUIArtwork *)bestArtworkForSize:(struct CGSize)arg1;
- (BOOL)hasArtwork;
- (SKUIArtwork *)preferredExactArtworkForSize:(struct CGSize)arg1;
@end

