//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

#import <UIKitCore/UIDebuggingInformationViewController-Protocol.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface UIDebuggingIvarViewController : UITableViewController <UIDebuggingInformationViewController>
{
    NSObject *_inspectedObject;
}

@property (weak, nonatomic) NSObject *inspectedObject; // @synthesize inspectedObject=_inspectedObject;

- (void).cxx_destruct;
- (Class)_classForTableSection:(long long)arg1;
- (id)_classHierarchyForInspectedObject;
- (id)_ivarForIndexPath:(id)arg1;
- (id)_ivarsForInspectedObjectInClass:(Class)arg1;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepareForDisplayAsTopLevelDebuggingViewController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
