//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUISettingsEditTransaction;

@protocol SKUISettingsEditTransactionDelegate <NSObject>
- (void)settingsEditTransactionDidCompleteTransaction:(SKUISettingsEditTransaction *)arg1;
- (void)settingsEditTransactionDidFailTransaction:(SKUISettingsEditTransaction *)arg1;
- (void)settingsEditTransactionWillBeginTransaction:(SKUISettingsEditTransaction *)arg1;
- (void)settingsEditTransactionWillCommitTransaction:(SKUISettingsEditTransaction *)arg1;
@end

