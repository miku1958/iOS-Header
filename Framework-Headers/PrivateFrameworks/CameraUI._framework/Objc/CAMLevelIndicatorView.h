//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/CAMLevelViewModelChangeObserver-Protocol.h>

@class CAMLevelCrosshair, CAMLevelViewModel, NSString;

@interface CAMLevelIndicatorView : UIView <CAMLevelViewModelChangeObserver>
{
    CAMLevelViewModel *_viewModel;
    CAMLevelCrosshair *__goalCrosshair;
    CAMLevelCrosshair *__userCrosshair;
}

@property (readonly, nonatomic) CAMLevelCrosshair *_goalCrosshair; // @synthesize _goalCrosshair=__goalCrosshair;
@property (readonly, nonatomic) CAMLevelCrosshair *_userCrosshair; // @synthesize _userCrosshair=__userCrosshair;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAMLevelViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (void)_commonCAMLevelIndicatorViewInitializationWithViewModel:(id)arg1;
- (void)_updateCrosshairAlphasWithAlpha:(double)arg1 indicatorMode:(long long)arg2;
- (void)_updateCrosshairHighlightWithOffset:(struct UIOffset)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void *)arg3;

@end
