//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/MPAVControllerNode-Protocol.h>
#import <MediaPlayer/MPControllerProtocol-Protocol.h>

@class MPAVController, MPAVItem, NSString, UIView;

@interface MPViewController : UIViewController <MPControllerProtocol, MPAVControllerNode>
{
    id _delegate;
    long long _interfaceOrientation;
    MPAVItem *_item;
    MPAVController *_player;
    unsigned int _appearing:1;
    unsigned int _observesApplicationSuspendResumeEventsOnly:1;
    unsigned int _showOverlayWhileAppearingDisabled:1;
    BOOL _registeredForPlayerNotifications;
    long long _playerLockedCount;
    BOOL _idleTimerDisabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=idleTimerDisabled, setter=setIdleTimerDisabled:) BOOL idleTimerDisabled; // @synthesize idleTimerDisabled=_idleTimerDisabled;
@property (strong, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property (nonatomic) BOOL observesApplicationSuspendResumeEventsOnly;
@property (nonatomic) long long orientation; // @synthesize orientation=_interfaceOrientation;
@property (strong, nonatomic) MPAVController *player; // @synthesize player=_player;
@property (nonatomic) BOOL registeredForPlayerNotifications; // @synthesize registeredForPlayerNotifications=_registeredForPlayerNotifications;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) UIView *view;

- (void).cxx_destruct;
- (BOOL)_canReloadView;
- (void)addChildViewController:(id)arg1;
- (void)applicationDidResumeEventsOnly;
- (void)applicationDidSuspendEventsOnly;
- (void)applicationResumed;
- (void)beginIgnoringChangeTypes:(unsigned long long)arg1;
- (void)beginTransitionOverlayHidding;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2;
- (void)clearWeakReferencesToObject:(id)arg1;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (void)dealloc;
- (void)didChangeToInterfaceOrientation:(long long)arg1;
- (long long)displayableInterfaceOrientationForInterfaceOrientation:(long long)arg1;
- (void)endIgnoringChangeTypes:(unsigned long long)arg1;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1;
- (id)init;
- (BOOL)isAppearing;
- (void)lockPlayer;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (void)registerForPlayerNotifications;
- (void)removeChildViewController:(id)arg1;
- (void)setAppearing:(BOOL)arg1;
- (void)setOrientation:(long long)arg1 animate:(BOOL)arg2;
- (void)setView:(id)arg1;
- (void)startTicking;
- (void)stopTicking;
- (void)unlockPlayer;
- (void)unregisterForPlayerNotifications;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willChangeToInterfaceOrientation:(long long)arg1;

@end

