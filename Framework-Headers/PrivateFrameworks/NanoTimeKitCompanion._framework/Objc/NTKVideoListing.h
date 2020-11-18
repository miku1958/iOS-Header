//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NTKAVListing-Protocol.h>

@class CLKVideo, NSString, UIColor, UIImage;

@interface NTKVideoListing : NSObject <NSCopying, NTKAVListing>
{
    CLKVideo *_video;
    UIImage *_image;
    NSString *_name;
    NSString *_videoName;
    NSString *_transitionImageName;
    UIColor *_overlayColor;
    unsigned long long _theme;
    long long _variant;
    long long _clip;
    unsigned long long _tags;
}

@property (readonly, nonatomic) long long clip; // @synthesize clip=_clip;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long theme; // @synthesize theme=_theme;
@property (readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property (readonly, nonatomic) CLKVideo *video;

- (void).cxx_destruct;
- (void)_setHasAssets;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)discardAssets;
- (BOOL)hasTag:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 videoName:(id)arg2 transitionImageName:(id)arg3 overlayColor:(id)arg4 theme:(unsigned long long)arg5 variant:(long long)arg6 clip:(long long)arg7 tags:(unsigned long long)arg8;
- (BOOL)snapshotDiffers:(id)arg1;

@end

