//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class CLIntersiloInterface, CLIntersiloInterfaceSelectorInfo, CLSilo;
@protocol CLIntersiloProxyDelegateProtocol;

@interface CLIntersiloProxy : NSProxy
{
    CLIntersiloProxy *_peer;
    CLIntersiloProxy *_asymStrongPeer;
    CLIntersiloInterfaceSelectorInfo *_last;
    unsigned long long _opaqueTag;
    id<CLIntersiloProxyDelegateProtocol> _delegate;
    CLSilo *_delegateSilo;
    CLIntersiloInterface *_delegateInterface;
    CLIntersiloInterface *_proxiedInterface;
}

@property (readonly, weak, nonatomic) id<CLIntersiloProxyDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy, nonatomic) CLIntersiloInterface *delegateInterface; // @synthesize delegateInterface=_delegateInterface;
@property (readonly, weak, nonatomic) CLSilo *delegateSilo; // @synthesize delegateSilo=_delegateSilo;
@property (readonly, copy, nonatomic) CLIntersiloInterface *proxiedInterface; // @synthesize proxiedInterface=_proxiedInterface;

+ (id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 withInboundInterface:(id)arg3 andOutboundInterface:(id)arg4;
- (void).cxx_destruct;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 andUninitializedPeer:(id)arg3;
- (id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 delegateObject:(id)arg3 delegateSilo:(id)arg4 andUninitializedPeer:(id)arg5;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)registerDelegate:(id)arg1 inSilo:(id)arg2;
- (void)setOpaqueTag:(void *)arg1;

@end

