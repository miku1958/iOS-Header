//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WAKView.h>

#import <WebKitLegacy/WebCoreFrameView-Protocol.h>

@class WebFrame, WebFrameViewPrivate;
@protocol WebDocumentView;

@interface WebFrameView : WAKView <WebCoreFrameView>
{
    WebFrameViewPrivate *_private;
}

@property (nonatomic) BOOL allowsScrolling;
@property (readonly, nonatomic) WAKView<WebDocumentView> *documentView;
@property (readonly, nonatomic) BOOL documentViewShouldHandlePrint;
@property (readonly, nonatomic) WebFrame *webFrame;

+ (BOOL)_canShowMIMETypeAsHTML:(id)arg1;
+ (Class)_viewClassForMIMEType:(id)arg1 allowingPlugins:(BOOL)arg2;
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)arg1;
- (float)_area;
- (id)_contentView;
- (Class)_customScrollViewClass;
- (BOOL)_firstResponderIsFormControl;
- (void)_forwardMouseEvent:(id)arg1;
- (void)_frameSizeChanged;
- (void)_goBack;
- (void)_goForward;
- (BOOL)_hasScrollBars;
- (float)_horizontalKeyboardScrollDistance;
- (float)_horizontalPageScrollDistance;
- (void)_install;
- (BOOL)_isFlippedDocument;
- (BOOL)_isScrollable;
- (BOOL)_isVerticalDocument;
- (id)_largestChildWithScrollBars;
- (id)_largestScrollableChild;
- (id)_makeDocumentViewForDataSource:(id)arg1;
- (BOOL)_pageHorizontally:(BOOL)arg1;
- (BOOL)_pageInBlockProgressionDirection:(BOOL)arg1;
- (BOOL)_pageVertically:(BOOL)arg1;
- (BOOL)_scrollHorizontallyBy:(float)arg1;
- (BOOL)_scrollLineHorizontally:(BOOL)arg1;
- (BOOL)_scrollLineVertically:(BOOL)arg1;
- (BOOL)_scrollOverflowInDirection:(unsigned char)arg1 granularity:(unsigned char)arg2;
- (BOOL)_scrollToBeginningOfDocument;
- (BOOL)_scrollToEndOfDocument;
- (BOOL)_scrollVerticallyBy:(float)arg1;
- (id)_scrollView;
- (void)_setDocumentView:(id)arg1;
- (void)_setWebFrame:(id)arg1;
- (float)_verticalKeyboardScrollDistance;
- (float)_verticalPageScrollDistance;
- (Class)_viewClassForMIMEType:(id)arg1;
- (id)_webView;
- (NakedPtr_4ac97545)_web_frame;
- (id)_webcore_effectiveFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)frameSizeChanged;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)printDocumentView;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (BOOL)scrollView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setNextKeyView:(id)arg1;
- (void)viewDidMoveToWindow;
- (struct CGRect)visibleRect;

@end

