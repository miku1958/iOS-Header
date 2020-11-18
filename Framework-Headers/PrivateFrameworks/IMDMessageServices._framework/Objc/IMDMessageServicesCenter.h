//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface IMDMessageServicesCenter : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;
- (BOOL)_connect;
- (BOOL)_disconnect;
- (void)_disconnected;
- (void)_requestExpireStateWithGUID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_requestRoutingWithGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned int)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_requestWatchdogWithGUID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (void)requestExpireStateForMessageGuid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestExpireStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestRoutingForMessageGuid:(id)arg1 inChat:(id)arg2 error:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)requestRoutingWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestWatchdogForMessageGuid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestWatchdogWithCompletion:(CDUnknownBlockType)arg1;

@end

