//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol TIAssistantSettings
- (void)dismissDialogWithCompletionHandler:(void (^)(void))arg1;
- (void)dismissedDataSharingWithResponse:(long long)arg1;
- (void)launchDictationSettings;
- (void)launchKeyboardSettings;
- (void)presentDialogForType:(long long)arg1 withCompletionHandler:(void (^)(long long))arg2;
@end

