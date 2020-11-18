//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class BPSRemoteImageView, NSString, UIImageView;

@interface BPSWatchView : UIView
{
    NSString *_screenImageSearchBundleIdentifier;
    NSString *_screenImageName;
    unsigned long long _style;
    unsigned long long _sizeOverride;
    BPSRemoteImageView *_watchImageView;
    NSString *_styleVersionSuffix;
    UIImageView *_watchScreenImageView;
}

@property (copy, nonatomic) NSString *screenImageName; // @synthesize screenImageName=_screenImageName;
@property (strong, nonatomic) NSString *screenImageSearchBundleIdentifier; // @synthesize screenImageSearchBundleIdentifier=_screenImageSearchBundleIdentifier;
@property (nonatomic) unsigned long long sizeOverride; // @synthesize sizeOverride=_sizeOverride;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (copy, nonatomic) NSString *styleVersionSuffix; // @synthesize styleVersionSuffix=_styleVersionSuffix;
@property (strong, nonatomic) BPSRemoteImageView *watchImageView; // @synthesize watchImageView=_watchImageView;
@property (readonly, nonatomic) UIImageView *watchScreenImageView; // @synthesize watchScreenImageView=_watchScreenImageView;

- (void).cxx_destruct;
- (void)applyScreenStyle;
- (unsigned long long)deviceSize;
- (id)image;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1 allowsMaterialFallback:(BOOL)arg2;
- (id)initWithStyle:(unsigned long long)arg1 andVersionModifier:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1 versionModifier:(id)arg2 allowsMaterialFallback:(BOOL)arg3;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)overrideMaterial:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (struct CGSize)screenImageSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)watchAssetBundle;

@end

