//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSXPCConnection : NSObject
{
    BOOL _machService;
    BOOL _listener;
    BOOL _nonLaunching;
    unsigned int _user;
    NSString *_uuid;
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
}

@property (strong, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property (readonly, nonatomic) BOOL listener; // @synthesize listener=_listener;
@property (readonly, nonatomic) BOOL machService; // @synthesize machService=_machService;
@property (nonatomic) BOOL nonLaunching; // @synthesize nonLaunching=_nonLaunching;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (nonatomic) unsigned int user; // @synthesize user=_user;
@property (readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

+ (id)appIdentifierFromTeamAppTuple:(id)arg1;
+ (id)copyNSDataForKey:(const char *)arg1 fromXPCDictionary:(id)arg2;
+ (id)copyNSStringArrayFromXPCArray:(id)arg1;
+ (id)copyNSStringForKey:(const char *)arg1 fromXPCDictionary:(id)arg2;
+ (id)copyNSStringSetFromXPCArray:(id)arg1;
+ (id)dataWrapperForKey:(const char *)arg1 sizeKey:(const char *)arg2 fromXPCDictionary:(id)arg3;
+ (BOOL)dictionary:(id)arg1 setSharedMemory:(void *)arg2 forKey:(const char *)arg3 size:(unsigned long long)arg4 forSizeKey:(const char *)arg5;
+ (void)dictionary:(id)arg1 setStringArray:(id)arg2 forKey:(const char *)arg3;
- (void).cxx_destruct;
- (void)_lostClientConnection:(id)arg1 error:(id)arg2;
- (void)_setUser:(unsigned int)arg1;
- (BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)arg1;
- (BOOL)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (void)handleError:(id)arg1;
- (BOOL)handleMessage:(id)arg1 type:(struct _xpc_type_s *)arg2 connection:(id)arg3;
- (void)handleReply:(id)arg1;
- (id)initListenerWithName:(id)arg1;
- (id)initMachServiceListenerWithName:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 machService:(BOOL)arg2;
- (id)initWithServiceName:(id)arg1 machService:(BOOL)arg2 uuid:(id)arg3;
- (BOOL)lostClientConnection:(id)arg1 error:(id)arg2;
- (void)sendMessageAsync:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startListener;

@end
