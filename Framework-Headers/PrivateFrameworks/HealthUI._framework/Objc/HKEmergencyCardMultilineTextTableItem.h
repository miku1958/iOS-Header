//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>
#import <HealthUI/HKMedicalIDEditorCellHeightChangeDelegate-Protocol.h>

@class HKMedicalIDEditorMultilineStringCell, _HKMedicalIDMultilineStringCell;
@protocol HKEmergencyCardRowHeightChangeDelegate;

@interface HKEmergencyCardMultilineTextTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate>
{
    _HKMedicalIDMultilineStringCell *_labelCell;
    HKMedicalIDEditorMultilineStringCell *_editableCell;
    id<HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;
}

@property (weak, nonatomic) id<HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate; // @synthesize rowHeightChangeDelegate=_rowHeightChangeDelegate;

- (void).cxx_destruct;
- (id)_cell;
- (double)_cellFittedHeightWithWidth:(double)arg1;
- (void)_configureEditableCell:(id)arg1;
- (id)_editableCell;
- (id)_labelCell;
- (id)_multilineStringValue;
- (id)_placeholderText;
- (void)_updateMultilineStringValueWithValue:(id)arg1;
- (void)commitEditing;
- (void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;
- (void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)setData:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;

@end

