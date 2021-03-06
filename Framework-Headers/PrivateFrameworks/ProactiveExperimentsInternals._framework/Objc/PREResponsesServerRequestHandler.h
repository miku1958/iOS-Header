//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveExperimentsInternals/PREResponsesProtocol-Protocol.h>

@class NSString, _PASBundleIdResolver;
@protocol PREResponsesProtocol;

@interface PREResponsesServerRequestHandler : NSObject <PREResponsesProtocol>
{
    id<PREResponsesProtocol> _clientProxy;
    NSString *_clientProcessName;
    _PASBundleIdResolver *_bundleIdResolver;
}

@property (strong, nonatomic) _PASBundleIdResolver *bundleIdResolver; // @synthesize bundleIdResolver=_bundleIdResolver;
@property (copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;

- (void).cxx_destruct;
- (id)preResponseItemArrayFromQuickResponses:(id)arg1;
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 language:(id)arg6 recipientHandles:(id)arg7 modelFilePath:(id)arg8 modelConfigPath:(id)arg9 espressoBinFilePath:(id)arg10 lexiconFilePath:(id)arg11 registerDisplayed:(BOOL)arg12 completion:(CDUnknownBlockType)arg13;
- (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(BOOL)arg3 isUsingQuickResponses:(BOOL)arg4 locale:(id)arg5 modelConfigPath:(id)arg6;
- (void)setRemoteObjectProxy:(id)arg1;

@end

