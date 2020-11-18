//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection;
@protocol VMClientXPCProtocol;

@interface VMClientWrapper : NSObject
{
    id<VMClientXPCProtocol> _manager;
    NSXPCConnection *_clientConnection;
}

@property (strong, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property (nonatomic) id<VMClientXPCProtocol> manager; // @synthesize manager=_manager;

+ (id)voicemailClientXPCInterface;
+ (id)voicemailServerXPCInterface;
- (void).cxx_destruct;
- (void)_handleXPCConnectionEstablished:(id)arg1;
- (void)_handleXPCDisconnectNotification:(id)arg1;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

@end
