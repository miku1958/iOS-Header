//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDP/NSObject-Protocol.h>

@class NSString;

@protocol CDPRecoveryKeyValidator <NSObject>
- (void)confirmRecoveryKey:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (BOOL)confirmRecoveryKey:(NSString *)arg1 error:(id *)arg2;
- (void)generateRecoveryKey:(void (^)(NSString *, NSError *))arg1;
- (NSString *)generateRecoveryKeyWithError:(id *)arg1;
@end

