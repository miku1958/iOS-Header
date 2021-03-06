//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPContext, NSDictionary, NSString;

@protocol CDPDSecureBackupProxy <NSObject>

@property (strong, nonatomic) CDPContext *cdpContext;

- (NSDictionary *)accountInfoWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (void)cacheRecoveryKey:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)disableWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (BOOL)disableWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (void)enableWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (BOOL)enableWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (id)initWithContext:(CDPContext *)arg1;
- (NSDictionary *)recoverWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (void)uncacheAllSecrets;
@end

