//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIInputViewSet, UIKBKeyplaneChangeContext, UIView;
@protocol _UIRemoteKeyboardControllerDelegate;

@protocol _UIRemoteKeyboardViewSource <NSObject>

@property (strong, nonatomic) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate;
@property (nonatomic) BOOL dontDismissReachability;
@property (readonly, nonatomic) UIView *hostView;
@property (readonly, nonatomic) UIInputViewSet *inputViewSet;
@property (readonly, nonatomic) BOOL isOnScreenRotating;

- (void)checkPlaceholdersForRemoteKeyboards;
- (void)updateForKeyplaneChangeWithContext:(UIKBKeyplaneChangeContext *)arg1;
@end

