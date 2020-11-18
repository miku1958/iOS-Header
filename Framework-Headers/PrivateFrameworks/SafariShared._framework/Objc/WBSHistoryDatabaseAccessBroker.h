//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface WBSHistoryDatabaseAccessBroker : NSObject
{
    NSURL *_historyDatabaseURL;
    NSObject<OS_dispatch_queue> *_writeRequestQueue;
}

- (void).cxx_destruct;
- (id)_openDatabaseWithAccessType:(long long)arg1 onQueue:(id)arg2 error:(id *)arg3;
- (void)_requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_requestReadOnlyAccessOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_requestReadWriteAccessOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)databaseLastModifiedDate;
- (id)init;
- (id)initWithHistoryDatabaseURL:(id)arg1;
- (void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandlerWithInvalidationHandler:(CDUnknownBlockType)arg3;

@end

