//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChronoKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class MISSING_TYPE;

@interface _TtC9ChronoKit16ExtensionManager : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    MISSING_TYPE *_extensionsPublisher;
    MISSING_TYPE *_addedPublisher;
    MISSING_TYPE *_updatedPublisher;
    MISSING_TYPE *_removedPublisher;
    MISSING_TYPE *extensionsByIdentifier;
    MISSING_TYPE *removedPluginUUIDsByIdentifier;
    MISSING_TYPE *queue;
    MISSING_TYPE *lookupLock;
    MISSING_TYPE *lock;
    MISSING_TYPE *nsExtensionDiscovererSubscription;
    MISSING_TYPE *nsExtensionDiscoverer;
    MISSING_TYPE *applicationWorkspace;
    MISSING_TYPE *extensionFactory;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)pluginsDidUninstall:(id)arg1;

@end

