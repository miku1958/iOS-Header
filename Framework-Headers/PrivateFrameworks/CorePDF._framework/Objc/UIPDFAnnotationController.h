//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/UIGestureRecognizerDelegate-Protocol.h>

@class CALayer, NSString, UIColor, UIPDFAnnotation, UIPDFMarkupAnnotation, UIPDFPageView;
@protocol NSObject><UIPDFAnnotationControllerDelegate;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate>
{
    UIPDFPageView *_pageView;
    int _lock;
    struct CGPoint _startPoint;
    BOOL _moving;
    UIPDFMarkupAnnotation *_currentAnnotation;
    CDStruct_627e0f85 _initialRange;
    BOOL _tracking;
    CALayer *_drawingSurface;
    id<NSObject><UIPDFAnnotationControllerDelegate> _delegate;
    struct CGSize _cachedMarginNoteSize;
    BOOL makeUnderlineAnnotation;
    BOOL _allowEditing;
    UIColor *_currentColor;
}

@property (nonatomic) BOOL allowEditing; // @synthesize allowEditing=_allowEditing;
@property (strong, nonatomic) UIPDFAnnotation *currentAnnotation; // @synthesize currentAnnotation=_currentAnnotation;
@property (nonatomic) UIColor *currentColor; // @synthesize currentColor=_currentColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<NSObject><UIPDFAnnotationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) CALayer *drawingSurface; // @synthesize drawingSurface=_drawingSurface;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL makeUnderlineAnnotation; // @synthesize makeUnderlineAnnotation;
@property (readonly, nonatomic) UIPDFPageView *pageView; // @synthesize pageView=_pageView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL tracking; // @synthesize tracking=_tracking;

+ (id)newAnnotation:(struct CGPDFDictionary *)arg1 type:(const char *)arg2;
+ (struct CGImage *)newMaskImage:(struct CGPDFPage *)arg1 size:(struct CGSize)arg2;
+ (BOOL)pageHasAnnotations:(id)arg1;
- (void)_addAnnotationViewFor:(id)arg1;
- (void)_addLinkAnnotationViewFor:(id)arg1;
- (void)_addRecognizers:(id)arg1;
- (void)_initialRange:(struct CGPoint)arg1;
- (id)_linkAnnotationViewAt:(struct CGPoint)arg1;
- (void)addAnnotation:(id)arg1;
- (void)addDrawingSurface:(id)arg1 view:(id)arg2;
- (void)addLinkAnnotationViews;
- (id)annotatePageSelection;
- (id)annotationAt:(struct CGPoint)arg1;
- (BOOL)annotationBriefPressRecognized:(id)arg1;
- (BOOL)annotationLongPressRecognized:(id)arg1;
- (BOOL)annotationSingleTapRecognized:(id)arg1;
- (void)annotationTapRecognized:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toSurfaceLayer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toSurfaceLayer:(id)arg2;
- (void)copyAttributesOf:(id)arg1 to:(id)arg2;
- (void)dealloc;
- (void)didEndTrackingAtPoint:(struct CGPoint)arg1;
- (void)doubleTapRecognized:(id)arg1;
- (void)drawAnnotations:(struct CGContext *)arg1;
- (void)endTrackingAtPoint:(struct CGPoint)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)hostViewDidScroll;
- (id)init;
- (id)initWithPageView:(id)arg1;
- (BOOL)intersects:(struct CGPDFSelection *)arg1 with:(struct CGPDFSelection *)arg2;
- (BOOL)isLinkAnnotationAt:(struct CGPoint)arg1;
- (BOOL)isSelection:(struct CGPDFSelection *)arg1 equalTo:(struct CGPDFSelection *)arg2;
- (void)layoutAnnotationViews:(id)arg1;
- (id)linkAnnotationAt:(struct CGPoint)arg1;
- (BOOL)linkAnnotationShouldBegin:(id)arg1;
- (void)linkPressRecognized:(id)arg1;
- (void)lock;
- (BOOL)madeInstantAnnotation;
- (id)marginNoteImage:(id)arg1;
- (struct CGSize)marginNoteImageSize;
- (void)mergeSelectionOfAnnotation:(id)arg1;
- (struct CGImage *)newHighlightMaskImageFor:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)setSurfacePosition:(id)arg1;
- (void)setView:(id)arg1;
- (void)startTracking:(struct CGPoint)arg1;
- (BOOL)trackMoved:(struct CGPoint)arg1;
- (void)tracking:(struct CGPoint)arg1;
- (struct CGImage *)underlineImageFor:(struct CGRect)arg1;
- (void)unlock;
- (BOOL)willDoSomethingWithTap:(struct CGPoint)arg1;
- (BOOL)willHandleTouchGestureAtPoint:(struct CGPoint)arg1;
- (BOOL)willTrackAtPoint:(struct CGPoint)arg1;

@end
