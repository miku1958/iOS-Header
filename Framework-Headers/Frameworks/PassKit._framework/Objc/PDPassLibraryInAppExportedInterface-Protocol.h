//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDPassLibraryExportedInterface-Protocol.h>

@class NSSet, NSString;

@protocol PDPassLibraryInAppExportedInterface <PDPassLibraryExportedInterface>
- (void)hasInAppPaymentPassesForNetworks:(NSSet *)arg1 capabilities:(unsigned long long)arg2 withHandler:(void (^)(BOOL))arg3;
- (void)hasInAppPaymentPassesForNetworks:(NSSet *)arg1 withHandler:(void (^)(BOOL))arg2;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(NSString *)arg1 withHandler:(void (^)(BOOL))arg2;
- (void)inAppPaymentPassesForNetworks:(NSSet *)arg1 capabilities:(unsigned long long)arg2 withHandler:(void (^)(NSSet *))arg3;
- (void)inAppPaymentPassesForNetworks:(NSSet *)arg1 withHandler:(void (^)(NSSet *))arg2;
- (void)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(NSString *)arg1 withHandler:(void (^)(NSSet *))arg2;
@end
