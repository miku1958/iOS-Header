//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotificationsUI/NCInteractiveNotificationServiceInterface-Protocol.h>

@class NSDictionary;

@interface NCInteractiveNotificationViewController : UIViewController <NCInteractiveNotificationServiceInterface>
{
    BOOL _modal;
    NSDictionary *_context;
    double _maximumHeight;
}

@property (copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property (nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property (nonatomic, getter=isModal) BOOL modal; // @synthesize modal=_modal;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void).cxx_destruct;
- (void)_didChangeRevealPercent:(double)arg1;
- (void)_getActionContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getActionTitlesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getInitialStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleActionAtIndex:(unsigned long long)arg1;
- (void)_handleActionIdentifier:(id)arg1;
- (void)_interactiveNotificationDidAppear;
- (void)_proximityStateDidChange:(BOOL)arg1;
- (void)_setContext:(id)arg1;
- (void)_setMaximumHeight:(double)arg1;
- (void)_setModal:(BOOL)arg1;
- (void)_willPresentFromActionIdentifier:(id)arg1;
- (id)accessoryViewService;
- (id)actionContext;
- (id)actionTitles;
- (double)bottomOverhangHeight;
- (void)didChangeRevealPercent:(double)arg1;
- (void)dismissWithContext:(id)arg1;
- (void)handleActionAtIndex:(unsigned long long)arg1;
- (void)handleActionIdentifier:(id)arg1;
- (id)inlayViewService;
- (void)interactiveNotificationDidAppear;
- (double)preferredContentHeight;
- (void)proximityStateDidChange:(BOOL)arg1;
- (void)requestDismissalEnabled:(BOOL)arg1;
- (void)requestPreferredContentHeight:(double)arg1;
- (void)requestProximityMonitoringEnabled:(BOOL)arg1;
- (void)setActionEnabled:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)showsKeyboard;
- (void)viewDidLoad;
- (void)willPresentFromActionIdentifier:(id)arg1;

@end
