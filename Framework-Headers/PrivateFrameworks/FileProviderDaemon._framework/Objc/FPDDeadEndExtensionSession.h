//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDExtensionSessionProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPDDeadEndExtensionSession : NSObject <FPDExtensionSessionProtocol>
{
    BOOL hasFileProviderPresenceTCCAccess;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasFileProviderPresenceTCCAccess; // @synthesize hasFileProviderPresenceTCCAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)asyncUnregisterLifetimeExtensionForObject:(id)arg1;
- (void)dumpStateTo:(id)arg1;
- (id)existingFileProviderProxyWithTimeout:(BOOL)arg1 onlyAlreadyLifetimeExtended:(BOOL)arg2 pid:(int)arg3;
- (void)invalidate;
- (id)newFileProviderProxyWithPID:(int)arg1;
- (id)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2;
- (id)newFileProviderProxyWithoutPID;
- (id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)arg1;
- (void)registerLifetimeExtensionForObject:(id)arg1;
- (void)start;
- (void)unregisterLifetimeExtensionForObject:(id)arg1;
- (void)updatePresenceTCCWithAuditToken:(CDStruct_6ad76789)arg1;

@end

