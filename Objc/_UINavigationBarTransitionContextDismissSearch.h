//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UINavigationBarTransitionContext.h>

@class UISearchBar;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext
{
    UISearchBar *_transitioningSearchBar;
}

- (void).cxx_destruct;
- (void)animate;
- (void)cancel;
- (void)complete;
- (void)prepare;
- (int)transition;

@end

