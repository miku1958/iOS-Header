//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBMainDisplayWorkspaceAppInteractionEventSourceObserving-Protocol.h>

@class NSDate, NSString, SBAlertItemsController, SBMainDisplayWorkspaceAppInteractionEventSource;

@interface SBDeveloperBuildExpirationTrigger : NSObject <SBMainDisplayWorkspaceAppInteractionEventSourceObserving>
{
    SBAlertItemsController *_alertItemsController;
    SBMainDisplayWorkspaceAppInteractionEventSource *_eventSource;
    NSDate *_expirationDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_coverSheetDidDismiss:(id)arg1;
- (id)_initWithAlertItemsController:(id)arg1 eventSource:(id)arg2 expirationDate:(id)arg3;
- (void)dealloc;
- (void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (id)initWithAlertItemsController:(id)arg1 eventSource:(id)arg2;
- (void)showDeveloperBuildExpirationAlertIfNecessaryFromLockscreen:(BOOL)arg1 toLauncher:(BOOL)arg2;

@end

