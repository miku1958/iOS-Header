//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, PXMemoriesBlacklistAccessoryViewSpec, UIView;

@interface PXMemoriesBlacklistAccessoryViewController : UIViewController
{
    UIView *_accessoryView;
    PXMemoriesBlacklistAccessoryViewSpec *_viewSpec;
    NSArray *_constraints;
}

@property (strong, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints; // @synthesize constraints=_constraints;
@property (strong, nonatomic) PXMemoriesBlacklistAccessoryViewSpec *viewSpec; // @synthesize viewSpec=_viewSpec;

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)initWithAccessoryView:(id)arg1 viewSpec:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)updateViewConstraints;
- (void)viewDidLoad;

@end

