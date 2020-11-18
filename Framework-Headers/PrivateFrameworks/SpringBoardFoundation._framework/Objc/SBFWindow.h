//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class NSNumber, _SBFKeyWindowStack;

@interface SBFWindow : UIWindow
{
    _SBFKeyWindowStack *_keyWindowStack;
    NSNumber *_isHiddenOverride;
}

@property (strong, nonatomic, setter=_setKeyWindowStack:) _SBFKeyWindowStack *_keyWindowStack; // @synthesize _keyWindowStack;

- (void).cxx_destruct;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_isEffectivelyHiddenForKeyWindowStack;
- (void)_makeKeyFromKeyWindowStack;
- (void)_resignKeyFromKeyWindowStack;
- (void)dealloc;
- (void)makeKeyWindow;
- (void)resignAsKeyWindow;
- (void)setHidden:(BOOL)arg1;

@end
