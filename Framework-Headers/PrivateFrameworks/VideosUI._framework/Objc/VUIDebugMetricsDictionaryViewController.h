//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsDictionaryViewController : UITableViewController
{
    NSDictionary *_dictionary;
}

@property (strong, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sortedKeys;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

