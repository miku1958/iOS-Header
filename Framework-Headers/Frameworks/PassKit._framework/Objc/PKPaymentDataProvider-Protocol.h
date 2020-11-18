//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSString, PKPaymentApplication;
@protocol PKPaymentDataProviderDelegate;

@protocol PKPaymentDataProvider <NSObject>

@property (strong, nonatomic) NSString *defaultPaymentPassIdentifier;
@property (nonatomic) id<PKPaymentDataProviderDelegate> delegate;
@property (readonly, nonatomic) BOOL isDeviceInRestrictedMode;
@property (readonly, nonatomic) NSString *secureElementIdentifier;

- (PKPaymentApplication *)defaultPaymentApplicationForPassUniqueIdentifier:(NSString *)arg1;
- (void)setDefaultPaymentApplication:(PKPaymentApplication *)arg1 forPassUniqueIdentifier:(NSString *)arg2 completion:(void (^)(PKPass *))arg3;

@optional
- (NSString *)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 includingSources:(unsigned long long)arg2 limit:(long long)arg3 completion:(void (^)(NSSet *))arg4;
@end

