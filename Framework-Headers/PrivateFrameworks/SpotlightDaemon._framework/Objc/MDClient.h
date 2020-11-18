//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSXPCConnection;
@protocol NSXPCProxyCreating;

@interface MDClient : NSObject
{
    NSXPCConnection *_connection;
    id<NSXPCProxyCreating> _clientLink;
    NSNumber *_processID;
    NSString *_processName;
    NSString *_bundleID;
}

@property (strong) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong) id<NSXPCProxyCreating> clientLink; // @synthesize clientLink=_clientLink;
@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong) NSNumber *processID; // @synthesize processID=_processID;
@property (strong) NSString *processName; // @synthesize processName=_processName;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

