//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIViewController;

@interface GKNavigationControllerDeferredTransitionInfo : NSObject
{
    BOOL _animated;
    int _type;
    UIViewController *_viewController;
}

@property (nonatomic) BOOL animated; // @synthesize animated=_animated;
@property (nonatomic) int type; // @synthesize type=_type;
@property (strong, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void)dealloc;

@end

