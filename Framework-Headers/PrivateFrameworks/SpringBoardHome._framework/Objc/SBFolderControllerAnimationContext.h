//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScreen, UIView, UIWindow;

@interface SBFolderControllerAnimationContext : NSObject
{
    UIScreen *_screen;
    UIWindow *_animationWindow;
    UIView *_fallbackIconContainer;
}

@property (readonly, nonatomic) UIWindow *animationWindow; // @synthesize animationWindow=_animationWindow;
@property (readonly, nonatomic) UIView *fallbackIconContainer; // @synthesize fallbackIconContainer=_fallbackIconContainer;
@property (readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;

+ (id)contextWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3;
- (void).cxx_destruct;
- (id)initWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3;

@end

