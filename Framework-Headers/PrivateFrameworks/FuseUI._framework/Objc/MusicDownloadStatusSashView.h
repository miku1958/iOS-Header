//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface MusicDownloadStatusSashView : UIView
{
    UIImageView *_sashImageView;
    UIImageView *_deviceImageView;
    long long _deviceType;
}

@property (strong, nonatomic) UIColor *deviceTintColor;

+ (id)sashViewForDeviceType:(long long)arg1;
+ (id)sashViewForRunningDeviceType;
- (void).cxx_destruct;
- (void)_updateForTraitCollection:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)sashTintColor;
- (void)setSashTintColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
