//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol VMClientXPCProtocol;

@interface VMClientWrapper : NSObject
{
    NSXPCConnection *_clientConnection;
    id<VMClientXPCProtocol> _manager;
}

@property (strong, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property (weak, nonatomic) id<VMClientXPCProtocol> manager; // @synthesize manager=_manager;

+ (BOOL)isVMXPCAvailable;
+ (id)voicemailClientXPCInterface;
+ (id)voicemailServerXPCInterface;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
