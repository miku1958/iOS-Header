//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlaySupport/CPSApplicationStateObserving-Protocol.h>
#import <CarPlaySupport/CPSButtonDelegate-Protocol.h>

@class CPNavigationAlert, CPSApplicationStateMonitor, CPSNavigationAlertView, NSString, NSTimer;
@protocol CPSNavigationAlertQueueDelegate, CPTemplateDelegate;

@interface CPSNavigationAlertQueue : NSObject <CPSButtonDelegate, CPSApplicationStateObserving>
{
    id<CPSNavigationAlertQueueDelegate> _delegate;
    CPNavigationAlert *_currentAlert;
    CPSNavigationAlertView *_currentAlertView;
    NSTimer *_alertTimer;
    id<CPTemplateDelegate> _templateDelegate;
    CPSApplicationStateMonitor *_applicationStateMonitor;
}

@property (strong, nonatomic) NSTimer *alertTimer; // @synthesize alertTimer=_alertTimer;
@property (weak, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property (readonly, nonatomic) CPNavigationAlert *currentAlert; // @synthesize currentAlert=_currentAlert;
@property (readonly, nonatomic) CPSNavigationAlertView *currentAlertView; // @synthesize currentAlertView=_currentAlertView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<CPSNavigationAlertQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isDisplayingAlert;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<CPTemplateDelegate> templateDelegate; // @synthesize templateDelegate=_templateDelegate;

- (void).cxx_destruct;
- (BOOL)_canBeginAnimatingAlert;
- (void)_startAlertAnimations;
- (void)_visibleAlertTimerFired:(id)arg1;
- (void)applicationStateMonitor:(id)arg1 didBecomeActive:(BOOL)arg2;
- (void)beginAnimatingAlertIfPossible;
- (void)didSelectButton:(id)arg1;
- (void)dismissCurrentNavigationAlertAnimated:(BOOL)arg1 context:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 applicationStateMonitor:(id)arg2;
- (void)prepareNavigationAlert:(id)arg1 templateDelegate:(id)arg2 animated:(BOOL)arg3;

@end

