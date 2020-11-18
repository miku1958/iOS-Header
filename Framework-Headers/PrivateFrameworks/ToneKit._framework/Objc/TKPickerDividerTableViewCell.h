//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UIView;

@interface TKPickerDividerTableViewCell : UITableViewCell
{
    UIView *_dividerView;
    long long _contentBackdropOverlayBlendMode;
}

@property (nonatomic, setter=_setContentBackdropOverlayBlendMode:) long long _contentBackdropOverlayBlendMode; // @synthesize _contentBackdropOverlayBlendMode;
@property (strong, nonatomic, setter=_setDividerView:) UIView *_dividerView; // @synthesize _dividerView;
@property (nonatomic) long long contentBackdropOverlayBlendMode;
@property (strong, nonatomic) UIColor *contentBackgroundColor;

- (struct CGRect)_dividerViewFrame;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setSeparatorStyle:(long long)arg1;

@end
