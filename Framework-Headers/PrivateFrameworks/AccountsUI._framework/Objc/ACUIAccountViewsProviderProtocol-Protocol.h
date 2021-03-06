//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsUI/NSObject-Protocol.h>

@class ACAccount, NSArray, NSDictionary, NSString;

@protocol ACUIAccountViewsProviderProtocol <NSObject>
- (NSDictionary *)configurationInfoForCreatingAccountWithType:(NSString *)arg1;
- (NSDictionary *)configurationInfoForViewingAccount:(ACAccount *)arg1;
- (NSArray *)supportedAccountTypeIdentifiers;
- (Class)viewControllerClassForCreatingAccountWithType:(NSString *)arg1;
- (Class)viewControllerClassForViewingAccount:(ACAccount *)arg1;

@optional
- (Class)controllerClassForCreatingAccountWithType:(NSString *)arg1;
- (BOOL)setDelegate:(id)arg1 forSignInController:(id)arg2;
@end

