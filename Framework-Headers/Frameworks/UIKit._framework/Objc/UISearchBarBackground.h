//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBarBackgroundImageView.h>

#import <UIKitCore/_UIBarPositioningInternal-Protocol.h>

@class NSMutableDictionary, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal>
{
    UIColor *_barTintColor;
    NSMutableDictionary *_customBackgroundImages;
    long long _barPosition;
    unsigned long long _searchBarStyle;
    long long _barStyle;
    long long _barTranslucence;
    BOOL _usesEmbeddedAppearance;
    BOOL _usesContiguousBarBackground;
}

@property (readonly, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) UIImage *backgroundImagePrompt;
@property (nonatomic) long long barStyle;
@property (strong, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long searchBarStyle;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (nonatomic) BOOL usesContiguousBarBackground;
@property (nonatomic) BOOL usesEmbeddedAppearance;

- (void).cxx_destruct;
- (id)_backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (long long)_barPosition;
- (id)_createBackgroundImageForBarStyle:(long long)arg1 alpha:(double)arg2;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)_hasCustomBackgroundImage;
- (void)_setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)_setBarPosition:(long long)arg1;
- (void)_updateBackgroundImage;
- (void)_updateBackgroundImageIfPossible;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

