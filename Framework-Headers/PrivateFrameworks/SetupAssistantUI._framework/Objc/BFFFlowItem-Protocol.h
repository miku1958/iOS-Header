//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/NSObject-Protocol.h>

@class BFFNavigationController, NSString, UIViewController;
@protocol BFFFlowItemDelegate;

@protocol BFFFlowItem <NSObject>
+ (NSString *)cloudConfigSkipKey;
- (void)setDelegate:(id<BFFFlowItemDelegate>)arg1;

@optional
+ (BOOL)controllerAffectedByTapFreeSetup;
+ (BOOL)controllerNeedsToRun;
+ (void)skippedByCloudConfig;
- (void)cancelHostedPresentation;
- (BOOL)controllerAllowsNavigatingBack;
- (void)controllerWasPopped;
- (void)handleDebugGesture;
- (BOOL)isEphemeral;
- (void)performExtendedInitializationWithCompletion:(void (^)(BOOL))arg1;
- (void)presentHostedViewControllerOnNavigationController:(BFFNavigationController *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)setNavigationController:(BFFNavigationController *)arg1;
- (BOOL)shouldAllowStartOver;
- (BOOL)shouldSuppressExtendedInitializationActivityIndicator;
- (void)startOver;
- (UIViewController *)viewController;
- (void)willDisplayStartOver;
@end

