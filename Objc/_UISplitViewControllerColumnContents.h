//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UINavigationController, UIViewController;

__attribute__((visibility("hidden")))
@interface _UISplitViewControllerColumnContents : NSObject
{
    UIViewController *_viewController;
    UINavigationController *_navigationController;
    UIViewController *_navigationControllerWrapper;
}

@property (readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (readonly, nonatomic) UIViewController *navigationControllerWrapper; // @synthesize navigationControllerWrapper=_navigationControllerWrapper;
@property (readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (id)description;
- (id)initWithViewController:(id)arg1 navigationController:(id)arg2 navigationControllerWrapper:(id)arg3;

@end

