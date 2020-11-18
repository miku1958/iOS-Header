//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPContext, CDPDaemonConnection, CDPStateUIProviderProxy;
@protocol CDPAuthProvider, CDPStateUIProvider;

@interface CDPController : NSObject
{
    CDPContext *_context;
    id<CDPStateUIProvider> _uiProvider;
    id<CDPAuthProvider> _authProvider;
    CDPDaemonConnection *_daemonConn;
    CDPStateUIProviderProxy *_uiProviderProxy;
}

@property (strong, nonatomic) id<CDPAuthProvider> authProvider; // @synthesize authProvider=_authProvider;
@property (readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
@property (strong, nonatomic) CDPDaemonConnection *daemonConn; // @synthesize daemonConn=_daemonConn;
@property (strong, nonatomic) id<CDPStateUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
@property (strong, nonatomic) CDPStateUIProviderProxy *uiProviderProxy; // @synthesize uiProviderProxy=_uiProviderProxy;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithXpcEndpoint:(id)arg1 context:(id)arg2;
- (void)invalidate;

@end

