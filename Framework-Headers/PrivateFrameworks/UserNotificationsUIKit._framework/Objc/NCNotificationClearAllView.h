//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface NCNotificationClearAllView : UIView
{
    UILabel *_clearAllLabel;
    CDUnknownBlockType _clearAllHandler;
}

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithClearAllHandler:(CDUnknownBlockType)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

