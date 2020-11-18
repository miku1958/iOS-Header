//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>

@class NSDictionary, NSString, NSURL, SBFWallpaperConfigurationManager, SBFWallpaperOptions, SBWallpaperImage, UIImage;
@protocol SBFProceduralWallpaper;

@interface SBFWallpaperConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    id<SBFProceduralWallpaper> _proceduralWallpaper;
    long long _wallpaperType;
    SBWallpaperImage *_wallpaperImage;
    SBFWallpaperOptions *_wallpaperOptions;
    NSDictionary *_proceduralWallpaperInfo;
    NSURL *_videoURL;
    SBFWallpaperConfigurationManager *_wallpaperConfigurationManager;
    long long _variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SBFProceduralWallpaper> proceduralWallpaper;
@property (readonly, copy, nonatomic) NSString *proceduralWallpaperIdentifier;
@property (copy, nonatomic) NSDictionary *proceduralWallpaperInfo; // @synthesize proceduralWallpaperInfo=_proceduralWallpaperInfo;
@property (readonly, copy, nonatomic) NSDictionary *proceduralWallpaperOptions;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property (copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property (readonly, nonatomic) SBFWallpaperConfigurationManager *wallpaperConfigurationManager; // @synthesize wallpaperConfigurationManager=_wallpaperConfigurationManager;
@property (strong, nonatomic) SBWallpaperImage *wallpaperImage; // @synthesize wallpaperImage=_wallpaperImage;
@property (copy, nonatomic) SBFWallpaperOptions *wallpaperOptions; // @synthesize wallpaperOptions=_wallpaperOptions;
@property (readonly, nonatomic) UIImage *wallpaperOriginalImage;
@property (readonly, nonatomic) UIImage *wallpaperThumbnailImage;
@property (readonly, nonatomic) long long wallpaperType; // @synthesize wallpaperType=_wallpaperType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithWallpaperConfigurationManager:(id)arg1 variant:(long long)arg2 type:(long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)wallpaperThumbnailImageData;

@end

