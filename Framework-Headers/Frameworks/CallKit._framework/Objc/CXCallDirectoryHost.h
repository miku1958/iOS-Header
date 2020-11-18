//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCallDirectoryManagerDefaultHostProtocol-Protocol.h>
#import <CallKit/CXCallDirectoryManagerMaintenanceHostProtocol-Protocol.h>

@class NSString;
@protocol CXCallDirectoryHostDelegate, OS_dispatch_queue;

@interface CXCallDirectoryHost : NSObject <CXCallDirectoryManagerDefaultHostProtocol, CXCallDirectoryManagerMaintenanceHostProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<CXCallDirectoryHostDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CXCallDirectoryHostDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_connectionContainsCallDirectoryHostEntitlementCapability:(id)arg1;
- (void)_nsExtensionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)compactStoreWithReply:(CDUnknownBlockType)arg1;
- (oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getExtensionsWithReply:(CDUnknownBlockType)arg1;
- (id)init;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)prepareStoreIfNecessary;
- (oneway void)reloadExtensionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (oneway void)setEnabled:(BOOL)arg1 forExtensionWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)setPrioritizedExtensionIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)synchronizeExtensionsWithReply:(CDUnknownBlockType)arg1;

@end
