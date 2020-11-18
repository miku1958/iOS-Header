//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputViewSetPlacement.h>

#import <UIKit/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacement <NSSecureCoding>
{
    UIInputViewSetPlacement *_actualPlacement;
}

+ (id)placementWithPlacement:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)accessoryViewWillAppear;
- (double)alpha;
- (Class)applicatorClassForKeyboard:(BOOL)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)inputViewWillAppear;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInteractive;
- (BOOL)isUndocked;
- (unsigned long long)notificationsForTransitionToPlacement:(id)arg1;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2;
- (void)setDirty;
- (BOOL)showsInputViews;
- (BOOL)showsKeyboard;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end
