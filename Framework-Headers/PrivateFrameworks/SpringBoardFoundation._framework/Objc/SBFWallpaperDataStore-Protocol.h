//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, SBFWallpaperOptions, SBWallpaperImage, UIColor, UIImage;

@protocol SBFWallpaperDataStore <NSObject>
- (BOOL)hasWallpaperImageForVariant:(long long)arg1;
- (void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (NSDictionary *)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (void)removeVideoForVariant:(long long)arg1;
- (void)removeWallpaperColorForVariants:(long long)arg1;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (BOOL)setOriginalVideoURL:(NSURL *)arg1 forVariant:(long long)arg2;
- (BOOL)setProceduralWallpaperInfo:(NSDictionary *)arg1 forVariants:(long long)arg2;
- (BOOL)setVideoURL:(NSURL *)arg1 forVariant:(long long)arg2;
- (BOOL)setWallpaperColor:(UIColor *)arg1 forVariants:(long long)arg2;
- (BOOL)setWallpaperColorName:(NSString *)arg1 forVariants:(long long)arg2;
- (BOOL)setWallpaperImage:(UIImage *)arg1 forVariant:(long long)arg2;
- (BOOL)setWallpaperOptions:(SBFWallpaperOptions *)arg1 forVariants:(long long)arg2;
- (BOOL)setWallpaperOriginalImage:(UIImage *)arg1 forVariant:(long long)arg2;
- (BOOL)setWallpaperThumbnailData:(NSData *)arg1 forVariant:(long long)arg2;
- (NSURL *)unverifiedVideoURLForVariant:(long long)arg1;
- (NSURL *)verifiedOriginalVideoURLForVariant:(long long)arg1;
- (NSURL *)verifiedVideoURLForVariant:(long long)arg1;
- (UIColor *)wallpaperColorForVariant:(long long)arg1;
- (NSString *)wallpaperColorNameForVariant:(long long)arg1;
- (SBWallpaperImage *)wallpaperImageForVariant:(long long)arg1;
- (SBFWallpaperOptions *)wallpaperOptionsForVariant:(long long)arg1;
- (UIImage *)wallpaperOriginalImageForVariant:(long long)arg1;
- (NSData *)wallpaperThumbnailDataForVariant:(long long)arg1;
@end
