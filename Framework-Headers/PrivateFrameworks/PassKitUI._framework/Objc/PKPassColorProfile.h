//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PKPassColorProfile : NSObject
{
    double _backgroundLightness;
    double _foregroundLightness;
    double _labelLightness;
    PKPassColorProfile *_stripProfile;
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    UIColor *_labelColor;
    UIColor *_highlightColor;
    double _overlayDarkeningAlpha;
    double _regularDarkeningAlpha;
    double _overlayLighteningAlpha;
    double _regularLighteningAlpha;
}

@property (readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (readonly, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property (readonly, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property (readonly, nonatomic) BOOL isLight;
@property (readonly, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property (readonly, nonatomic) double overlayDarkeningAlpha; // @synthesize overlayDarkeningAlpha=_overlayDarkeningAlpha;
@property (readonly, nonatomic) double overlayLighteningAlpha; // @synthesize overlayLighteningAlpha=_overlayLighteningAlpha;
@property (readonly, nonatomic) double regularDarkeningAlpha; // @synthesize regularDarkeningAlpha=_regularDarkeningAlpha;
@property (readonly, nonatomic) double regularLighteningAlpha; // @synthesize regularLighteningAlpha=_regularLighteningAlpha;

+ (id)profileForDisplayProfile:(id)arg1;
- (void).cxx_destruct;
- (void)_calculateColorsWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3;
- (id)_imageForGlyph:(id)arg1 color:(id)arg2;
- (id)_initWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3;
- (void)dealloc;
- (id)foregroundAttributesForFont:(id)arg1;
- (id)foregroundColorOverStrip:(BOOL)arg1;
- (id)foregroundImageForGlyph:(id)arg1;
- (id)labelAttributesForFont:(id)arg1;
- (id)labelColorOverStrip:(BOOL)arg1;
- (id)labelImageForGlyph:(id)arg1;

@end
