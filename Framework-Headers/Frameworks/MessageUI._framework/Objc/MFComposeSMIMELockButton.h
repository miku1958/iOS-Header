//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface MFComposeSMIMELockButton : UIButton
{
    UIImageView *_lockedImageView;
    UIImageView *_unlockedImageView;
    BOOL _wantsEncryption;
    BOOL _canEncrypt;
    struct UIEdgeInsets touchInsets;
}

@property (nonatomic) BOOL canEncrypt; // @synthesize canEncrypt=_canEncrypt;
@property (nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets;
@property (nonatomic) BOOL wantsEncryption; // @synthesize wantsEncryption=_wantsEncryption;

- (void).cxx_destruct;
- (void)_closeLock;
- (void)_openLock;
- (void)_updateButtonAppearance;
- (void)_updateButtonAppearanceAnimated:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setWantsEncryption:(BOOL)arg1 canEncrypt:(BOOL)arg2 animated:(BOOL)arg3;

@end
