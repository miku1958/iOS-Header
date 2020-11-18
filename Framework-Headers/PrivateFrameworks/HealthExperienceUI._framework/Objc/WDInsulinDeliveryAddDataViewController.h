//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthExperienceUI/WDDisplayTypeAddDataViewController.h>

#import <HealthExperienceUI/WDAddDataManualEntryItemDelegate-Protocol.h>
#import <HealthExperienceUI/WDAddDataManualEntrySpinnerDataSource-Protocol.h>

@class NSString, WDAddDataManualEntryItem, WDAddDataManualEntrySpinner;

@interface WDInsulinDeliveryAddDataViewController : WDDisplayTypeAddDataViewController <WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_dateTimeEntryItem;
    WDAddDataManualEntrySpinner *_deliveryReasonEntryItem;
}

@property (strong, nonatomic) WDAddDataManualEntryItem *dateTimeEntryItem; // @synthesize dateTimeEntryItem=_dateTimeEntryItem;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) WDAddDataManualEntrySpinner *deliveryReasonEntryItem; // @synthesize deliveryReasonEntryItem=_deliveryReasonEntryItem;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultMetadata;
- (id)generateHKObjects;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)manualEntryItemsForSection:(long long)arg1;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (long long)numberOfSections;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;

@end
