//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>
#import <HealthUI/HKMedicalIDEditorCellHeightChangeDelegate-Protocol.h>
#import <HealthUI/UIImagePickerControllerDelegate-Protocol.h>
#import <HealthUI/UINavigationControllerDelegate-Protocol.h>

@class HKMedicalIDEditorNameAndPhotoCell, NSString;
@protocol HKEmergencyCardRowHeightChangeDelegate;

@interface HKEmergencyCardNameAndPictureTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    HKMedicalIDEditorNameAndPhotoCell *_cell;
    id<HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate; // @synthesize rowHeightChangeDelegate=_rowHeightChangeDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cell;
- (double)_cellFittedHeightWithWidth:(double)arg1;
- (void)_editPhotoTapped:(id)arg1;
- (void)commitEditing;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initInEditMode:(BOOL)arg1;
- (void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;
- (void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)setData:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)title;

@end
