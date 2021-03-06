//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

#import <NanoTimeKitCompanion/NTKCFaceDetailToggleCellDelegate-Protocol.h>

@class NSString, NTKCFaceDetailMonogramComplicationCell, NTKCFaceDetailMonogramEditCell, NTKCFaceDetailShowSecondsCell;
@protocol NTKCFaceDetailOtherSectionDelegate;

@interface NTKCFaceDetailOtherSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate>
{
    id<NTKCFaceDetailOtherSectionDelegate> _delegate;
    NTKCFaceDetailMonogramComplicationCell *_monogramCell;
    NTKCFaceDetailMonogramEditCell *_monogramEditCell;
    NTKCFaceDetailShowSecondsCell *_showSecondsCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKCFaceDetailOtherSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NTKCFaceDetailMonogramComplicationCell *monogramCell; // @synthesize monogramCell=_monogramCell;
@property (strong, nonatomic) NTKCFaceDetailMonogramEditCell *monogramEditCell; // @synthesize monogramEditCell=_monogramEditCell;
@property (strong, nonatomic) NTKCFaceDetailShowSecondsCell *showSecondsCell; // @synthesize showSecondsCell=_showSecondsCell;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addMonogramEditRow;
- (BOOL)_canSelectRow:(long long)arg1;
- (void)_commonInit;
- (void)_removeMonogramEditRow;
- (void)addMonogramRowForSlot:(id)arg1;
- (void)addShowSecondsRow:(id)arg1;
- (void)didSelectRow:(long long)arg1;
- (void)faceDidChange;
- (void)removeMonogramRow;
- (void)removeShowSecondsRow;
- (id)titleForHeader;
- (void)toggleCell:(id)arg1 didToggle:(BOOL)arg2;

@end

