//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIBarButtonItem.h>

@protocol UISplitViewControllerImpl;

__attribute__((visibility("hidden")))
@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem
{
    BOOL _hasBeenUsed;
    id<UISplitViewControllerImpl> _impl;
}

@property (readonly, nonatomic, getter=_hasBeenUsed) BOOL hasBeenUsed; // @synthesize hasBeenUsed=_hasBeenUsed;
@property (weak, nonatomic, getter=_impl, setter=_setImpl:) id<UISplitViewControllerImpl> impl; // @synthesize impl=_impl;

- (void).cxx_destruct;
- (void)_setOwningNavigationItem:(id)arg1;
- (void)_wasUsed;
- (SEL)action;
- (id)target;

@end
