//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsImpressionViewController : UITableViewController
{
    NSArray *_array;
}

@property (strong, nonatomic) NSArray *array; // @synthesize array=_array;

- (void).cxx_destruct;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
