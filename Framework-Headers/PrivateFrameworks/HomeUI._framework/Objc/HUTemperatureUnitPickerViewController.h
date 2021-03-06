//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <HomeUI/HFItemManagerDelegate-Protocol.h>

@class HFSimpleItemManager, NSString;

@interface HUTemperatureUnitPickerViewController : UITableViewController <HFItemManagerDelegate>
{
    HFSimpleItemManager *_itemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFSimpleItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_controlItem;
- (long long)_tableRowToTemperatureUnit:(unsigned long long)arg1;
- (id)initWithUnitItem:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

