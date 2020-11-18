//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class NSError, QLItem;

__attribute__((visibility("hidden")))
@interface QLErrorItemViewController : QLItemViewController
{
    NSError *_error;
    QLItem *_previewItem;
}

@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong) QLItem *previewItem; // @synthesize previewItem=_previewItem;

- (void).cxx_destruct;
- (void)_updateLabelsWithCurrentErrorIfNeeded;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (BOOL)canSwipeToDismiss;
- (id)errorView;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadView;

@end

