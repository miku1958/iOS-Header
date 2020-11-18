//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFCompactDialogViewController.h>

#import <WorkflowUI/QLPreviewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFCompactContentPreviewViewControllerDelegate-Protocol.h>

@class NSString, WFCompactContentPreviewViewController, WFCompactHighlightedView, WFContentCollection;

@interface WFShowContentDialogViewController : WFCompactDialogViewController <WFCompactContentPreviewViewControllerDelegate, QLPreviewControllerDelegate>
{
    WFCompactHighlightedView *_highlightView;
    WFCompactContentPreviewViewController *_previewViewController;
    WFContentCollection *_dataSource;
}

@property (strong, nonatomic) WFContentCollection *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) WFCompactHighlightedView *highlightView; // @synthesize highlightView=_highlightView;
@property (strong, nonatomic) WFCompactContentPreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2;
- (double)contentHeightWithPreferredHeight:(double)arg1 maxVisibleHeight:(double)arg2;
- (void)handleTapGesture:(id)arg1;
- (void)loadView;
- (void)presentFullScreenPreview;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (void)previewViewControllerDidInvalidateSize:(id)arg1;
- (id)sourceViewForQuickLook;
- (double)targetHeightForAnimatingPreviewViewController:(id)arg1 toProposedHeight:(double)arg2;
- (void)updateActions;
- (void)viewDidAppear:(BOOL)arg1;

@end
