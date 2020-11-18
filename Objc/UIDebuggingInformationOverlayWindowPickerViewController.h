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
@interface UIDebuggingInformationOverlayWindowPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    NSArray *_windows;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property (strong, nonatomic) NSArray *windows; // @synthesize windows=_windows;

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

