//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/TUCallProviderManagerDataSource-Protocol.h>
#import <TelephonyUtilities/TUCallProviderManagerXPCClient-Protocol.h>

@class NSDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, TUCallProviderManagerDataSourceDelegate;

@interface TUCallProviderManagerXPCClient : NSObject <TUCallProviderManagerXPCClient, TUCallProviderManagerDataSource>
{
    BOOL _requestedInitialState;
    int _token;
    id<TUCallProviderManagerDataSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSDictionary *_providersByIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TUCallProviderManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDictionary *providersByIdentifier; // @synthesize providersByIdentifier=_providersByIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic) BOOL requestedInitialState; // @synthesize requestedInitialState=_requestedInitialState;
@property (readonly) Class superclass;
@property (nonatomic) int token; // @synthesize token=_token;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (id)callProviderManagerAllowedClasses;
+ (id)callProviderManagerClientXPCInterface;
+ (id)callProviderManagerServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
- (void).cxx_destruct;
- (void)_requestInitialState;
- (void)_updateProvidersByIdentifier:(id)arg1;
- (void)blockUntilInitialStateReceived;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)server;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (oneway void)updateProvidersByIdentifier:(id)arg1;

@end

