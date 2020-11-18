//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PKPaymentRequestUpdate : NSObject <NSSecureCoding>
{
    long long _status;
    NSArray *_paymentSummaryItems;
}

@property (copy, nonatomic) NSArray *paymentSummaryItems; // @synthesize paymentSummaryItems=_paymentSummaryItems;
@property (nonatomic) long long status; // @synthesize status=_status;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentSummaryItems:(id)arg1;
- (id)initWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;

@end
