//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectImageView.h>

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundShadowContentImageView : _UIVisualEffectImageView
{
    BOOL _applyTintColorToBackgroundColor;
}

@property (nonatomic) BOOL applyTintColorToBackgroundColor; // @synthesize applyTintColorToBackgroundColor=_applyTintColorToBackgroundColor;

- (void)_applyTintColorToBackgroundIfNecessary;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;

@end

