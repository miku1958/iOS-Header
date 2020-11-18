//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UITabBar;

__attribute__((visibility("hidden")))
@interface UITabBarSwappableImageView : UIImageView
{
    id _value;
    id _alternate;
    double _scale;
    BOOL _showAlternate;
    BOOL _flipped;
    int _currentAnimation;
    UITabBar *_tabBar;
    int _buttonTag;
}

- (void)animateImage:(float)arg1 withTabBar:(id)arg2 withTag:(int)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2;
- (void)setAlternateImage:(id)arg1;
- (void)setCurrentImage;
- (void)setImage:(id)arg1;
- (void)showAlternateImage:(BOOL)arg1;

@end

