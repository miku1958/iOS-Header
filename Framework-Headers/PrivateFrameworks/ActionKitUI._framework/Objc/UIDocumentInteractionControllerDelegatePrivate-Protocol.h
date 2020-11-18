//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKitUI/UIDocumentInteractionControllerDelegate-Protocol.h>

@class NSArray, NSURL, QLPreviewController, UIDocumentInteractionController, UIImage, UIPrintInfo;

@protocol UIDocumentInteractionControllerDelegatePrivate <UIDocumentInteractionControllerDelegate>

@optional
- (id)activityItemForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (NSArray *)additionalActivitiesForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (NSArray *)documentInteractionControllerMarkupDismissActions:(UIDocumentInteractionController *)arg1;
- (UIImage *)documentInteractionControllerTransitionImageForPreview:(UIDocumentInteractionController *)arg1 contentRect:(struct CGRect *)arg2;
- (NSArray *)excludedActivityTypesForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (void)previewController:(QLPreviewController *)arg1 willMarkUpAtURL:(NSURL *)arg2;
- (UIPrintInfo *)printInfoForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
@end
