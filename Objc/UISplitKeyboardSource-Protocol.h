//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputViewSetPlacementOwner-Protocol.h>
#import <UIKit/_UIRemoteKeyboardViewSource-Protocol.h>

@class UIInputViewSetNotificationInfo, UIInputViewSetPlacement, UIView, UIViewController;
@protocol UIInputViewSetPlacementApplicator;

@protocol UISplitKeyboardSource <_UIRemoteKeyboardViewSource, UIInputViewSetPlacementOwner>

@property (readonly, strong, nonatomic) UIViewController *_inputViewController;
@property (readonly, strong, nonatomic) id<UIInputViewSetPlacementApplicator> applicator;
@property (readonly, nonatomic) BOOL isChangingPlacement;
@property (readonly, strong, nonatomic) UIInputViewSetPlacement *placement;
@property (readonly, nonatomic) struct CGPoint positionConstraintConstant;
@property (readonly, strong, nonatomic) UIView *view;

- (UIInputViewSetNotificationInfo *)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
- (void)setInterfaceAutorotationDisabled:(BOOL)arg1;
@end
