//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UITableViewDataSource-Protocol.h>
#import <UIKit/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationOverlayAutoLayoutTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_verticalConstraints;
    NSArray *_horizontalConstraints;
    UITableView *_tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *horizontalConstraints; // @synthesize horizontalConstraints=_horizontalConstraints;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property (strong, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;

- (void).cxx_destruct;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refresh;
- (void)switchChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
