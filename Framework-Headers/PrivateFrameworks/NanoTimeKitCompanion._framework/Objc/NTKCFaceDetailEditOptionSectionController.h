//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@class NSDictionary, NTKCFaceDetailRowActionCell, NTKEditOptionCollection, NTKFaceView;
@protocol NTKCFaceDetailEditOptionSectionDelegate;

@interface NTKCFaceDetailEditOptionSectionController : NTKCFaceDetailSectionController
{
    NTKEditOptionCollection *_collection;
    NTKFaceView *_faceView;
    NSDictionary *_selectedOptions;
    id<NTKCFaceDetailEditOptionSectionDelegate> _delegate;
    Class _editCellClass;
    NTKCFaceDetailRowActionCell *_actionRow;
}

@property (strong, nonatomic) NTKCFaceDetailRowActionCell *actionRow; // @synthesize actionRow=_actionRow;
@property (strong, nonatomic) NTKEditOptionCollection *collection; // @synthesize collection=_collection;
@property (weak, nonatomic) id<NTKCFaceDetailEditOptionSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) Class editCellClass; // @synthesize editCellClass=_editCellClass;
@property (weak, nonatomic) NTKFaceView *faceView; // @synthesize faceView=_faceView;
@property (strong, nonatomic) NSDictionary *selectedOptions; // @synthesize selectedOptions=_selectedOptions;

- (void).cxx_destruct;
- (id)_actionNameForOption:(id)arg1;
- (BOOL)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2;
- (BOOL)_canSelectRow:(long long)arg1;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (void)_dequeueActionRow;
- (BOOL)_handleDidSelectActionRowForOption:(id)arg1;
- (BOOL)_handleDidSelectOption:(id)arg1;
- (id)_initWithTableView:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (void)_refreshActionRowContent;
- (BOOL)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)faceDidChange;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (void)reloadActionRow;

@end

