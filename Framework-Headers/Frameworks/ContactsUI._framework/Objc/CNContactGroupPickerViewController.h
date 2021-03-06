//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView;
@protocol CNContactGroupPickerDelegate;

__attribute__((visibility("hidden")))
@interface CNContactGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_pickableGroups;
    UITableView *_tableView;
    NSArray *_prohibitedPropertyKeys;
    id<CNContactGroupPickerDelegate> _groupPickerDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<CNContactGroupPickerDelegate> groupPickerDelegate; // @synthesize groupPickerDelegate=_groupPickerDelegate;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *prohibitedPropertyKeys; // @synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys;
@property (readonly) Class superclass;

+ (id)pickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3;
+ (BOOL)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2;
+ (BOOL)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3;
+ (id)propertySections;
- (void).cxx_destruct;
- (id)_loadPickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)initWithGroups:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewWillAppear:(BOOL)arg1;

@end

