//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManager/UIDocumentBrowserViewController.h>

#import <DocumentManager/DOCDocumentBrowserDelegate-Protocol.h>

@class DOCBrowserViewController, NSArray, NSString;

@interface DOCBaseDocumentBrowserViewController : UIDocumentBrowserViewController <DOCDocumentBrowserDelegate>
{
    BOOL _requestingDocumentCreation;
    NSArray *_selectedItems;
    DOCBrowserViewController *_effectiveBrowserViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) DOCBrowserViewController *effectiveBrowserViewController; // @synthesize effectiveBrowserViewController=_effectiveBrowserViewController;
@property (readonly) unsigned long long hash;
@property (copy) NSArray *selectedItems; // @synthesize selectedItems=_selectedItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)browser:(id)arg1 didCommitPreviewOfDocument:(id)arg2;
- (void)browser:(id)arg1 didPickItem:(id)arg2;
- (void)browser:(id)arg1 didResolveShownLocation:(id)arg2 previousLocation:(id)arg3;
- (void)browser:(id)arg1 didSelectItems:(id)arg2;
- (void)browser:(id)arg1 didUpdateCurrentLocationCanSelect:(BOOL)arg2;
- (void)browser:(id)arg1 didUpdateCurrentLocationIsWritable:(BOOL)arg2;
- (void)browser:(id)arg1 didUpdateImportSupportInCurrentLocation:(BOOL)arg2;
- (void)browser:(id)arg1 didUpdateNumberOfItems:(unsigned long long)arg2;
- (void)browser:(id)arg1 isDisplayingEmptyCollection:(BOOL)arg2;
- (void)browser:(id)arg1 wantsToShowInfoForItem:(id)arg2;
- (void)browser:(id)arg1 wantsToShowLocation:(id)arg2 forceReplaceLocation:(BOOL)arg3;
- (void)browserDidFinishGatheringItemsAndThumbnails:(id)arg1;
- (void)browserWantsToCreateNewFile:(id)arg1;
- (void)browserWantsToCreateNewFolder:(id)arg1 maxThumbnailSize:(struct CGSize)arg2;
- (void)clearCurrentOpenInteraction;
- (void)createDocumentAtCurrentLocation;
- (void)createDocumentAtLocation:(id)arg1;
- (void)dismissAllPresentedViewControllers:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissButtonWasTappedInBrowser:(id)arg1;
- (void)dismissDocumentManager;
- (void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toCurrentBrowserLocationWithCompletion:(CDUnknownBlockType)arg3;
- (void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toLocation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)importDocumentAtURL:(id)arg1 nextToDocumentAtURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)locationsButtonWasTappedInBrowser:(id)arg1 sourceRect:(struct CGRect)arg2;
- (void)notifyDelegateOfImportOfURL:(id)arg1 destinationURL:(id)arg2 error:(id)arg3;
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showContentForLocation:(id)arg1;
- (void)showLocation:(id)arg1 animated:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)transitionControllerForDocumentURL:(id)arg1;
- (void)viewDidLoad;

@end

