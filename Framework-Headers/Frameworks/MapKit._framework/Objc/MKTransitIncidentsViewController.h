//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKTableViewController.h>

@class NSArray;

@interface MKTransitIncidentsViewController : _MKTableViewController
{
    NSArray *_incidents;
}

@property (copy, nonatomic) NSArray *incidents; // @synthesize incidents=_incidents;

- (void).cxx_destruct;
- (id)_cellForRow:(long long)arg1 inSection:(long long)arg2;
- (void)_localeDidChange;
- (void)_updateTitle;
- (void)dealloc;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithIncidents:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end

