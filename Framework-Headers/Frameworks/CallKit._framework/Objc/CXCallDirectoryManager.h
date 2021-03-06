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
    NSXPCConnection *_defaultConnection;
    NSXPCConnection *_maintenanceConnection;
}

@property (strong, nonatomic) NSXPCConnection *defaultConnection; // @synthesize defaultConnection=_defaultConnection;
@property (strong, nonatomic) NSXPCConnection *maintenanceConnection; // @synthesize maintenanceConnection=_maintenanceConnection;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)compactStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)defaultConnectionRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)maintenanceConnectionRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)openSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reloadExtensionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setEnabled:(BOOL)arg1 forExtensionWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)synchronizeExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

