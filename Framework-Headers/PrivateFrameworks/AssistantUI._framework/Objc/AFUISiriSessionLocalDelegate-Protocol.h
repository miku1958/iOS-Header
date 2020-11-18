//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFDialogPhase, AFUISiriSession, SAUIDelayedActionCancelCommand, SAUIDelayedActionCommand;

@protocol AFUISiriSessionLocalDelegate <NSObject>
- (void)siriSession:(AFUISiriSession *)arg1 didChangeDialogPhase:(AFDialogPhase *)arg2;
- (void)siriSession:(AFUISiriSession *)arg1 didChangeToState:(long long)arg2;
- (void)siriSession:(AFUISiriSession *)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(BOOL)arg2 withCompletion:(void (^)(long long))arg3;
- (void)siriSession:(AFUISiriSession *)arg1 didReceiveDeviceUnlockRequestWithCompletion:(void (^)(long long))arg2;
- (BOOL)siriSessionCanEnd:(AFUISiriSession *)arg1;
- (void)siriSessionDidEnd:(AFUISiriSession *)arg1;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(SAUIDelayedActionCancelCommand *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveDelayedActionCommand:(SAUIDelayedActionCommand *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidResetContext:(AFUISiriSession *)arg1;
- (void)siriSessionRecordingPreparationHasFinished:(AFUISiriSession *)arg1;
- (void)siriSessionWillEnd:(AFUISiriSession *)arg1;
@end

