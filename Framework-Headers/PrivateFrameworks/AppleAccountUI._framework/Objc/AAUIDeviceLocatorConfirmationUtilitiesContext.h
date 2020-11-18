//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSDictionary, NSString, UIViewController;

@interface AAUIDeviceLocatorConfirmationUtilitiesContext : NSObject
{
    ACAccount *_account;
    NSString *_message;
    NSString *_buttonTitle;
    NSDictionary *_customRequestHeaders;
    UIViewController *_presentingViewController;
}

@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property (strong, nonatomic) NSDictionary *customRequestHeaders; // @synthesize customRequestHeaders=_customRequestHeaders;
@property (strong, nonatomic) NSString *message; // @synthesize message=_message;
@property (strong, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

- (void).cxx_destruct;

@end
