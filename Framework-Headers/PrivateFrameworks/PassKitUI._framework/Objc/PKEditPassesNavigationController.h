//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@protocol PKEditPassesNavigationControllerDelegate;

@interface PKEditPassesNavigationController : UINavigationController
{
    id<PKEditPassesNavigationControllerDelegate> _editPassesControllerDelegate;
}

- (void).cxx_destruct;
- (void)_done;
- (id)init;
- (id)initInEditingMode:(BOOL)arg1 delegate:(id)arg2;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end

