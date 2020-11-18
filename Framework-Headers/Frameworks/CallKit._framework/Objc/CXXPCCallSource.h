//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXCallSource.h>

@class NSBundle, NSSet, NSString, NSXPCConnection;

@interface CXXPCCallSource : CXCallSource
{
    BOOL _hasVoIPBackgroundMode;
    NSBundle *_bundle;
    NSXPCConnection *_connection;
    NSString *_applicationIdentifier;
    NSSet *_capabilities;
}

@property (copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property (strong, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property (copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (nonatomic) BOOL hasVoIPBackgroundMode; // @synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode;

- (void).cxx_destruct;
- (void)dealloc;
- (id)displayName;
- (id)identifier;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (BOOL)isConnected;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isPermittedToUsePublicAPI;
- (int)processIdentifier;
- (id)vendorProtocolDelegate;

@end
