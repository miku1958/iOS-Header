//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

#import <NanoTimeKitCompanion/NTKCFaceDetailExpandableDescriptionCellDelegate-Protocol.h>

@class NSString, NTKCFaceDetailExpandableDescriptionCell;
@protocol NTKCFaceDetailDescriptionSectionDelegate;

@interface NTKCFaceDetailDescriptionSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailExpandableDescriptionCellDelegate>
{
    BOOL _external;
    id<NTKCFaceDetailDescriptionSectionDelegate> _delegate;
}

@property (strong, nonatomic) NTKCFaceDetailExpandableDescriptionCell *cell; // @dynamic cell;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKCFaceDetailDescriptionSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL external; // @synthesize external=_external;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_descriptionForFace:(id)arg1 inGallery:(BOOL)arg2 orExternal:(BOOL)arg3;
+ (BOOL)hasDescriptionSectionForFace:(id)arg1 inGallery:(BOOL)arg2 orExternal:(BOOL)arg3;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)_faceDescription;
- (void)descriptionCellDidExpand:(id)arg1;
- (void)faceDidChange;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 external:(BOOL)arg4;
- (id)titleForHeader;

@end

