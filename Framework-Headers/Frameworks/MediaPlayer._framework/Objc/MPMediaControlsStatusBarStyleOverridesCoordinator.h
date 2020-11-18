//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/SBSStatusBarStyleOverridesCoordinatorDelegate-Protocol.h>

@class MPMediaControls, NSString, SBSStatusBarStyleOverridesAssertion, SBSStatusBarStyleOverridesCoordinator;

@interface MPMediaControlsStatusBarStyleOverridesCoordinator : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate>
{
    SBSStatusBarStyleOverridesAssertion *_statusBarStyleOverride;
    SBSStatusBarStyleOverridesCoordinator *_coordinator;
    MPMediaControls *_mediaControls;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)presentMediaControls;
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;
- (BOOL)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
