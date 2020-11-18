//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/MTPlatter-Protocol.h>
#import <UserNotificationsUIKit/MTTitled-Protocol.h>

@class UIScrollView, UITapGestureRecognizer;

@protocol NCCustomContentContainingLookView <MTPlatter, MTTitled>

@property (nonatomic, getter=isActionsHidden) BOOL actionsHidden;
@property (readonly, nonatomic) struct CGSize contentSizeExcludingActions;
@property (nonatomic) unsigned long long customContentLocation;
@property (nonatomic) struct CGSize customContentSize;
@property (nonatomic) BOOL hidesNotificationContent;
@property (readonly, nonatomic) UITapGestureRecognizer *lookViewTapGestureRecognizer;
@property (readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView;
@property (readonly, nonatomic) struct CGSize sizeExcludingActions;

- (struct CGSize)actionsSizeThatFits:(struct CGSize)arg1;
- (struct CGRect)scrollViewFrame;
@end

