//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableArray, NSXPCConnection, NSXPCInterface;

@interface TransactionManager : CHSynchronizedLoggable
{
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
    id _syncHelperReadyNotificationRef;
    NSMutableArray *_queuedTransactions;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)appendTransactions:(id)arg1;
- (void)appendTransactions_sync:(id)arg1;
- (void)createXpcConnection;
- (void)createXpcConnection_sync;
- (void)dealloc;
- (id)init;
- (void)setupConnectionHandlers_sync;

@end

