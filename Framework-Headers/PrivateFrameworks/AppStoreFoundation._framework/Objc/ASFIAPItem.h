//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreFoundation/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface ASFIAPItem : NSObject <NSCopying>
{
    NSDate *_originalPurchaseDate;
    NSString *_originalTransactionID;
    NSDate *_purchaseDate;
    NSString *_productID;
    NSNumber *_quantity;
    NSString *_transactionID;
}

@property (copy) NSDate *originalPurchaseDate; // @synthesize originalPurchaseDate=_originalPurchaseDate;
@property (copy) NSString *originalTransactionID; // @synthesize originalTransactionID=_originalTransactionID;
@property (copy) NSString *productID; // @synthesize productID=_productID;
@property (copy) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property (copy) NSNumber *quantity; // @synthesize quantity=_quantity;
@property (copy) NSString *transactionID; // @synthesize transactionID=_transactionID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
