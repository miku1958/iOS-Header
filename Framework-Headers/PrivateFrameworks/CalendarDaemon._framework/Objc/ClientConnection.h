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
    int _databaseInitializationOptions;
    CADOperationProxy *_cadOperationProxy;
    id<ClientConnectionDelegate> _delegate;
    ClientIdentity *_identity;
    NSXPCConnection *_xpcConnection;
    NSString *_databasePath;
}

@property (readonly, nonatomic) CADOperationProxy *cadOperationProxy; // @synthesize cadOperationProxy=_cadOperationProxy;
@property (nonatomic) struct CalDatabase *database; // @synthesize database=_database;
@property (nonatomic) int databaseInitializationOptions; // @synthesize databaseInitializationOptions=_databaseInitializationOptions;
@property (copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property (weak, nonatomic) id<ClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) ClientIdentity *identity; // @synthesize identity=_identity;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void).cxx_destruct;
- (void)_databaseChanged;
- (BOOL)_hasTCCAccessToEntityWithObjectIDUsingDeepInspection:(CDStruct_1ef3fb1f)arg1;
- (void)_loadAccessPermissionsIfNeeded;
- (id)_restrictedStoreRowIDs;
- (BOOL)_shouldUseMCToBlacklist;
- (void)addOperation:(id)arg1;
- (void)clearCachedAuthorizationStatus;
- (void)clearInsertedObjects;
- (void)dealloc;
- (void)dumpState;
- (BOOL)eventAccessGranted;
- (BOOL)hasTCCAccessToEntityWithObjectID:(CDStruct_1ef3fb1f)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (void)insertObject:(void *)arg1 key:(id)arg2;
- (id)insertedObjects;
- (BOOL)isCalendarItemRestricted:(void *)arg1;
- (BOOL)isCalendarRestricted:(void *)arg1;
- (BOOL)isObjectWithObjectIDAJunkEvent:(CDStruct_1ef3fb1f)arg1;
- (BOOL)isStoreRestricted:(void *)arg1;
- (void *)objectForKey:(id)arg1;
- (id)operations;
- (BOOL)reminderAccessGranted;
- (id)restrictedCalendarRowIDs;
- (id)restrictedCalendarRowIDsWithValidator:(id)arg1;
- (id)restrictedStoreRowIDs;
- (void)setSourceAccountManagement:(int)arg1;

@end

