//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeSharing/NSNetServiceBrowserDelegate-Protocol.h>
#import <HomeSharing/NSNetServiceDelegate-Protocol.h>

@class NSMutableArray, NSNetServiceBrowser, NSString;
@protocol HSBrowserDelegate, OS_dispatch_queue;

@interface HSBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    long long _browserType;
    NSString *_homeSharingGroupID;
    id<HSBrowserDelegate> _delegate;
    NSMutableArray *_availableLibraries;
    NSMutableArray *_resolvingServices;
    NSMutableArray *_librariesPendingRemoval;
    NSObject<OS_dispatch_queue> *_serviceBrowserQueue;
    NSString *_serviceType;
    NSNetServiceBrowser *_serviceBrowser;
}

@property (strong, nonatomic) NSMutableArray *availableLibraries; // @synthesize availableLibraries=_availableLibraries;
@property (readonly, nonatomic) long long browserType; // @synthesize browserType=_browserType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HSBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *homeSharingGroupID; // @synthesize homeSharingGroupID=_homeSharingGroupID;
@property (strong, nonatomic) NSMutableArray *librariesPendingRemoval; // @synthesize librariesPendingRemoval=_librariesPendingRemoval;
@property (strong, nonatomic) NSMutableArray *resolvingServices; // @synthesize resolvingServices=_resolvingServices;
@property (strong, nonatomic) NSNetServiceBrowser *serviceBrowser; // @synthesize serviceBrowser=_serviceBrowser;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serviceBrowserQueue; // @synthesize serviceBrowserQueue=_serviceBrowserQueue;
@property (readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property (readonly) Class superclass;

+ (id)homeSharingBrowserWithGroupID:(id)arg1;
- (void).cxx_destruct;
- (void)_removalTimerFired:(id)arg1;
- (id)initWithBrowserType:(long long)arg1 groupID:(id)arg2;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)start;
- (void)stop;

@end

