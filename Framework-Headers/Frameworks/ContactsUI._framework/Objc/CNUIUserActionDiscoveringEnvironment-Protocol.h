//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNContactStore, CNUIIDSContactPropertyResolver;
@protocol CNCapabilities, CNLSApplicationWorkspace, CNMCProfileConnection, CNSchedulerProvider, CNTUCallProviderManager, CNUIDefaultUserActionFetcher, CNUIRTTUtilities, CNUIUserActionDiscoveringEnvironment, CNUIUserActionTargetDiscovering;

@protocol CNUIUserActionDiscoveringEnvironment <NSObject>

@property (readonly, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace;
@property (readonly, nonatomic) id<CNTUCallProviderManager> callProviderManager;
@property (readonly, nonatomic) id<CNCapabilities> capabilities;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) id<CNUIDefaultUserActionFetcher> defaultUserActionFetcher;
@property (readonly, nonatomic) id<CNSchedulerProvider> highLatencySchedulerProvider;
@property (readonly, nonatomic) CNUIIDSContactPropertyResolver *idsContactPropertyResolver;
@property (readonly, nonatomic) id<CNMCProfileConnection> profileConnection;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNUIUserActionTargetDiscovering> targetDiscoveringHelper;
@property (readonly, nonatomic) id<CNUIRTTUtilities> ttyUtilities;

- (id<CNUIUserActionDiscoveringEnvironment>)copyWithContactStore:(CNContactStore *)arg1;
@end
