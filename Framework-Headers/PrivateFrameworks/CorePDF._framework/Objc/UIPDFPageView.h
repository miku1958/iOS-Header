//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSMutableArray, UIActivityIndicatorView, UIColor, UIImage, UIPDFAnnotationController, UIPDFDocument, UIPDFPage, UIPDFPageContentDelegate, UIPDFSearchHighlightsController, UIPDFSelectionController, UIPDFViewTouchHandler;
@protocol NSObject><UIPDFPageViewDelegate;

@interface UIPDFPageView : UIView
{
    UIPDFDocument *_document;
    unsigned long long _pageIndex;
    UIPDFViewTouchHandler *_touchHandler;
    struct CGAffineTransform _pageToViewTransform;
    struct CGAffineTransform _viewToPageTransform;
    struct CGRect _cropBox;
    double _margin;
    BOOL _allowSelection;
    UIPDFSelectionController *_selectionController;
    id<NSObject><UIPDFPageViewDelegate> _delegate;
    struct CGRect zoomRect;
    BOOL _useBackingLayer;
    CALayer *_backingLayer;
    UIImage *_backgroundImage;
    BOOL _backgroundIsScheduled;
    unsigned long long _backgroundScheduleCount;
    BOOL _backgroundIsFullResolution;
    BOOL _boundsChanged;
    BOOL _useTiledContent;
    BOOL _enableLightMemoryFootprint;
    CALayer *_contentLayer;
    CALayer *_effectsLayer;
    UIPDFPageContentDelegate *_contentDelegate;
    UIPDFAnnotationController *_annotationController;
    BOOL _scalePageOnDraw;
    struct CGColor *_highLightColor;
    BOOL _animateSetFrame;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _showActivityIndicator;
    UIColor *_backingLayerColor;
    struct os_unfair_lock_s _lock;
    NSMutableArray *_highlights;
    double _cachedScale;
    BOOL _allowHighlighting;
    UIPDFSearchHighlightsController *_searchHighlightController;
    NSMutableArray *_searchHiglightLayers;
    UIPDFPage *_page;
    BOOL showAnnotations;
    BOOL _allowTwoFingerSelection;
    BOOL _showTextAnnotations;
    BOOL _showLinkAnnotationUnderline;
}

@property (nonatomic) BOOL allowHighlighting; // @dynamic allowHighlighting;
@property (nonatomic) BOOL allowMenu; // @dynamic allowMenu;
@property (nonatomic) BOOL allowSelection; // @synthesize allowSelection=_allowSelection;
@property (nonatomic) BOOL allowTwoFingerSelection; // @synthesize allowTwoFingerSelection=_allowTwoFingerSelection;
@property (nonatomic) BOOL animateSetFrame; // @synthesize animateSetFrame=_animateSetFrame;
@property (readonly, nonatomic) UIPDFAnnotationController *annotationController; // @synthesize annotationController=_annotationController;
@property (strong) UIImage *backgroundImage; // @dynamic backgroundImage;
@property (strong, nonatomic) UIColor *backingLayerColor; // @synthesize backingLayerColor=_backingLayerColor;
@property (readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property (nonatomic) id<NSObject><UIPDFPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, strong) UIPDFDocument *document; // @dynamic document;
@property (readonly, nonatomic) CALayer *effectsLayer; // @synthesize effectsLayer=_effectsLayer;
@property (readonly) struct CGColor *highLightColor;
@property (nonatomic) double margin; // @synthesize margin=_margin;
@property UIPDFPage *page; // @dynamic page;
@property (readonly) unsigned long long pageIndex; // @dynamic pageIndex;
@property UIPDFSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property (nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property (nonatomic) BOOL showAnnotations; // @synthesize showAnnotations;
@property (nonatomic) BOOL showLinkAnnotationUnderline; // @synthesize showLinkAnnotationUnderline=_showLinkAnnotationUnderline;
@property (nonatomic) BOOL showTextAnnotations; // @synthesize showTextAnnotations=_showTextAnnotations;
@property (nonatomic) BOOL useBackingLayer; // @synthesize useBackingLayer=_useBackingLayer;

- (struct CGPDFDictionary *)_annotForPoint:(struct CGPoint)arg1 rect:(struct CGRect *)arg2;
- (void)addLayers:(BOOL)arg1;
- (void)addPage:(id)arg1;
- (void)addWidgetToSelection;
- (void)clearSearchHighlights;
- (void)clearSelection;
- (struct CGPoint)convertPointFromPDFPageSpace:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToPDFPageSpace:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromPDFPageSpace:(struct CGRect)arg1;
- (struct CGRect)convertRectToPDFPageSpace:(struct CGRect)arg1;
- (id)createBackingLayer;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)didScroll:(id)arg1;
- (void)displayContent;
- (void)doubleTapAt:(struct CGPoint)arg1;
- (void)drawAnnotations:(struct CGContext *)arg1;
- (void)enableLightMemoryFootprint;
- (struct CGRect)fitRect:(struct CGRect)arg1;
- (struct CGRect)fitWidth:(struct CGRect)arg1 atVertical:(double)arg2;
- (BOOL)hasSearchHighlights;
- (void)hideSelection;
- (void)highlightSearchSelection:(id)arg1 animated:(BOOL)arg2;
- (void)ignoreTouches:(BOOL)arg1;
- (id)init;
- (id)initWithPage:(id)arg1;
- (id)initWithPage:(id)arg1 tiledContent:(BOOL)arg2;
- (id)initWithPageLimitedMemory:(id)arg1;
- (void)layoutSubviews;
- (void)layoutTextEffects;
- (id)receiveBackgroundImage:(id)arg1 info:(id)arg2;
- (struct CGRect)rectangleOfInterestAt:(struct CGPoint)arg1 kind:(int *)arg2;
- (void)removeBackingLayer;
- (void)scheduleBackgroundImage;
- (id)searchHighlightSelectionAt:(struct CGPoint)arg1;
- (void)setDrawingSurfaceLayer:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)setSelectionNeedsDisplay;
- (void)setTransforms;
- (void)showContent;
- (void)showSelection;
- (void)singleTapAt:(struct CGPoint)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)stopActivityIndicator;
- (void)suspendInstantTouchHighlighting;
- (void)twoFingerDoubleTapAt:(struct CGPoint)arg1;
- (void)viewDidZoom:(id)arg1;
- (BOOL)willDoSomethingWithTap:(struct CGPoint)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end

