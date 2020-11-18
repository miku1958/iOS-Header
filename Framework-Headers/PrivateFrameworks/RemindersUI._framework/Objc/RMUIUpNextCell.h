//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class RMUIUpNextLabel, RMUIUpNextRowSeparator, UIImageView, UIVisualEffectView;

@interface RMUIUpNextCell : UIView
{
    UIVisualEffectView *_primaryVibrantView;
    UIVisualEffectView *_secondaryVibrantView;
    UIVisualEffectView *_tertiaryVibrantView;
    RMUIUpNextLabel *_timeLabel;
    RMUIUpNextLabel *_titleLabel;
    RMUIUpNextLabel *_locationLabel;
    UIImageView *_circleImageView;
    RMUIUpNextRowSeparator *_rowSeparator;
    UIView *_contentView;
}

@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;

- (void).cxx_destruct;
- (id)initWithReminder:(id)arg1 showRowSeparator:(BOOL)arg2;
- (double)leftMarginForTimeViewWidth:(double)arg1;
- (id)priorityImageForLevel:(long long)arg1 withColor:(id)arg2;
- (double)rightMarginForTimeViewWidth:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupConstraints;
- (double)timeViewWidth;
- (id)titleStringForReminder:(id)arg1;
- (void)updateMaxLayoutWidth;

@end
