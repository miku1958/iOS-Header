//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CXCallDirectoryManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)firstIdentificationEntriesForPhoneNumbers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)firstIdentificationEntryForPhoneNumber:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPrioritizedExtensionIdentifiersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)reloadExtensionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)removeDataForExtensionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)synchronizeExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
