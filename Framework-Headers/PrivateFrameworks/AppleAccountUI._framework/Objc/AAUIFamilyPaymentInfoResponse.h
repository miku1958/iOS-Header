//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class AAUIFamilyCreditCard;

@interface AAUIFamilyPaymentInfoResponse : AAResponse
{
    AAUIFamilyCreditCard *_creditCard;
}

@property (strong, nonatomic) AAUIFamilyCreditCard *creditCard; // @synthesize creditCard=_creditCard;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

