//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BannerKit/BNBannerSourceClientToHostInterface-Protocol.h>
#import <BannerKit/BNBannerSourceListenerPresentableObserving-Protocol.h>
#import <BannerKit/BSInvalidatable-Protocol.h>
#import <BannerKit/BSServiceConnectionListenerDelegate-Protocol.h>

@class BSServiceConnectionListener, FBSDisplayConfiguration, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol BNBannerSourceListenerDelegate, OS_dispatch_queue;

@interface BNBannerSourceListener : NSObject <BSServiceConnectionListenerDelegate, BNBannerSourceClientToHostInterface, BNBannerSourceListenerPresentableObserving, BSInvalidatable>
{
    FBSDisplayConfiguration *_displayConfiguration;
    NSSet *_authorizedBundleIDs;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    NSMutableSet *_unpreparedPresentables;
    NSMutableDictionary *_requesterIDsToPresentables;
    id<BNBannerSourceListenerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BNBannerSourceListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (void)__layoutDescriptionWithReply:(CDUnknownBlockType)arg1;
- (void)__postPresentableWithSpecification:(id)arg1 options:(id)arg2 userInfo:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)__recommendSuspension:(id)arg1 forReason:(id)arg2 revokingCurrent:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)__revokePresentablesWithIdentification:(id)arg1 withAnimation:(id)arg2 reason:(id)arg3 userInfo:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)_addConnection:(id)arg1;
- (void)_addPresentable:(id)arg1;
- (void)_addUnpreparedPresentable:(id)arg1;
- (id)_createSceneWithIdentifier:(id)arg1 forProcess:(id)arg2 preferredContentSize:(struct CGSize)arg3 contentOutsets:(struct UIEdgeInsets)arg4;
- (BOOL)_isConnectingProcessAuthorized:(id)arg1 error:(out id *)arg2;
- (BOOL)_isPresentableWaitingToBeMadeReady:(id)arg1;
- (BOOL)_isPrototypeFeaturesEnabled;
- (void)_removeConnection:(id)arg1;
- (void)_removePresentable:(id)arg1;
- (void)_removePresentableWithIdentification:(id)arg1;
- (void)_removePresentablesFromRequesterWithIdentifier:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)_removeUnpreparedPresentable:(id)arg1;
- (id)_removeUnpreparedPresentablesWithIdentification:(id)arg1;
- (void)dealloc;
- (id)initWithAuthorizedBundleIDs:(id)arg1;
- (id)initWithServiceDomain:(id)arg1 displayConfiguration:(id)arg2 authorizedBundleIDs:(id)arg3;
- (void)invalidate;
- (void)layoutDescriptionDidChange:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)sceneDidInvalidateForBannerSourceListenerPresentable:(id)arg1;

@end

