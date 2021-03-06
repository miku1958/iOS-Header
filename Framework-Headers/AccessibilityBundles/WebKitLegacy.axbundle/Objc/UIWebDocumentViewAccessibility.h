//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/__UIWebDocumentViewAccessibility_super.h>

@interface UIWebDocumentViewAccessibility : __UIWebDocumentViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (struct CGRect)_accessibilityContentFrame;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (id)_accessibilityDocumentView;
- (id)_accessibilityEquivalenceTag;
- (BOOL)_accessibilityHasTextOperations;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityIsFirstElementForFocus;
- (BOOL)_accessibilityIsScrollAncestor;
- (BOOL)_accessibilityIsWebDocumentView;
- (BOOL)_accessibilityMimicsTextInputResponder;
- (id)_accessibilityResponderElement;
- (id)_accessibilityRootObject;
- (id)_accessibilityScrollStatus;
- (BOOL)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;
- (BOOL)_accessibilityScrollingEnabled;
- (id)_accessibilitySpeakThisString;
- (id)_accessibilitySupplementaryHeaderViews;
- (void)_accessibilityZoomAtPoint:(struct CGPoint)arg1 zoomIn:(BOOL)arg2;
- (void)_axZoomToCenterWithScale:(struct CGPoint)arg1 scale:(double)arg2;
- (void)_showTextStyleOptions:(id)arg1;
- (long long)accessibilityContainerType;
- (id)accessibilityElements;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (BOOL)accessibilityScrollDownPage;
- (BOOL)accessibilityScrollLeftPage;
- (BOOL)accessibilityScrollRightPage;
- (BOOL)accessibilityScrollUpPage;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)clearSelection;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)handleKeyWebEvent:(id)arg1;
- (BOOL)isAccessibilityElement;
- (void)paste:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinity:(unsigned long long)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)stopLoading:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;

@end

