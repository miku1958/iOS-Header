//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface STWebHistory : NSObject
{
    NSString *_bundleIdentifier;
    NSXPCConnection *_xpcConnection;
}

@property (readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void).cxx_destruct;
- (void)deleteAllHistory;
- (void)deleteHistoryDuringInterval:(id)arg1;
- (void)deleteHistoryForURL:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 error:(id *)arg2;

@end

