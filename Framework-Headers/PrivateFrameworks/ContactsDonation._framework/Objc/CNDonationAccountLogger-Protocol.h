//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsDonation/NSObject-Protocol.h>

@class ACAccount, CNDonationValue, NSError, NSString;

@protocol CNDonationAccountLogger <NSObject>
- (void)accountAdded:(ACAccount *)arg1;
- (void)accountChanged:(ACAccount *)arg1;
- (void)accountRemoved:(ACAccount *)arg1;
- (void)accountsDidNotChange;
- (void)donating:(CNDonationValue *)arg1;
- (void)donationFailedWithError:(NSError *)arg1;
- (void)pluginLoaded;
- (void)pluginUnloaded;
- (void)removalFailedWithError:(NSError *)arg1;
- (void)removing:(NSString *)arg1;
@end

