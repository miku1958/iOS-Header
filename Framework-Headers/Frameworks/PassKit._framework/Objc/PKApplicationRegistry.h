//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSMutableSet, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKApplicationRegistry : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSMutableSet *_registeredBundleIdentifiers;
    NSURL *_archiveFileURL;
    NSObject<OS_dispatch_semaphore> *_archiveSemaphore;
    NSObject<OS_dispatch_queue> *_applicationRegistryQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_requestArchiveToDisk;
- (void)_validateRegisteredApplications;
- (BOOL)applicationIsRegisteredWithBundleIdentifier:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)initWithArchiveFileURL:(id)arg1;
- (BOOL)registerApplicationWithBundeIdentifier:(id)arg1;

@end

