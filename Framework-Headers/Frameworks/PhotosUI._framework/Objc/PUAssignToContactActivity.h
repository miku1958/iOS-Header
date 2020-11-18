//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAssignToContactActivity.h>

#import <PhotosUI/PXActivity-Protocol.h>
#import <PhotosUI/UINavigationControllerDelegate-Protocol.h>

@class NSString;
@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUAssignToContactActivity : UIAssignToContactActivity <UINavigationControllerDelegate, PXActivity>
{
    id<PXActivityItemSourceController> _itemSourceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController; // @synthesize itemSourceController=_itemSourceController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_embeddedActivityViewController;
- (id)_systemImageName;
- (id)activityViewController;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;

@end
