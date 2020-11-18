//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/LSInstalationServiceProtocol-Protocol.h>
#import <MobileCoreServices/NSXPCListenerDelegate-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSInstallationService : NSObject <LSInstalationServiceProtocol, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (readonly) Class superclass;

+ (void)beginListening;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeSystemApplicationWithBundleIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)restoreSystemApplicationWithBundleIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

