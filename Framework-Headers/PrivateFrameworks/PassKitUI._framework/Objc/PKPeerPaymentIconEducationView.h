//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKPaymentSetupInitialCardEducationIconsView, PKWatchDeviceImageOverlayView;

@interface PKPeerPaymentIconEducationView : UIView
{
    PKPaymentSetupInitialCardEducationIconsView *_iconsView;
    PKWatchDeviceImageOverlayView *_watchDeviceImageView;
    BOOL _showWatchView;
    BOOL _showIconsView;
}

@property (nonatomic) BOOL showIconsView; // @synthesize showIconsView=_showIconsView;
@property (nonatomic) BOOL showWatchView; // @synthesize showWatchView=_showWatchView;

- (void).cxx_destruct;
- (id)_imageForWatchView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

