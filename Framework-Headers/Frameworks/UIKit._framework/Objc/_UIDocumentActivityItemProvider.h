//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIDocumentActivityItemProvider : UIActivityItemProvider
{
    UIDocumentInteractionController *_documentInteractionController;
}

@property (weak) UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;

- (void).cxx_destruct;
- (BOOL)_activitySupportsPromiseURLs;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)item;
- (void)main;

@end
