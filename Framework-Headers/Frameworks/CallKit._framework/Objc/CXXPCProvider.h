//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXProvider.h>

@class NSXPCConnection;

@interface CXXPCProvider : CXProvider
{
    int _notifyToken;
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;

- (void).cxx_destruct;
- (void)dealloc;
- (id)hostProtocolDelegate;
- (id)initWithConfiguration:(id)arg1;
- (void)invalidate;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
