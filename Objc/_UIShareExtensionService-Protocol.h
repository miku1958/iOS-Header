//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UISUIActivityViewControllerConfiguration;

@protocol _UIShareExtensionService <NSObject>
- (void)_closeWithCompletion:(void (^)(void))arg1;
- (void)_viewControllerWasDismissed;
- (void)cleanupWithSelectedActivityType:(NSString *)arg1;
- (void)displayInitialUI;
- (void)performHostInitiatedActivityWithActivityType:(NSString *)arg1 executionEnvironment:(long long)arg2;
- (void)setActivityViewControllerConfiguration:(UISUIActivityViewControllerConfiguration *)arg1;
- (void)setIsLoadingActivityItemProviders:(BOOL)arg1;
- (void)setNeedsRequestingSharedItemsWithSharedItemsAvailable:(BOOL)arg1;
- (void)setOtherActivityViewPresented:(BOOL)arg1;
- (void)setPresentedContextUsesDiscreteDismissButton:(BOOL)arg1;
@end

