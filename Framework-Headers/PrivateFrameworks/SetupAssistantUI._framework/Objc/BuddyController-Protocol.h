//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/NSObject-Protocol.h>

@class UINavigationController, UIViewController;
@protocol BuddyControllerDelegate;

@protocol BuddyController <NSObject>
- (void)setDelegate:(id<BuddyControllerDelegate>)arg1;

@optional
+ (BOOL)controllerNeedsToRun;
+ (void)skip;
- (BOOL)controllerAllowsNavigatingBack;
- (void)controllerWasPopped;
- (void)performExtendedInitializationWithCompletion:(void (^)(BOOL))arg1;
- (void)removeFromNavHierarchyOf:(UINavigationController *)arg1;
- (BOOL)shouldAllowStartOver;
- (BOOL)shouldSuppressExtendedInitializationActivityIndicator;
- (void)startOver;
- (UIViewController *)viewController;
- (void)willDisplayStartOver;
@end

