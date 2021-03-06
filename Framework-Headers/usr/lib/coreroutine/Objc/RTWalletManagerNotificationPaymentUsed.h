//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class CLLocation, NSDate, NSNumber, NSString;

@interface RTWalletManagerNotificationPaymentUsed : RTNotification
{
    NSString *_passIdentifier;
    NSString *_transactionIdentifier;
    NSDate *_date;
    CLLocation *_location;
    NSNumber *_muid;
    NSNumber *_provider;
}

@property (readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) NSNumber *muid; // @synthesize muid=_muid;
@property (readonly, copy, nonatomic) NSString *passIdentifier; // @synthesize passIdentifier=_passIdentifier;
@property (readonly, nonatomic) NSNumber *provider; // @synthesize provider=_provider;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;

- (void).cxx_destruct;

@end

