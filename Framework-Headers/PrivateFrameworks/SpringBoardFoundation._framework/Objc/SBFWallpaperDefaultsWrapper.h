//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface SBFWallpaperDefaultsWrapper : NSObject
{
    BOOL _supportsCropping;
    BOOL _magnifyEnabled;
    BOOL _portrait;
    BOOL _hasVideo;
    BOOL _wallpaperWasUserSet;
    double _parallaxFactor;
    double _zoomScale;
    NSString *_wallpaperName;
    NSData *_imageHashData;
    long long _wallpaperMode;
    double _stillTimeInVideo;
    NSString *_wallpaperIdentifier;
    NSDictionary *_wallpaperOptions;
    NSData *_colorData;
    NSString *_colorName;
    NSData *_gradientData;
    struct CGRect _cropRect;
}

@property (strong, nonatomic) NSData *colorData; // @synthesize colorData=_colorData;
@property (strong, nonatomic) NSString *colorName; // @synthesize colorName=_colorName;
@property (nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property (strong, nonatomic) NSData *gradientData; // @synthesize gradientData=_gradientData;
@property (nonatomic) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property (strong, nonatomic) NSData *imageHashData; // @synthesize imageHashData=_imageHashData;
@property (nonatomic) BOOL magnifyEnabled; // @synthesize magnifyEnabled=_magnifyEnabled;
@property (nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property (nonatomic) BOOL portrait; // @synthesize portrait=_portrait;
@property (nonatomic) double stillTimeInVideo; // @synthesize stillTimeInVideo=_stillTimeInVideo;
@property (nonatomic) BOOL supportsCropping; // @synthesize supportsCropping=_supportsCropping;
@property (strong, nonatomic) NSString *wallpaperIdentifier; // @synthesize wallpaperIdentifier=_wallpaperIdentifier;
@property (nonatomic) long long wallpaperMode; // @synthesize wallpaperMode=_wallpaperMode;
@property (strong, nonatomic) NSString *wallpaperName; // @synthesize wallpaperName=_wallpaperName;
@property (strong, nonatomic) NSDictionary *wallpaperOptions; // @synthesize wallpaperOptions=_wallpaperOptions;
@property (nonatomic) BOOL wallpaperWasUserSet; // @synthesize wallpaperWasUserSet=_wallpaperWasUserSet;
@property (nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;

+ (id)homeScreenWrapperForLegacyDefaults:(id)arg1;
+ (id)lockScreenWrapperForLegacyDefaults:(id)arg1;
- (void).cxx_destruct;
- (id)initWithWallpaperDefaultsDict:(id)arg1;
- (id)wallpaperDefaultsDict;

@end
