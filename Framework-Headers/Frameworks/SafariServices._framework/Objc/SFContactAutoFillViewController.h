//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class CNContact, NSArray;
@protocol SFContactAutoFillViewControllerFiller;

__attribute__((visibility("hidden")))
@interface SFContactAutoFillViewController : UITableViewController
{
    CNContact *_contact;
    NSArray *_matches;
    NSArray *_propertyValues;
    id<SFContactAutoFillViewControllerFiller> _autoFiller;
}

@property (weak, nonatomic) id<SFContactAutoFillViewControllerFiller> autoFiller; // @synthesize autoFiller=_autoFiller;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (id)_valueForProperty:(id)arg1 identifier:(id)arg2;
- (void)autoFill:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (id)initWithMatches:(id)arg1 contact:(id)arg2;
- (id)matchesForProperty:(id)arg1;
- (id)properties;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)valuesFromPropertyMatches:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

