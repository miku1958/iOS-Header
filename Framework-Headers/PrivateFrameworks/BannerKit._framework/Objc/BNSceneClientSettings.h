//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplicationSceneClientSettings.h>

@interface BNSceneClientSettings : UIApplicationSceneClientSettings
{
}

@property (readonly, nonatomic) struct UIEdgeInsets bannerContentOutsets;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isPanGestureProxySupported) BOOL panGestureProxySupported;
@property (readonly, nonatomic) struct CGSize preferredContentSize;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

