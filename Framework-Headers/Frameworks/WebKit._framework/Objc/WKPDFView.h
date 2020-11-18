//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WebKit/UIDocumentPasswordViewDelegate-Protocol.h>
#import <WebKit/UIPDFAnnotationControllerDelegate-Protocol.h>
#import <WebKit/UIPDFPageViewDelegate-Protocol.h>
#import <WebKit/WKActionSheetAssistantDelegate-Protocol.h>
#import <WebKit/WKWebViewContentProvider-Protocol.h>

@class NSObject, NSString, UIScrollView, WKWebView;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WKPDFView : UIView <WKWebViewContentProvider, UIPDFPageViewDelegate, UIPDFAnnotationControllerDelegate, WKActionSheetAssistantDelegate, UIDocumentPasswordViewDelegate>
{
    struct RetainPtr<CGPDFDocument *> _cgPDFDocument;
    struct RetainPtr<UIPDFDocument> _pdfDocument;
    struct RetainPtr<NSString> _suggestedFilename;
    struct RetainPtr<WKPDFPageNumberIndicator> _pageNumberIndicator;
    struct RetainPtr<UIDocumentPasswordView> _passwordView;
    struct Vector<PDFPageInfo, 0, WTF::CrashOnOverflow, 16> _pages;
    unsigned int _centerPageNumber;
    struct CGSize _minimumSize;
    struct CGSize _overlaidAccessoryViewsInset;
    WKWebView *_webView;
    UIScrollView *_scrollView;
    UIView *_fixedOverlayView;
    BOOL _isStartingZoom;
    BOOL _isPerformingSameDocumentNavigation;
    struct RetainPtr<WKActionSheetAssistant> _actionSheetAssistant;
    struct InteractionInformationAtPosition _positionInformation;
    unsigned int _currentFindPageIndex;
    unsigned int _currentFindMatchIndex;
    struct RetainPtr<UIPDFSelection> _currentFindSelection;
    struct RetainPtr<NSString> _cachedFindString;
    struct Vector<WTF::RetainPtr<UIPDFSelection>, 0, WTF::CrashOnOverflow, 16> _cachedFindMatches;
    unsigned int _cachedFindMaximumCount;
    unsigned long long _cachedFindOptionsAffectingResults;
    struct atomic<unsigned int> _nextComputeMatchesOperationID;
    struct RetainPtr<NSString> _nextCachedFindString;
    unsigned int _nextCachedFindMaximumCount;
    unsigned long long _nextCachedFindOptionsAffectingResults;
    NSObject<OS_dispatch_queue> *_findQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGPDFDocument *pdfDocument;
@property (readonly, nonatomic) NSString *suggestedFilename;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_URLForLinkAnnotation:(id)arg1;
- (void)_clearPages;
- (void)_computeMatchesForString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_computePageAndDocumentFrames;
- (void)_didFailToUnlock;
- (void)_didFindMatch:(id)arg1;
- (void)_didLoadPDFDocument;
- (void)_ensureViewForPage:(CDStruct_828c7fe1 *)arg1;
- (void)_hidePasswordEntryField;
- (void)_highlightLinkAnnotation:(id)arg1 forDuration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_keyboardDidShow:(id)arg1;
- (struct CGPoint)_offsetForPageNumberIndicator;
- (void)_resetZoomAnimated:(BOOL)arg1;
- (void)_revalidateViews;
- (void)_scrollToFragment:(id)arg1;
- (void)_showPasswordEntryField;
- (BOOL)_tryToUnlockWithPassword:(id)arg1;
- (void)_updatePageNumberIndicator;
- (void)_updatePasswordEntryField;
- (RetainPtr_f649c0c3)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr_f649c0c3)arg3;
- (void)actionSheetAssistant:(id)arg1 openElementAtLocation:(struct CGPoint)arg2;
- (void)actionSheetAssistant:(id)arg1 performAction:(int)arg2;
- (BOOL)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (void)annotation:(id)arg1 isBeingPressedAtPoint:(struct CGPoint)arg2 controller:(id)arg3;
- (void)annotation:(id)arg1 wasTouchedAtPoint:(struct CGPoint)arg2 controller:(id)arg3;
- (void)dealloc;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (const struct InteractionInformationAtPosition *)positionInformationForActionSheetAssistant:(id)arg1;
- (void)resetZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)web_computedContentInsetDidChange;
- (void)web_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_didSameDocumentNavigation:(unsigned int)arg1;
- (void)web_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_hideFindUI;
- (id)web_initWithFrame:(struct CGRect)arg1 webView:(id)arg2;
- (void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;
- (void)web_setFixedOverlayView:(id)arg1;
- (void)web_setMinimumSize:(struct CGSize)arg1;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize)arg1;
- (void)zoom:(id)arg1 to:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 kind:(int)arg4;

@end

