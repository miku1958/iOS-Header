//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIMessageActivity.h>

#import <PhotosUI/PXMomentShareSuggestionHandlingActivity-Protocol.h>

@class NSString;
@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUMessageActivity : UIMessageActivity <PXMomentShareSuggestionHandlingActivity>
{
    id<PXActivityItemSourceController> _itemSourceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController; // @synthesize itemSourceController=_itemSourceController;
@property (readonly) Class superclass;

+ (BOOL)canPerformActivityAsIndividualItemsInSourceController:(id)arg1;
- (void).cxx_destruct;
- (void)_prepareWithMomentShareLink:(id)arg1;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;

@end
