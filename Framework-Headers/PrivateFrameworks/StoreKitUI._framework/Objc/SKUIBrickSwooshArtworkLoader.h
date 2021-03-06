//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUISwooshArtworkLoader.h>

@class SKUIBrickSwooshViewController;

@interface SKUIBrickSwooshArtworkLoader : SKUISwooshArtworkLoader
{
    long long _artworkSize;
}

@property (readonly, nonatomic) SKUIBrickSwooshViewController *swooshViewController; // @dynamic swooshViewController;

- (id)cachedImageForBrick:(id)arg1;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;
- (BOOL)loadImageForBrick:(id)arg1 reason:(long long)arg2;
- (void)loadImagesForNextPageWithReason:(long long)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;

@end

