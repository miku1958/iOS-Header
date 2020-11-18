//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol ISBiometricSessionDelegate <NSObject>

@optional
- (void)sender:(id)arg1 didFallbackToPassword:(BOOL)arg2;
- (void)sender:(id)arg1 shouldContinueTouchIDSession:(BOOL)arg2;
- (void)sender:(id)arg1 willSendChallenge:(NSString *)arg2 andSignature:(NSString *)arg3 andPaymentTokenData:(NSData *)arg4 isExtendedAction:(BOOL)arg5 isPayment:(BOOL)arg6 additionalHeaders:(NSDictionary *)arg7;
@end

