//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface PKWatchDeviceImageOverlayView : UIView
{
    UIImageView *_watchImageView;
    UIImageView *_overlayImageView;
    UIImage *_overlayImage;
}

@property (strong, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;

- (void).cxx_destruct;
- (double)_watchScreenCenterXOffset;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

