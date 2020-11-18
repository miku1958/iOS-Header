//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSData, NSObject, NSString, SFUCryptoKey;
@protocol OS_dispatch_queue;

@protocol TSPPassphraseConsumer <NSObject>

@property (readonly, nonatomic) NSData *keychainGenericItem;
@property (readonly, nonatomic) NSString *lastPasswordAttempted;
@property (readonly, nonatomic) NSString *passphraseHint;
@property (readonly, nonatomic) BOOL requiresNetworkValidation;

- (BOOL)setPassphrase:(NSString *)arg1;

@optional
- (void)cancel;
- (BOOL)setDecryptionKey:(SFUCryptoKey *)arg1;
- (void)setPassphrase:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

