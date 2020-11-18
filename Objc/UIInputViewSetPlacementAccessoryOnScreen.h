//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputViewSetPlacement.h>

#import <UIKit/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementAccessoryOnScreen : UIInputViewSetPlacement <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (BOOL)accessoryViewWillAppear;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1;
- (BOOL)showsInputViews;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end
