//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/EMAccount-Protocol.h>

@class NSString;
@protocol EMDeliveryAcount;

@protocol EMReceivingAccount <EMAccount>
- (id<EMDeliveryAcount>)deliveryAccount;
- (NSString *)smtpIdentifier;
@end

