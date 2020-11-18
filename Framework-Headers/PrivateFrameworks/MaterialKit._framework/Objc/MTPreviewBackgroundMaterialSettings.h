//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MaterialKit/MTMaterialOverlaySettings-Protocol.h>
#import <MaterialKit/MTMaterialSettings-Protocol.h>
#import <MaterialKit/MTZooming-Protocol.h>

@class MTVibrantStylingProvider, NSString, UIColor;

@interface MTPreviewBackgroundMaterialSettings : NSObject <MTMaterialSettings, MTMaterialOverlaySettings, MTZooming>
{
}

@property (readonly, copy, nonatomic) UIColor *baseOverlayColor;
@property (nonatomic) double baseOverlayTintAlpha;
@property (nonatomic) double blurRadius;
@property (nonatomic) double brightness;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double luminanceAlpha;
@property (nonatomic) double primaryOverlayTintAlpha;
@property (readonly, copy, nonatomic) UIColor *primaryOverlayTintColor;
@property (nonatomic) double saturation;
@property (nonatomic) double secondaryOverlayTintAlpha;
@property (readonly, copy, nonatomic) UIColor *secondaryOverlayTintColor;
@property (readonly) Class superclass;
@property (nonatomic) double tintAlpha;
@property (nonatomic) BOOL usesLuminanceMap;
@property (readonly, weak, nonatomic) MTVibrantStylingProvider *vibrantStylingProvider;
@property (readonly, nonatomic) double zoom;

+ (id)sharedMaterialSettings;
- (void)updateWithSettingsFromArchive:(id)arg1;

@end

