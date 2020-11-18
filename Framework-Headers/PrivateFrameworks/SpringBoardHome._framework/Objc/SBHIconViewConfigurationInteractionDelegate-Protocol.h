//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIconView, UIView, UIViewController;
@protocol SBHIconViewConfigurationInteraction;

@protocol SBHIconViewConfigurationInteractionDelegate <NSObject>
- (UIViewController *)containerViewControllerForConfigurationInteraction:(id<SBHIconViewConfigurationInteraction>)arg1;
- (SBIconView *)sourceIconViewForConfigurationInteraction:(id<SBHIconViewConfigurationInteraction>)arg1;

@optional
- (void)configurationInteractionDidBegin:(id<SBHIconViewConfigurationInteraction>)arg1;
- (void)configurationInteractionDidCommit:(id<SBHIconViewConfigurationInteraction>)arg1;
- (void)configurationInteractionDidEnd:(id<SBHIconViewConfigurationInteraction>)arg1;
- (void)configurationInteractionWillBegin:(id<SBHIconViewConfigurationInteraction>)arg1;
- (void)configurationInteractionWillEnd:(id<SBHIconViewConfigurationInteraction>)arg1;
- (struct CGRect)contentBoundingRectForConfigurationInteraction:(id<SBHIconViewConfigurationInteraction>)arg1;
- (UIView *)homeScreenContentViewForConfigurationInteraction:(id<SBHIconViewConfigurationInteraction>)arg1;
- (SBIconView *)referenceIconViewForConfigurationInteraction:(id<SBHIconViewConfigurationInteraction>)arg1;
@end
