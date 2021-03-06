//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;

@interface ASDIAPHistory : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)arg1;
- (void)getAllIAPsForActiveAccountWithResultHandler:(CDUnknownBlockType)arg1;
- (void)getIAPsForActiveAccountWithAdamIDs:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)refreshIAPsForActiveAccountWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

