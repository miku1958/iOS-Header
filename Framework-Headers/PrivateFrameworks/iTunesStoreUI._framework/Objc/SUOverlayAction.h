//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SUOverlayTransition, UIViewController;

@interface SUOverlayAction : NSObject
{
    long long _animationCount;
    UIViewController *_otherViewController;
    SUOverlayTransition *_transition;
    int _type;
    UIViewController *_viewController;
}

@property (nonatomic) int actionType; // @synthesize actionType=_type;
@property (nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property (strong, nonatomic) UIViewController *otherViewController; // @synthesize otherViewController=_otherViewController;
@property (strong, nonatomic) SUOverlayTransition *transition; // @synthesize transition=_transition;
@property (strong, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void)dealloc;

@end
