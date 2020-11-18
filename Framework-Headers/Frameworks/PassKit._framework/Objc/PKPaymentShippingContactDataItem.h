//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class NSString;

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem
{
}

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *phone;

+ (long long)dataType;
- (id)errors;
- (id)errorsForContactFields:(id)arg1;
- (BOOL)isValidWithError:(id *)arg1;
- (id)requiredContactFields;

@end

