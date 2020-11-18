//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthUI/HKCDADocumentTableViewCellDelegate-Protocol.h>

@class HKHealthStore, HKSource, NSMutableArray, NSMutableSet, NSSet;
@protocol HKDocumentPickerViewControllerDelegate;

@interface HKDocumentPickerViewController : HKTableViewController <HKCDADocumentTableViewCellDelegate>
{
    NSMutableArray *_samplesList;
    long long _presentationStyle;
    HKHealthStore *_healthStore;
    BOOL _hasPendingDocumentFetch;
    HKSource *_source;
    BOOL _showCheckboxes;
    NSSet *_allSamples;
    NSMutableSet *_enabledSamples;
    id<HKDocumentPickerViewControllerDelegate> _delegate;
}

@property (readonly, nonatomic) NSSet *allSamples; // @synthesize allSamples=_allSamples;
@property (weak, nonatomic) id<HKDocumentPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSMutableSet *enabledSamples; // @synthesize enabledSamples=_enabledSamples;
@property (strong, nonatomic) HKSource *source; // @synthesize source=_source;

- (void).cxx_destruct;
- (void)_addCancelAndDoneButtons;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)_enableDocumentSample:(id)arg1 enabled:(BOOL)arg2;
- (void)_finishWithError:(id)arg1;
- (BOOL)_isPrompting;
- (BOOL)_needsSampleRequestDescription;
- (id)_tableHeaderView;
- (void)cdaDocumentTableViewCellDidChangeValue:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentAuthorizations:(id)arg1;
- (id)initWithDocuments:(id)arg1 presentationStyle:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pushDetailForDocumentSample:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

