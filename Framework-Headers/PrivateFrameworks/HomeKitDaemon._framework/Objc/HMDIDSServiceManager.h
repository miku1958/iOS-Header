//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSService, _HMDIDSProxyLinkPreferenceAssertion;
@protocol OS_dispatch_queue;

@interface HMDIDSServiceManager : NSObject
{
    IDSService *_proxyService;
    IDSService *_streamService;
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_workQueue;
    _HMDIDSProxyLinkPreferenceAssertion *_proxyLinkPreferenceAssertion;
}

@property (weak) _HMDIDSProxyLinkPreferenceAssertion *proxyLinkPreferenceAssertion; // @synthesize proxyLinkPreferenceAssertion=_proxyLinkPreferenceAssertion;
@property (readonly, nonatomic) IDSService *proxyService; // @synthesize proxyService=_proxyService;
@property (readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property (readonly, nonatomic) IDSService *streamService; // @synthesize streamService=_streamService;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)init;
- (void)setProxyServiceLinkPreferences:(id)arg1;

@end

