//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIModalItemBackgroundView.h>

@class UIImageView, _UIBackdropView;

@interface _UIModalItemAlertBackgroundView : _UIModalItemBackgroundView
{
    _UIBackdropView *_effectView;
    UIImageView *_fillingView;
}

- (id)_gradientImageForBoundsSize:(struct CGSize)arg1 withInnerColor:(id)arg2 outerColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

