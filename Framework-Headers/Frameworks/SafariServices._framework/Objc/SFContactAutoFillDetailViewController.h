//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class SFContactAutoFillPropertyValues;

__attribute__((visibility("hidden")))
@interface SFContactAutoFillDetailViewController : UITableViewController
{
    SFContactAutoFillPropertyValues *_propertyValues;
}

- (void).cxx_destruct;
- (id)initWithPropertyValues:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

