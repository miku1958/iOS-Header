//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADOperationProxy, ClientIdentity, NSLock, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSXPCConnection;
@protocol ClientConnectionDelegate, OS_dispatch_queue;

@interface ClientConnection : NSObject
{
    int _options;
    NSString *_path;
    BOOL _allowedEntityTypesValid;
    long long _eventAccess;
    long long _reminderAccess;
    NSLock *_restrictionsLock;
    NSSet *_restrictedStoreRowIDs;
    NSSet *_restrictedCalendarRowIDs;
    int _sourceAccountManagement;
    struct CalDatabase *_database;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSOperationQueue *_operations;
    NSMutableDictionary *_insertedObjects;
    NSMutableSet *_canceledRequests;
    NSObject<OS_dispatch_queue> *_canceledRequestsLock;
    int _connectionIdentifier;
    CADOperationProxy *_cadOperationProxy;
    id<ClientConnectionDelegate> _delegate;
    ClientIdentity *_identity;
    NSXPCConnection *_xpcConnection;
}

@property (readonly, nonatomic) CADOperationProxy *cadOperationProxy; // @synthesize cadOperationProxy=_cadOperationProxy;
@property int connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
@property (nonatomic) struct CalDatabase *database; // @synthesize database=_database;
@property (weak, nonatomic) id<ClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) ClientIdentity *identity; // @synthesize identity=_identity;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void).cxx_destruct;
- (void)_databaseChanged;
- (void)_loadAccessPermissionsIfNeeded;
- (id)_restrictedStoreRowIDs;
- (void)addOperation:(id)arg1;
- (void)clearCachedAuthorizationStatus;
- (void)clearInsertedObjects;
- (void)dealloc;
- (void)dumpState;
- (BOOL)eventAccessGranted;
- (id)initWithXPCConnection:(id)arg1;
- (void)insertObject:(void *)arg1 key:(id)arg2;
- (id)insertedObjects;
- (BOOL)isCalendarItemRestricted:(void *)arg1;
- (BOOL)isCalendarRestricted:(void *)arg1;
- (BOOL)isStoreRestricted:(void *)arg1;
- (void *)objectForKey:(id)arg1;
- (id)operations;
- (BOOL)reminderAccessGranted;
- (id)restrictedCalendarRowIDs;
- (id)restrictedCalendarRowIDsWithValidator:(id)arg1;
- (id)restrictedStoreRowIDs;
- (void)setDatabasePath:(id)arg1 andInitOptions:(int)arg2;
- (void)setSourceAccountManagement:(int)arg1;

@end

