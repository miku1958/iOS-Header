//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class SBUIPasscodeLockNumberPad, UIControl;
@protocol SBUIPasscodeNumberPadButton;

@protocol SBUIPasscodeLockNumberPadDelegate <NSObject>

@optional
- (void)passcodeLockNumberPad:(SBUIPasscodeLockNumberPad *)arg1 keyCancelled:(UIControl<SBUIPasscodeNumberPadButton> *)arg2;
- (void)passcodeLockNumberPad:(SBUIPasscodeLockNumberPad *)arg1 keyDown:(UIControl<SBUIPasscodeNumberPadButton> *)arg2;
- (void)passcodeLockNumberPad:(SBUIPasscodeLockNumberPad *)arg1 keyUp:(UIControl<SBUIPasscodeNumberPadButton> *)arg2;
- (void)passcodeLockNumberPadBackspaceButtonHit:(SBUIPasscodeLockNumberPad *)arg1;
- (void)passcodeLockNumberPadCancelButtonHit:(SBUIPasscodeLockNumberPad *)arg1;
- (void)passcodeLockNumberPadEmergencyCallButtonHit:(SBUIPasscodeLockNumberPad *)arg1;
@end

