//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProviderDaemon/NSObject-Protocol.h>

@class FPCTLTermDumper;
@protocol FPDLifetimeExtender, FPXPCAutomaticErrorProxy><FPXVendor;

@protocol FPDExtensionSessionProtocol <NSObject>

@property (nonatomic) BOOL hasFileProviderPresenceTCCAccess;

- (void)asyncUnregisterLifetimeExtensionForObject:(id<FPDLifetimeExtender>)arg1;
- (void)dumpStateTo:(FPCTLTermDumper *)arg1;
- (id<FPXPCAutomaticErrorProxy><FPXVendor>)existingFileProviderProxyWithTimeout:(BOOL)arg1 onlyAlreadyLifetimeExtended:(BOOL)arg2 pid:(int)arg3;
- (void)invalidate;
- (id<FPXPCAutomaticErrorProxy><FPXVendor>)newFileProviderProxyWithPID:(int)arg1;
- (id<FPXPCAutomaticErrorProxy><FPXVendor>)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2;
- (id<FPXPCAutomaticErrorProxy><FPXVendor>)newFileProviderProxyWithoutPID;
- (id<FPXPCAutomaticErrorProxy><FPXVendor>)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)arg1;
- (void)registerLifetimeExtensionForObject:(id<FPDLifetimeExtender>)arg1;
- (void)start;
- (void)unregisterLifetimeExtensionForObject:(id<FPDLifetimeExtender>)arg1;
- (void)updatePresenceTCCWithAuditToken:(CDStruct_6ad76789)arg1;
@end

