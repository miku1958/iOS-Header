//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/ASDRequestObserver-Protocol.h>
#import <Home/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class ASDSystemAppRequest, LSApplicationProxy, NAFuture, NSMutableSet, NSString;

@interface HFHomeAppInstallController : NSObject <ASDRequestObserver, LSApplicationWorkspaceObserverProtocol>
{
    NAFuture *_activeHomeAppDownloadFuture;
    ASDSystemAppRequest *_request;
    long long _lastReportedStatus;
    NSMutableSet *_statusUpdaters;
}

@property (strong, nonatomic) NAFuture *activeHomeAppDownloadFuture; // @synthesize activeHomeAppDownloadFuture=_activeHomeAppDownloadFuture;
@property (readonly, nonatomic) LSApplicationProxy *appProxy; // @dynamic appProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastReportedStatus; // @synthesize lastReportedStatus=_lastReportedStatus;
@property (strong, nonatomic) ASDSystemAppRequest *request; // @synthesize request=_request;
@property (readonly, nonatomic) long long status; // @dynamic status;
@property (readonly, nonatomic) NSMutableSet *statusUpdaters; // @synthesize statusUpdaters=_statusUpdaters;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)_dispatchStatusUpdate:(long long)arg1;
- (BOOL)_isHomeAppInstalled;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (id)downloadHomeAppWithUpdateBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)request:(id)arg1 didCompleteWithError:(id)arg2;

@end

