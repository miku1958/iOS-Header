//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TeaUI/_TtC5TeaUI23CardSplitViewController.h>

@class NSArray;

@interface _TtC5TeaUI23CardSplitViewController (TeaUI)

@property (nonatomic, readonly) NSArray *keyCommands;

- (void)dismissalTransitionDidEndWithNotification:(id)arg1;
- (void)presentationTransitionDidEndWithNotification:(id)arg1;
- (BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (BOOL)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3;
- (BOOL)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)toggleResponderPane;
@end
