//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutsUI/NSObject-Protocol.h>

@class VCUIEditVoiceShortcutViewController, VCVoiceShortcut;

@protocol VCUIEditVoiceShortcutViewControllerDelegate <NSObject>

@optional
- (void)editVoiceShortcutViewController:(VCUIEditVoiceShortcutViewController *)arg1 didDeleteVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)editVoiceShortcutViewController:(VCUIEditVoiceShortcutViewController *)arg1 didSaveWithUpdatedVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)editVoiceShortcutViewControllerDidCancel:(VCUIEditVoiceShortcutViewController *)arg1;
- (void)editVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(VCUIEditVoiceShortcutViewController *)arg1;
@end

