//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKEffectPickerView.h>

@interface CKEffectPickerLargeTextView : CKEffectPickerView
{
    BOOL _finishedInitializing;
}

@property (nonatomic) BOOL finishedInitializing; // @synthesize finishedInitializing=_finishedInitializing;

- (void)_touchUpInsideDotButton:(id)arg1;
- (struct CGRect)_updateBalloonViewOrigin:(struct CGRect)arg1 forButtonFrame:(struct CGRect)arg2;
- (void)_updateRoundedContainerView;
- (void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect)arg1;
- (void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3;
- (void)cancelImpactSelection;
- (void)effectTypeDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 sendButtonFrame:(struct CGRect)arg2 balloonViewOrigin:(struct CGPoint)arg3 composition:(id)arg4 color:(BOOL)arg5;
- (double)marginBetweenPickerDotButtons;
- (double)offsetYForLabelAtIndex:(long long)arg1 withInitialY:(double)arg2;
- (void)setCloseButtonYPosition:(double)arg1;
- (BOOL)shouldAnimatePreviousLabelForCancel:(id)arg1;

@end

