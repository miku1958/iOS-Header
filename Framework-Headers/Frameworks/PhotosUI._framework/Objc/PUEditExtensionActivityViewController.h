//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@protocol PUEditExtensionActivityViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUEditExtensionActivityViewController : UIActivityViewController
{
    id<PUEditExtensionActivityViewControllerDelegate> _editExtensionActivityViewControllerDelegate;
}

@property (weak, nonatomic) id<PUEditExtensionActivityViewControllerDelegate> editExtensionActivityViewControllerDelegate; // @synthesize editExtensionActivityViewControllerDelegate=_editExtensionActivityViewControllerDelegate;

- (void).cxx_destruct;
- (void)_performActivity:(id)arg1;
- (BOOL)_shouldUseModernDesign;
- (BOOL)appWantsLargePreview;
- (BOOL)isPhotosOrCamera;

@end
