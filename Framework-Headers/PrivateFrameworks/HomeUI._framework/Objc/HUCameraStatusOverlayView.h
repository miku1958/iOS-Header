//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HUCircleView, HULegibilityLabel, NSString, UIColor, UIImageView;

@interface HUCameraStatusOverlayView : UIView
{
    BOOL _isDisplayingForSingleCamera;
    BOOL _didUpdateConstraints;
    NSString *_statusString;
    UIColor *_statusColor;
    HULegibilityLabel *_statusLabel;
    HUCircleView *_statusIndicator;
    UIImageView *_alertBadge;
}

@property (strong, nonatomic) UIImageView *alertBadge; // @synthesize alertBadge=_alertBadge;
@property (nonatomic) BOOL didUpdateConstraints; // @synthesize didUpdateConstraints=_didUpdateConstraints;
@property (nonatomic) BOOL isDisplayingForSingleCamera; // @synthesize isDisplayingForSingleCamera=_isDisplayingForSingleCamera;
@property (strong, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor;
@property (strong, nonatomic) HUCircleView *statusIndicator; // @synthesize statusIndicator=_statusIndicator;
@property (strong, nonatomic) HULegibilityLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property (copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;

- (void).cxx_destruct;
- (id)_chevronImage;
- (id)_exclamationImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBadgeStatus:(unsigned long long)arg1;
- (void)updateStatusForPlaybackEngine:(id)arg1;
- (void)updateStatusLabelBounds;

@end
