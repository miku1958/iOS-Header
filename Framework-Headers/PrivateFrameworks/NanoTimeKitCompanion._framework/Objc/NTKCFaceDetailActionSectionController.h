//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@class NTKCFaceDetailActionCell;
@protocol NTKCFaceDetailActionSectionDelegate;

@interface NTKCFaceDetailActionSectionController : NTKCFaceDetailSectionController
{
    id<NTKCFaceDetailActionSectionDelegate> _delegate;
    NTKCFaceDetailActionCell *_selectCell;
    NTKCFaceDetailActionCell *_deleteCell;
}

@property (weak, nonatomic) id<NTKCFaceDetailActionSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NTKCFaceDetailActionCell *deleteCell; // @synthesize deleteCell=_deleteCell;
@property (strong, nonatomic) NTKCFaceDetailActionCell *selectCell; // @synthesize selectCell=_selectCell;

- (void).cxx_destruct;
- (long long)_actionForRow:(long long)arg1;
- (BOOL)_canSelectRow:(long long)arg1;
- (void)_commonInit;
- (id)_spacerCell;
- (id)cellForRow:(long long)arg1;
- (void)didSelectRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (long long)numberOfRows;

@end

