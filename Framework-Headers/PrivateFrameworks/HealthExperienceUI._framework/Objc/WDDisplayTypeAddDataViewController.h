//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthExperienceUI/WDAddDataViewController.h>

#import <HealthExperienceUI/WDAddDataManualEntryItemDelegate-Protocol.h>

@class NSString, WDAddDataManualEntryItem;

@interface WDDisplayTypeAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_dateTimeEntryItem;
    WDAddDataManualEntryItem *_valueFieldManualEntryItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) WDAddDataManualEntryItem *valueFieldManualEntryItem; // @synthesize valueFieldManualEntryItem=_valueFieldManualEntryItem;

- (void).cxx_destruct;
- (void)_setDefaultValuesIfNecessary;
- (void)_updateManualEntryItemWithCurrentBMI:(id)arg1;
- (id)createValueFieldManualEntryItem;
- (id)defaultEditingItem;
- (id)generateHKObjects;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;

@end
