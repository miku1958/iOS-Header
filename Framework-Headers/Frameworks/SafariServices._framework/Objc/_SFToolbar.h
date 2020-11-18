//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class NSString, UIView, _UIBackdropView;

@interface _SFToolbar : UIToolbar
{
    _UIBackdropView *_backgroundView;
    UIView *_separator;
    BOOL _hasLightButtonTint;
    BOOL _hasDarkBackground;
    long long _placement;
}

@property (readonly, nonatomic) double URLFieldHorizontalMargin;
@property (nonatomic) BOOL backdropComputesColorSettings;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) BOOL hasDarkBackground; // @synthesize hasDarkBackground=_hasDarkBackground;
@property (readonly, nonatomic) long long placement; // @synthesize placement=_placement;
@property (readonly, nonatomic) long long toolbarSize;

+ (double)defaultHeight;
- (void).cxx_destruct;
- (id)initWithPlacement:(long long)arg1;
- (void)layoutSubviews;
- (void)updateBackdropSettings:(id)arg1;
- (void)updateTintColor;

@end
