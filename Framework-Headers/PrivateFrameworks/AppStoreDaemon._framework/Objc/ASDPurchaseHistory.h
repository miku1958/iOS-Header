//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;

@interface ASDPurchaseHistory : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;
    int _databaseChangedNotificationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)arg1;
- (void)dealloc;
- (void)executeQuery:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)setHidden:(BOOL)arg1 forStoreItemID:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)showAllWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateForAccountID:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)updateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateWithContext:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
