//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface TKClientToken : NSObject
{
    NSXPCListenerEndpoint *_serverEndpoint;
    NSXPCConnection *_serverConnection;
    BOOL _namedConnection;
    NSNumber *_targetUID;
    long long _connectionIdentifier;
    NSString *_tokenID;
    NSXPCConnection *_tokenConnection;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *configurationEndpoint;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) NSXPCConnection *serverConnection;
@property (readonly, nonatomic) NSXPCConnection *tokenConnection; // @synthesize tokenConnection=_tokenConnection;
@property (readonly, nonatomic) NSString *tokenID; // @synthesize tokenID=_tokenID;
@property (readonly, nonatomic) NSXPCListenerEndpoint *watcherEndpoint;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)ensureConnectionWithError:(id *)arg1;
- (id)initWithTokenID:(id)arg1;
- (id)initWithTokenID:(id)arg1 serverEndpoint:(id)arg2 targetUID:(id)arg3;
- (id)sessionWithLAContext:(id)arg1 error:(id *)arg2;
- (id)withError:(id *)arg1 invoke:(CDUnknownBlockType)arg2;

@end

