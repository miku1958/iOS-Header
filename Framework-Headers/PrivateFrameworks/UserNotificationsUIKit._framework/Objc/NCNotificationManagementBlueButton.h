//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <UserNotificationsUIKit/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UIColor;

@interface NCNotificationManagementBlueButton : UIButton <UIPointerInteractionDelegate>
{
    UIColor *_backgroundColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)buttonWithTitle:(id)arg1;
- (void).cxx_destruct;
- (id)backgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;

@end

