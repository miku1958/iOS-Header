//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol PKUsageNotificationClientExportedInterface
- (void)usedPassFromSource:(long long)arg1 withTypeIdentifier:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)usedPaymentPassWithUniqueIdentifier:(NSString *)arg1 transactionIdentifier:(NSString *)arg2 info:(NSDictionary *)arg3;
@end

