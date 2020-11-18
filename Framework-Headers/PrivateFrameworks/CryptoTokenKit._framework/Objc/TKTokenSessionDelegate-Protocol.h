//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/NSObject-Protocol.h>

@class NSData, TKTokenAuthOperation, TKTokenKeyAlgorithm, TKTokenKeyExchangeParameters, TKTokenSession;

@protocol TKTokenSessionDelegate <NSObject>

@optional
- (TKTokenAuthOperation *)tokenSession:(TKTokenSession *)arg1 beginAuthForOperation:(long long)arg2 constraint:(id)arg3 error:(id *)arg4;
- (NSData *)tokenSession:(TKTokenSession *)arg1 decryptData:(NSData *)arg2 usingKey:(id)arg3 algorithm:(TKTokenKeyAlgorithm *)arg4 error:(id *)arg5;
- (NSData *)tokenSession:(TKTokenSession *)arg1 performKeyExchangeWithPublicKey:(NSData *)arg2 usingKey:(id)arg3 algorithm:(TKTokenKeyAlgorithm *)arg4 parameters:(TKTokenKeyExchangeParameters *)arg5 error:(id *)arg6;
- (NSData *)tokenSession:(TKTokenSession *)arg1 signData:(NSData *)arg2 usingKey:(id)arg3 algorithm:(TKTokenKeyAlgorithm *)arg4 error:(id *)arg5;
- (BOOL)tokenSession:(TKTokenSession *)arg1 supportsOperation:(long long)arg2 usingKey:(id)arg3 algorithm:(TKTokenKeyAlgorithm *)arg4;
@end

