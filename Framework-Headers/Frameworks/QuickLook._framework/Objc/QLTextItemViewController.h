//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

#import <QuickLook/QLPrintingProtocol-Protocol.h>
#import <QuickLook/UITextViewDelegate-Protocol.h>

@class NSAttributedString, NSLayoutConstraint, NSString, UIPrintPageRenderer, UISimpleTextPrintFormatter, UITextView;

__attribute__((visibility("hidden")))
@interface QLTextItemViewController : QLItemViewController <UITextViewDelegate, QLPrintingProtocol>
{
    UITextView *_textView;
    NSAttributedString *_content;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
    UISimpleTextPrintFormatter *_printFormatter;
    UIPrintPageRenderer *_pageRenderer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) UIPrintPageRenderer *pageRenderer; // @synthesize pageRenderer=_pageRenderer;
@property (readonly) UISimpleTextPrintFormatter *printFormatter; // @synthesize printFormatter=_printFormatter;
@property (readonly) Class superclass;

+ (BOOL)providesCustomPrinter;
+ (BOOL)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
- (void).cxx_destruct;
- (void)_updateConstraintConstants:(BOOL)arg1;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)canPinchToDismiss;
- (BOOL)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)numberOfPagesWithSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)prepareForDrawingPages:(struct _NSRange)arg1 ofSize:(struct CGSize)arg2;
- (id)printer;
- (id)registeredKeyCommands;
- (id)scrollView;
- (void)setAppearance:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldRecognizeGestureRecognizer:(id)arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;

@end

