//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, SASRequestOptions;

@protocol SRSiriViewControllerHosting <NSObject>
- (void)getScreenshotWithReplyHandler:(void (^)(NSData *))arg1;
- (void)handlePasscodeUnlockWithCompletion:(void (^)(long long))arg1;
- (void)pulseHelpButton;
- (void)serviceBulletinWithIdentifier:(NSString *)arg1 replyHandler:(void (^)(AFBulletin *))arg2;
- (void)serviceDidDetectAudioRoutePickerTap;
- (void)serviceDidDetectMicButtonLongPressBegan;
- (void)serviceDidDetectMicButtonLongPressEnded;
- (void)serviceDidDetectMicButtonTap;
- (void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidEndTaptoEdit;
- (void)serviceDidEnterUITrackingMode;
- (void)serviceDidExitUITrackingMode;
- (void)serviceDidFinishTest:(NSString *)arg1;
- (void)serviceDidPresentConversationFromBreadcrumb;
- (void)serviceDidPresentUserInterface;
- (void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidReadBulletinWithIdentifier:(NSString *)arg1;
- (void)serviceDidRequestCurrentTextInput:(void (^)(NSString *))arg1;
- (void)serviceDidRequestKeyboard:(BOOL)arg1;
- (void)serviceDidRequestKeyboard:(BOOL)arg1 minimized:(BOOL)arg2;
- (void)serviceDidResetTextInput;
- (void)serviceFailTest:(NSString *)arg1 withReason:(NSString *)arg2;
- (void)serviceLaunchApplicationWithBundleIdentifier:(NSString *)arg1 withURL:(NSURL *)arg2 launchOptions:(long long)arg3 replyHandler:(void (^)(BOOL))arg4;
- (void)serviceOpenURL:(NSURL *)arg1 appBundleID:(NSString *)arg2 allowSiriDismissal:(BOOL)arg3;
- (void)serviceOpenURL:(NSURL *)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(void (^)(BOOL))arg3;
- (void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;
- (void)serviceRequestsActivationSourceWithReplyHandler:(void (^)(long long))arg1;
- (void)serviceRequestsDismissalWithDelayForTTS:(BOOL)arg1 userInfo:(NSDictionary *)arg2;
- (void)serviceStartGuidedAccess;
- (void)serviceStartRequestWithOptions:(SASRequestOptions *)arg1;
- (void)serviceUserRelevantEventDidOccur;
- (void)serviceViewControllerRequestKeyboardForTapToEditWithCompletion:(void (^)(BOOL))arg1;
- (void)serviceViewControllerRequestsDismissal:(void (^)(BOOL))arg1;
- (void)serviceViewControllerRequestsPresentation:(void (^)(BOOL))arg1;
- (void)serviceWillBeginTapToEdit;
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillStartTest:(NSString *)arg1;
- (void)setBugReportingAvailable:(BOOL)arg1;
- (void)setCarDisplaySnippetMode:(long long)arg1;
- (void)setHelpButtonEmphasized:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(void (^)(BOOL))arg3;
- (void)setStatusViewDisabled:(BOOL)arg1;
- (void)setStatusViewHidden:(BOOL)arg1;
- (void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
- (void)siriIdleAndQuietStatusDidChange:(BOOL)arg1;

@optional
- (void)extendCurrentTTSRequested;
- (void)serviceDidDismissBugReporter;
- (void)serviceDidPresentBugReporter;
- (void)servicePresentedIntentWithBundleId:(NSString *)arg1;
- (void)setTypeToSiriViewHidden:(BOOL)arg1;
@end
