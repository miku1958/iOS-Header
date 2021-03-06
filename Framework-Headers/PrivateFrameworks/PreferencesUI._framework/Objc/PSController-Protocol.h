//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PreferencesUI/PSStateRestoration-Protocol.h>

@class NSBundle, NSDictionary, NSMutableArray, NSString, PSRootController, PSSearchEntry, PSSpecifier, UIViewController;
@protocol PSController;

@protocol PSController <PSStateRestoration>
- (void)handleURL:(NSDictionary *)arg1 withCompletion:(void (^)(void))arg2;
- (UIViewController<PSController> *)parentController;
- (id)readPreferenceValue:(PSSpecifier *)arg1;
- (PSRootController *)rootController;
- (void)setParentController:(UIViewController<PSController> *)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(PSSpecifier *)arg2;
- (void)setRootController:(PSRootController *)arg1;
- (void)setSpecifier:(PSSpecifier *)arg1;
- (void)showController:(UIViewController *)arg1;
- (void)showController:(UIViewController *)arg1 animate:(BOOL)arg2;
- (PSSpecifier *)specifier;

@optional
+ (void)formatSearchEntries:(NSMutableArray *)arg1 parent:(PSSearchEntry *)arg2;
+ (NSBundle *)searchBundle;
+ (void)validateSpecifier:(PSSpecifier *)arg1;
- (void)didLock;
- (void)didUnlock;
- (void)didWake;
- (void)handleURL:(NSDictionary *)arg1;
- (void)highlightSpecifierWithID:(NSString *)arg1;
- (BOOL)prepareHandlingURLForSpecifierID:(NSString *)arg1 resourceDictionary:(NSDictionary *)arg2 animatePush:(BOOL *)arg3;
- (BOOL)prepareHandlingURLForSpecifierID:(NSString *)arg1 resourceDictionary:(NSDictionary *)arg2 animatePush:(BOOL *)arg3 withCompletion:(void (^)(void))arg4;
- (void)pushController:(UIViewController *)arg1;
- (void)pushController:(UIViewController *)arg1 animate:(BOOL)arg2;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)suspend;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)willUnlock;
@end

