//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ACAccount, NSArray, NSString;

@protocol DonationAgentProtocol
- (void)changeFromAccount:(ACAccount *)arg1 toAccount:(ACAccount *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)donateMeCardValues:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchDonatedMeCard:(void (^)(CNContact *, NSError *))arg1;
- (void)meCardDonations:(void (^)(NSArray *, NSError *))arg1;
- (void)rejectValueWithDonationIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)rejectValuesWithClusterIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)removeAllRejectionsWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)removeDonatedMeCardValuesForIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)synchronousDonatedMeCard:(void (^)(CNEither *))arg1;
@end
