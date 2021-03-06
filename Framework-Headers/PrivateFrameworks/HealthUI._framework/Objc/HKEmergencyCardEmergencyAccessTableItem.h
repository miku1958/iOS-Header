//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardGroupTableItem.h>

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>

@class HKEmergencyCardEnabledTableItem, HKEmergencyCardFooterTableItem, HKEmergencyCardShareInfoTableItem, UITableViewCell;

@interface HKEmergencyCardEmergencyAccessTableItem : HKEmergencyCardGroupTableItem <HKMedicalIDEditorCellEditDelegate>
{
    UITableViewCell *_lastDequeuedAddContactCell;
    HKEmergencyCardShareInfoTableItem *_shareInfoTableItem;
    HKEmergencyCardEnabledTableItem *_enabledTableItem;
    HKEmergencyCardFooterTableItem *_enabledFooterItem;
    HKEmergencyCardFooterTableItem *_shareInfoFooterItem;
    BOOL _showsShowWhenLockedState;
    BOOL _showsEmergencyAccessState;
}

@property (nonatomic) BOOL showsEmergencyAccessState; // @synthesize showsEmergencyAccessState=_showsEmergencyAccessState;
@property (nonatomic) BOOL showsShowWhenLockedState; // @synthesize showsShowWhenLockedState=_showsShowWhenLockedState;

- (void).cxx_destruct;
- (BOOL)hasPresentableData;
- (id)initInEditMode:(BOOL)arg1 shouldShowLocked:(BOOL)arg2 shouldShareInfo:(BOOL)arg3;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (struct UIEdgeInsets)separatorInset;
- (void)setIsSecondaryProfile:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)titleForHeader;
- (id)viewOnlyTitle;

@end

