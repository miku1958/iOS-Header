//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSecureMainScreenActiveInterfaceOrientationWindow.h>

@class SBAlertLayoutPresentationVerifier;

@interface SBAlertItemWindow : SBSecureMainScreenActiveInterfaceOrientationWindow
{
    SBAlertLayoutPresentationVerifier *_alertLayoutPresentationVerifier;
}

@property (weak, nonatomic) SBAlertLayoutPresentationVerifier *alertLayoutPresentationVerifier; // @synthesize alertLayoutPresentationVerifier=_alertLayoutPresentationVerifier;

- (void).cxx_destruct;
- (BOOL)_canBecomeKeyWindow;
- (id)initWithDebugName:(id)arg1 alertLayoutPresentationVerifier:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;

@end

