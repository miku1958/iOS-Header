//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppPredictionUI/NSObject-Protocol.h>

@class APUILongLookViewController;

@protocol APUILongLookViewControllerDelegate <NSObject>
- (void)longLookPlatterDidReceiveTap:(APUILongLookViewController *)arg1;

@optional
- (void)longLookPlatterDidTapUtilityButton:(APUILongLookViewController *)arg1;
- (BOOL)longLookPlatterShouldShowUtilityButton:(APUILongLookViewController *)arg1;
@end

