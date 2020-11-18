//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUI/SBSRemoteAlertHandleObserver-Protocol.h>
#import <TelephonyUI/TPProcessObserverDelegate-Protocol.h>

@class NSString, TPProcessObserver;

@interface TPInCallUILauncher : NSObject <SBSRemoteAlertHandleObserver, TPProcessObserverDelegate>
{
    TPProcessObserver *_processObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TPProcessObserver *processObserver; // @synthesize processObserver=_processObserver;
@property (readonly) Class superclass;

+ (id)TPRemoteAlertActivationReasonForTPInCallUILaunchReason:(long long)arg1;
+ (id)sharedInCallUILauncher;
- (void).cxx_destruct;
- (void)launchInCallUIForReason:(long long)arg1 withRequestURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processObserver:(id)arg1 bundleIdentifier:(id)arg2 didUpdateApplicationRunning:(BOOL)arg3;

@end
