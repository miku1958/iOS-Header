//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/XBApplicationLaunchRequestProviding-Protocol.h>

@class FBSDisplayConfiguration, NSString, SBApplicationController;

@interface SBSplashBoardLaunchRequestProvider : NSObject <XBApplicationLaunchRequestProviding>
{
    SBApplicationController *_applicationController;
    FBSDisplayConfiguration *_displayConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithApplicationController:(id)arg1 displayConfiguration:(id)arg2;
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2 defaultLaunchRequests:(id)arg3;

@end
