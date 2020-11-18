//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKit/NSCopying-Protocol.h>
#import <StoreKit/NSMutableCopying-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying>
{
    id _internal;
}

@property (readonly, copy, nonatomic) NSString *applicationUsername;
@property (readonly, copy, nonatomic) NSString *partnerIdentifier;
@property (readonly, copy, nonatomic) NSString *partnerTransactionIdentifier;
@property (readonly, copy, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) long long quantity;
@property (readonly, copy, nonatomic) NSData *requestData;
@property (readonly, copy, nonatomic) NSDictionary *requestParameters;
@property (readonly, nonatomic) BOOL simulatesAskToBuyInSandbox;

+ (id)paymentWithProduct:(id)arg1;
+ (id)paymentWithProductIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
