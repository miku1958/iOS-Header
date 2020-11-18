//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PKMerchant, PKPaymentTransaction;

@interface PKPaymentTransactionCellControllerIconRequest : NSObject
{
    PKPaymentTransaction *_transaction;
    PKMerchant *_merchant;
    NSString *_cacheKey;
    NSArray *_completionHandlers;
    struct CGSize _size;
}

@property (strong, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property (strong, nonatomic) NSArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property (strong, nonatomic) PKMerchant *merchant; // @synthesize merchant=_merchant;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (strong, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
