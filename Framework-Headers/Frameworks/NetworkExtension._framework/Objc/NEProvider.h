//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NEExtensionProviderContext, NSString, NWPath, NWPathEvaluator;

@interface NEProvider : NSObject <NSExtensionRequestHandling>
{
    NWPath *_defaultPath;
    NEExtensionProviderContext *_context;
    NSString *_deviceIdentifier;
    NWPathEvaluator *_defaultPathEvaluator;
}

@property (strong) NEExtensionProviderContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (strong) NWPath *defaultPath; // @synthesize defaultPath=_defaultPath;
@property (strong) NWPathEvaluator *defaultPathEvaluator; // @synthesize defaultPathEvaluator=_defaultPathEvaluator;
@property (readonly, copy) NSString *description;
@property (strong) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)isNEProviderBundle:(id)arg1 forExtensionPoint:(id)arg2;
+ (BOOL)isRunningInProvider;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)createTCPConnectionToEndpoint:(id)arg1 enableTLS:(BOOL)arg2 TLSParameters:(id)arg3 delegate:(id)arg4;
- (id)createUDPSessionToEndpoint:(id)arg1 fromEndpoint:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)wake;

@end
