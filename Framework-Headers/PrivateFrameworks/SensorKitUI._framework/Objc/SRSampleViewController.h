//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, SRAuthorizationGroup;

@interface SRSampleViewController : UITableViewController
{
    NSArray *_sampleDataEntries;
    NSString *_note;
    SRAuthorizationGroup *_authGroup;
}

@property (strong, nonatomic) SRAuthorizationGroup *authGroup; // @synthesize authGroup=_authGroup;
@property (strong, nonatomic) NSString *note; // @synthesize note=_note;
@property (strong, nonatomic) NSArray *sampleDataEntries; // @synthesize sampleDataEntries=_sampleDataEntries;

+ (id)sampleViewControllerForAuthGroup:(id)arg1;
- (void)dealloc;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)prepareEndRowWithText:(id)arg1 detailText:(id)arg2;
- (id)prepareExtendedRowWithText:(id)arg1;
- (id)sortedKeysForDictionary:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;

@end

