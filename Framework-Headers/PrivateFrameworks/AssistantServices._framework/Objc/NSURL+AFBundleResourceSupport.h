//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

#import <AssistantServices/AFSecurityDigestibleChunksProviding-Protocol.h>
#import <AssistantServices/_AFBundleResourceURLProviding-Protocol.h>

@class NSString;

@interface NSURL (AFBundleResourceSupport) <_AFBundleResourceURLProviding, AFSecurityDigestibleChunksProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)_af_URLWithMessageIdentifier:(id)arg1;
- (id)_af_messageIdentifierValue;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)af_getBundleResourceURL;
- (BOOL)isAMOSCommittedIdentifier;
- (BOOL)isAMOSIdentifier;
@end
