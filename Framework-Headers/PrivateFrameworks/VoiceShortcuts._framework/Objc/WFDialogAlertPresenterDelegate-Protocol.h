//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/NSObject-Protocol.h>

@class NSXPCListenerEndpoint;
@protocol WFDialogAlertPresenter;

@protocol WFDialogAlertPresenterDelegate <NSObject>
- (void)dialogAlertPresenterDidDeactivateAlert:(id<WFDialogAlertPresenter>)arg1;
- (void)dialogAlertPresenterDidInvalidateAlert:(id<WFDialogAlertPresenter>)arg1;
- (NSXPCListenerEndpoint *)xpcListenerEndpointForDialogAlertPresenter:(id<WFDialogAlertPresenter>)arg1;
@end
