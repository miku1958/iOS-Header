//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsUI/NSObject-Protocol.h>

@class VCUICreateVoiceShortcutViewController, VCVoiceShortcut;

@protocol VCUICreateVoiceShortcutViewControllerDelegate <NSObject>
- (void)createVoiceShortcutViewController:(VCUICreateVoiceShortcutViewController *)arg1 didCreateVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(VCUICreateVoiceShortcutViewController *)arg1;

@optional
- (void)createVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(VCUICreateVoiceShortcutViewController *)arg1;
@end

