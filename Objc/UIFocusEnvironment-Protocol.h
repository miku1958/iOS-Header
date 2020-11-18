//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSString, UIFocusAnimationCoordinator, UIFocusUpdateContext, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@protocol UIFocusEnvironment <NSObject>

@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;

- (void)didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (void)setNeedsFocusUpdate;
- (BOOL)shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)updateFocusIfNeeded;

@optional
- (NSString *)soundIdentifierForFocusUpdateInContext:(UIFocusUpdateContext *)arg1;
@end

