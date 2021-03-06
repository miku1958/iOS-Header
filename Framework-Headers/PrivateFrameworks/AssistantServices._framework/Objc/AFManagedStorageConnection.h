//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFManagedStore-Protocol.h>

@class NSString, NSXPCConnection;

@interface AFManagedStorageConnection : NSObject <AFManagedStore>
{
    NSXPCConnection *_connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearConnection;
- (id)_connection;
- (id)_managedStoreService;
- (id)_managedStoreServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_synchronousManagedStoreServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)dataForKey:(id)arg1 inKnowledgeStoreWithName:(id)arg2;
- (void)dealloc;
- (id)domainObjectForKey:(id)arg1;
- (void)resetKnowledgeStoreWithName:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2 inKnowledgeStoreWithName:(id)arg3;
- (void)setDomainObject:(id)arg1 forKey:(id)arg2;

@end

