//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotosGridActionPerformer.h>

#import <PhotosUICore/PXContentFilterControllerDelegate-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, PXUIContentFilterController;

@interface PXPhotosGridFilterContentActionPerformer : PXPhotosGridActionPerformer <UIPopoverPresentationControllerDelegate, PXContentFilterControllerDelegate>
{
    PXUIContentFilterController *_contentFilterController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)canPerformActionType:(id)arg1 withViewModel:(id)arg2;
- (void).cxx_destruct;
- (id)activitySystemImageName;
- (id)activityType;
- (void)contentFilterController:(id)arg1 filterStateChanged:(id)arg2;
- (void)contentFilterControllerDidComplete:(id)arg1;
- (id)contentFilterHiddenTypes;
- (id)initWithViewModel:(id)arg1 actionType:(id)arg2;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performUserInteractionTask;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;

@end

