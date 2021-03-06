//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;

@interface ASDPurchaseManager : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)arg1;
- (id)adopt:(id)arg1;
- (id)adoptableBundleIdentifiers;
- (void)adoptionStatus:(BOOL)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)checkAutomaticDownloadQueue;
- (void)checkPendingQueue;
- (void)checkPreflightForItemIdentifier:(id)arg1 atURL:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (void)processPurchase:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)startPurchase:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)unadoptWithReplyHandler:(CDUnknownBlockType)arg1;

@end

