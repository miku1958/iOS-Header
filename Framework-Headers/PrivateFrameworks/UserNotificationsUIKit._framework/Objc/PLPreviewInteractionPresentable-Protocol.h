//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class UIView;
@protocol PLPreviewInteractionPresenting;

@protocol PLPreviewInteractionPresentable <NSObject>

@property (weak, nonatomic) id<PLPreviewInteractionPresenting> presenter;
@property (readonly, nonatomic) UIView *viewForTouchContinuation;
@property (readonly, nonatomic) UIView *viewWithContent;


@optional
@end

