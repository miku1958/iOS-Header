//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICQDaemonOffer, NSLock;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICQDaemonAlert : NSObject
{
    NSLock *_alertLock;
    long long _alertState;
    struct __CFUserNotification *_cfAlert;
    NSObject<OS_dispatch_semaphore> *_alertSema;
    NSObject<OS_dispatch_queue> *_alertQueue;
    BOOL _showOnlyInSpringboard;
    BOOL _handleActionsBeforeCallingCompletionHandler;
    ICQDaemonOffer *_daemonOffer;
}

@property (readonly, nonatomic) ICQDaemonOffer *daemonOffer; // @synthesize daemonOffer=_daemonOffer;
@property (nonatomic) BOOL handleActionsBeforeCallingCompletionHandler; // @synthesize handleActionsBeforeCallingCompletionHandler=_handleActionsBeforeCallingCompletionHandler;
@property (nonatomic) BOOL showOnlyInSpringboard; // @synthesize showOnlyInSpringboard=_showOnlyInSpringboard;

+ (void)dismissAlertsWithNotificationID:(id)arg1;
+ (BOOL)shouldShowForDaemonOffer:(id)arg1;
- (void).cxx_destruct;
- (void)_handleLink:(id)arg1;
- (void)dealloc;
- (void)dismissAlert;
- (id)init;
- (id)initWithDaemonOffer:(id)arg1;
- (BOOL)showAlertWithCompletion:(CDUnknownBlockType)arg1;

@end

