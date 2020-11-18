//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Silex/STStandaloneTextLayoutDelegate-Protocol.h>
#import <Silex/SXAutoSizedCanvasControllerDelegate-Protocol.h>
#import <Silex/UIGestureRecognizerDelegate-Protocol.h>
#import <Silex/UIScrollViewDelegate-Protocol.h>

@class NSString, STStandaloneTextInfo, STStandaloneTextLayout, STTextTangierDocumentRoot, STTextTangierStorage, SXAutoSizedCanvasController, SXFullscreenCaption, SXTextSource, UIScrollView, UISwipeGestureRecognizer, UITapGestureRecognizer, UIVisualEffectView;
@protocol SXComponentActionHandler, SXFullscreenCaptionViewDelegate, SXTextSourceFactory;

@interface SXFullscreenCaptionView : UIView <SXAutoSizedCanvasControllerDelegate, STStandaloneTextLayoutDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    int _expansionMode;
    id<SXFullscreenCaptionViewDelegate> _delegate;
    SXFullscreenCaption *_caption;
    unsigned long long _viewIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id<SXComponentActionHandler> _actionHandler;
    id<SXTextSourceFactory> _textSourceFactory;
    SXAutoSizedCanvasController *_autoSizeCanvasController;
    STTextTangierDocumentRoot *_documentRoot;
    STStandaloneTextInfo *_captionInfo;
    STStandaloneTextLayout *_captionLayout;
    UIVisualEffectView *_backgroundView;
    UIScrollView *_scrollView;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
    SXTextSource *_textSource;
    STTextTangierStorage *_textStorage;
    struct CGSize _fullSize;
    struct CGRect _temporaryLayoutRect;
    struct UIEdgeInsets _fullInsets;
}

@property (readonly, nonatomic) id<SXComponentActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
@property (strong, nonatomic) SXAutoSizedCanvasController *autoSizeCanvasController; // @synthesize autoSizeCanvasController=_autoSizeCanvasController;
@property (strong, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, nonatomic) SXFullscreenCaption *caption; // @synthesize caption=_caption;
@property (strong, nonatomic) STStandaloneTextInfo *captionInfo; // @synthesize captionInfo=_captionInfo;
@property (strong, nonatomic) STStandaloneTextLayout *captionLayout; // @synthesize captionLayout=_captionLayout;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXFullscreenCaptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) STTextTangierDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property (readonly, nonatomic) BOOL expanded;
@property (readonly, nonatomic) int expansionMode; // @synthesize expansionMode=_expansionMode;
@property (nonatomic) struct UIEdgeInsets fullInsets; // @synthesize fullInsets=_fullInsets;
@property (nonatomic) struct CGSize fullSize; // @synthesize fullSize=_fullSize;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (readonly) Class superclass;
@property (strong, nonatomic) UISwipeGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer=_swipeGestureRecognizer;
@property (strong, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property (nonatomic) struct CGRect temporaryLayoutRect; // @synthesize temporaryLayoutRect=_temporaryLayoutRect;
@property (strong, nonatomic) SXTextSource *textSource; // @synthesize textSource=_textSource;
@property (readonly, nonatomic) id<SXTextSourceFactory> textSourceFactory; // @synthesize textSourceFactory=_textSourceFactory;
@property (strong, nonatomic) STTextTangierStorage *textStorage; // @synthesize textStorage=_textStorage;
@property (readonly, nonatomic) unsigned long long viewIndex; // @synthesize viewIndex=_viewIndex;

+ (void)_applyStyle:(id)arg1 toStorage:(id)arg2;
+ (id)_overridePropertiesWithComponentStyle:(id)arg1 storage:(id)arg2;
- (void).cxx_destruct;
- (void)createBackgroundView;
- (void)createScrollView;
- (void)dealloc;
- (struct CGRect)determineFrameInSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (BOOL)forceFullExpandsionMode;
- (struct CGRect)frameWithSuperview:(id)arg1 size:(struct CGSize)arg2 forExpansionMode:(int)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleSwipeGestureRecognizer:(id)arg1;
- (void)handleTapGestureRecognizer:(id)arg1;
- (id)initWithTextSourceFactory:(id)arg1 actionHandler:(id)arg2;
- (void)initializeTangier;
- (void)layoutSubviews;
- (double)marginForTextLayout:(id)arg1;
- (struct CGPoint)positionForTextLayout:(id)arg1;
- (void)renderCaptionInTangier;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setExpansionMode:(int)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)setupGestureRecognizers;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateFrameAnimated:(BOOL)arg1;
- (void)updateWithCaption:(id)arg1 forViewIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (double)widthForTextLayout:(id)arg1;

@end

