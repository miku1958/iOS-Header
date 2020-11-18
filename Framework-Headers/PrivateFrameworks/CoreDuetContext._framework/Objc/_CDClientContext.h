//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDUserContext-Protocol.h>
#import <CoreDuetContext/_CDUserContextServerMonitoring-Protocol.h>

@class NSCountedSet, NSMutableDictionary, NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue, OS_os_log;

@interface _CDClientContext : NSObject <_CDUserContext, _CDUserContextServerMonitoring>
{
    BOOL _interrupted;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSXPCConnection *_xpcConnection;
    NSXPCListenerEndpoint *_endpoint;
    NSMutableDictionary *_keyPathToValues;
    NSMutableDictionary *_registrations;
    NSCountedSet *_keyPathsWithRegistrationsForAnyChange;
    NSObject<OS_dispatch_queue> *_registrationCallbackQueue;
    NSMutableDictionary *_openRegistrationTokens;
    NSObject<OS_os_log> *_log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL interrupted; // @synthesize interrupted=_interrupted;
@property (strong, nonatomic) NSMutableDictionary *keyPathToValues; // @synthesize keyPathToValues=_keyPathToValues;
@property (strong, nonatomic) NSCountedSet *keyPathsWithRegistrationsForAnyChange; // @synthesize keyPathsWithRegistrationsForAnyChange=_keyPathsWithRegistrationsForAnyChange;
@property (strong, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property (strong, nonatomic) NSMutableDictionary *openRegistrationTokens; // @synthesize openRegistrationTokens=_openRegistrationTokens;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue; // @synthesize registrationCallbackQueue=_registrationCallbackQueue;
@property (strong, nonatomic) NSMutableDictionary *registrations; // @synthesize registrations=_registrations;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)userContext;
- (void).cxx_destruct;
- (void)addKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1;
- (void)cleanupInternalReferencesToRegistration:(id)arg1;
- (void)clearCacheForKeyPathsWithFireOnChangeRegistrations:(id)arg1;
- (id)currentConnection;
- (void)dealloc;
- (void)deregisterCallback:(id)arg1;
- (BOOL)evaluatePredicate:(id)arg1;
- (void)handleContextualChange:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)handleRegistrationCompleted:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)hasKnowledgeOfContextualKeyPath:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)lastModifiedDateForContextualKeyPath:(id)arg1;
- (id)localContext;
- (id)objectForContextualKeyPath:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)registerCallback:(id)arg1;
- (void)removeKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1;
- (void)retryTimes:(int)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)unprotectedSetUpXPCConnectionWithEndpoint:(id)arg1;
- (id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2;

@end
