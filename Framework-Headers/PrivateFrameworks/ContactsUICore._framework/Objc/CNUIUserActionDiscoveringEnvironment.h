//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionDiscoveringEnvironment-Protocol.h>

@class CNContactStore, CNUIIDSContactPropertyResolver, NSString;
@protocol CNCapabilities, CNLSApplicationWorkspace, CNMCProfileConnection, CNSchedulerProvider, CNTUCallProviderManager;

@interface CNUIUserActionDiscoveringEnvironment : NSObject <CNUIUserActionDiscoveringEnvironment>
{
    id<CNLSApplicationWorkspace> _applicationWorkspace;
    id<CNTUCallProviderManager> _callProviderManager;
    CNUIIDSContactPropertyResolver *_idsContactPropertyResolver;
    id<CNMCProfileConnection> _profileConnection;
    id<CNCapabilities> _capabilities;
    CNContactStore *_contactStore;
    id<CNSchedulerProvider> _schedulerProvider;
    id<CNSchedulerProvider> _highLatencySchedulerProvider;
}

@property (strong, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
@property (strong, nonatomic) id<CNTUCallProviderManager> callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property (strong, nonatomic) id<CNCapabilities> capabilities; // @synthesize capabilities=_capabilities;
@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<CNSchedulerProvider> highLatencySchedulerProvider; // @synthesize highLatencySchedulerProvider=_highLatencySchedulerProvider;
@property (strong, nonatomic) CNUIIDSContactPropertyResolver *idsContactPropertyResolver; // @synthesize idsContactPropertyResolver=_idsContactPropertyResolver;
@property (strong, nonatomic) id<CNMCProfileConnection> profileConnection; // @synthesize profileConnection=_profileConnection;
@property (strong, nonatomic) id<CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithContactStore:(id)arg1;
- (id)init;
- (id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 idsContactPropertyResolver:(id)arg3 profileConnection:(id)arg4 contactStore:(id)arg5 schedulerProvider:(id)arg6 highLatencySchedulerProvider:(id)arg7 capabilities:(id)arg8;
- (id)initWithIDSAvailablilityProvider:(id)arg1 schedulerProvider:(id)arg2;

@end

