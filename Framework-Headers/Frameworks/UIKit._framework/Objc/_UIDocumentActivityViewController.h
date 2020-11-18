//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIDocumentActivityViewController : UIActivityViewController
{
    BOOL _hideSystemActivities;
    UIDocumentInteractionController *_documentInteractionController;
    UIDocumentInteractionController *_documentInteractionControllerRetained;
}

@property (weak, nonatomic) UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
@property (strong, nonatomic) UIDocumentInteractionController *documentInteractionControllerRetained; // @synthesize documentInteractionControllerRetained=_documentInteractionControllerRetained;
@property (nonatomic) BOOL hideSystemActivities; // @synthesize hideSystemActivities=_hideSystemActivities;

- (void).cxx_destruct;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (BOOL)sourceIsManaged;

@end
