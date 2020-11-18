//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface APXPCConnection : NSObject
{
    NSString *_bundleID;
    NSString *_appVersion;
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property (strong, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly) int processIdentifier;

- (void).cxx_destruct;
- (BOOL)hasEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (id)remoteObjectProxy;

@end
