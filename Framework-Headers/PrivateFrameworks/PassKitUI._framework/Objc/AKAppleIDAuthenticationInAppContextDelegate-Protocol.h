//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class AKAppleIDAuthenticationInAppContext;

@protocol AKAppleIDAuthenticationInAppContextDelegate <NSObject>

@optional
- (void)contextDidDismissLoginAlertController:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextDidPresentLoginAlertController:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextWillBeginPresentingSecondaryUI:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextWillDismissLoginAlertController:(AKAppleIDAuthenticationInAppContext *)arg1;
@end

