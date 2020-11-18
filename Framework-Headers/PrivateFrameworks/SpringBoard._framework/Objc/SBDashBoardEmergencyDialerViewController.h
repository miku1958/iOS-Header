//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBHomeGestureDismissableCoverSheetViewController.h>

#import <SpringBoard/SBLockScreenEmergencyDialerDelegate-Protocol.h>

@class NSString, SBLockScreenEmergencyDialerController, TUCallCenter;

@interface SBDashBoardEmergencyDialerViewController : SBHomeGestureDismissableCoverSheetViewController <SBLockScreenEmergencyDialerDelegate>
{
    TUCallCenter *_callCenter;
    SBLockScreenEmergencyDialerController *_controller;
    BOOL _inEmergencyCall;
    BOOL _inEmergencyCallMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateEmergencyDialerController;
- (void)_deactivateEmergencyDialerController;
- (void)_updateEmergencyCallMode:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)dealloc;
- (void)emergencyDialer:(id)arg1 willDeactivateWithError:(id)arg2;
- (BOOL)handleEvent:(id)arg1;
- (long long)presentationPriority;
- (long long)presentationType;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
