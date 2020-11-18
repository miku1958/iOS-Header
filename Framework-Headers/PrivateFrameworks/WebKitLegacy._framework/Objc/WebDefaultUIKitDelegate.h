//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDefaultUIKitDelegate : NSObject
{
}

+ (id)sharedUIKitDelegate;
- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2;
- (id)checkSpellingOfString:(id)arg1;
- (struct CGPoint)contentsPointForWebView:(id)arg1;
- (void)deleteFromInput;
- (void)deleteFromInputWithFlags:(unsigned long long)arg1;
- (int)deviceOrientation;
- (struct CGRect)documentVisibleRectForWebView:(id)arg1;
- (long long)getPasteboardChangeCount;
- (long long)getPasteboardItemsCount;
- (BOOL)hasRichlyEditableSelection;
- (struct CGPoint)interactionLocation;
- (BOOL)isUnperturbedDictationResultMarker:(id)arg1;
- (BOOL)performsTwoStepPaste:(id)arg1;
- (id)readDataFromPasteboard:(id)arg1 withIndex:(long long)arg2;
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;
- (void)showPlaybackTargetPicker:(BOOL)arg1 fromRect:(struct CGRect)arg2;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(BOOL)arg6 allowVerticalScrollbar:(BOOL)arg7;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;
- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(BOOL)arg4;
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(BOOL)arg3 acceptMIMETypes:(id)arg4;
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;
- (BOOL)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)webViewDidDrawTiles:(id)arg1;
- (void)webViewDidEndOverflowScroll:(id)arg1;
- (void)webViewDidLayout:(id)arg1;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)webViewDidReceiveMobileDocType:(id)arg1;
- (void)webViewDidRestoreFromPageCache:(id)arg1;
- (void)webViewDidStartOverflowScroll:(id)arg1;
- (void)writeDataToPasteboard:(id)arg1;

@end
