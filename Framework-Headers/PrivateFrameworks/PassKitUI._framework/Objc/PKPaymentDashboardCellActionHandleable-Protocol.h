//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPaymentPass;

@protocol PKPaymentDashboardCellActionHandleable <NSObject>
- (void)beginUpdates;
- (BOOL)enableDisclosure;
- (void)endUpdates:(BOOL)arg1;
- (PKPaymentPass *)pass;
- (long long)viewType;

@optional
- (void)setActionHandler:(void (^)(UIView<PKPaymentDashboardCellActionHandleable> *, PKPaymentPassAction *))arg1;
@end

