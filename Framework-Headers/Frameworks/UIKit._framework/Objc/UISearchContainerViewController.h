//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UISearchController;

@interface UISearchContainerViewController : UIViewController
{
    UISearchController *_searchController;
}

@property (strong, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;

- (void).cxx_destruct;
- (void)_prepareForContainerTransition:(id)arg1;
- (void)_presentSearchControllerIfNecessary;
- (BOOL)_transitionsChildViewControllers;
- (void)_updateSearchControllerIfNecessary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

