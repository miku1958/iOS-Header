//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKWrapperViewController.h>

@class PKCompactNavigationContainerController;

@interface PKCompactNavigationContainedNavigationWrapperViewController : PKWrapperViewController
{
    PKCompactNavigationContainerController *_parentViewController;
    BOOL _useParentSafeAreaInsets;
}

@property (nonatomic) BOOL useParentSafeAreaInsets; // @synthesize useParentSafeAreaInsets=_useParentSafeAreaInsets;

- (void).cxx_destruct;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL *)arg2;
- (id)initWithWrappedViewController:(id)arg1 parentViewController:(id)arg2;
- (id)initWithWrappedViewController:(id)arg1 type:(long long)arg2;

@end

