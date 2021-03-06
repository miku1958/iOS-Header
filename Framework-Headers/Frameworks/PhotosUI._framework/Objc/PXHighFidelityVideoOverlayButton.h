//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXVideoOverlayButton-Protocol.h>

@class UIButton, UIImageView, _UIBackdropView;

@interface PXHighFidelityVideoOverlayButton : UIView <PXVideoOverlayButton>
{
    long long _style;
    UIButton *_button;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
    id _target;
    SEL _action;
    BOOL _showAsPause;
    BOOL __didConfigureForPause;
}

@property (nonatomic, setter=_setDidConfigureForPause:) BOOL _didConfigureForPause; // @synthesize _didConfigureForPause=__didConfigureForPause;
@property (nonatomic) BOOL showAsPause; // @synthesize showAsPause=_showAsPause;

- (void).cxx_destruct;
- (void)_playButtonActivate:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (void)_playButtonTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1 allowBackdropStatisticsSupression:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;

@end

