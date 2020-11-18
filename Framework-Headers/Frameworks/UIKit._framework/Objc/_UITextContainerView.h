//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/NSUITextViewCommonMethods-Protocol.h>
#import <UIKitCore/_UITextTiledLayerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSLayoutManager, NSMutableSet, NSString, NSTextContainer, NSTextStorage;
@protocol _UITextContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface _UITextContainerView : UIView <NSUITextViewCommonMethods, _UITextTiledLayerDelegate>
{
    struct UIEdgeInsets _textContainerInset;
    struct CGPoint _textContainerOrigin;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    NSTextContainer *_textContainer;
    NSDictionary *_linkTextAttributes;
    unsigned long long _invalidationSeqNo;
    long long _invalidationSeqClipsToBounds;
    struct {
        unsigned int textContainerOriginInvalid:1;
        unsigned int verticalLayout:2;
        unsigned int horizontallyResizable:1;
        unsigned int verticallyResizable:1;
        unsigned int freezeTextContainerSize:1;
        unsigned int containedInTextView:1;
    } _tcvFlags;
    NSMutableSet *_ghostedRanges;
    NSMutableSet *_hiddenAreaRects;
    struct CGRect _constrainedTiledRenderingRect;
    NSArray *_maskedRectangles;
    long long _contentsFormat;
    id<_UITextContainerViewDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UITextContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_freezeTextContainerSize, setter=_setFreezeTextContainerSize:) BOOL freezeTextContainerSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHorizontallyResizable) BOOL horizontallyResizable;
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (readonly, nonatomic) long long layoutOrientation;
@property (nonatomic) struct _NSRange markedRange;
@property (readonly, nonatomic) NSDictionary *markedTextStyle;
@property (nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property (nonatomic) double maxTileHeight;
@property (nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property (nonatomic) struct UIEdgeInsets textContainerInset;
@property (readonly, nonatomic) NSTextStorage *textStorage;
@property (nonatomic) BOOL usesTiledViews;
@property (nonatomic, getter=isVerticallyResizable) BOOL verticallyResizable;

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_addHiddenArea:(struct CGRect)arg1;
- (void)_constrainTiledRenderingToRect:(struct CGRect)arg1;
- (void)_didScroll;
- (BOOL)_ensureLayoutCompleteForRect:(struct CGRect)arg1 withExtension:(BOOL)arg2;
- (BOOL)_ensureLayoutCompleteForRect:(struct CGRect)arg1 withExtensionFactor:(double)arg2 minimumExtensionDistance:(double)arg3 repetitions:(unsigned long long)arg4;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange)arg1;
- (void)_ensureMinAndMaxSizesConsistentWithBounds;
- (struct _NSRange)_extendedGlyphRangeForRange:(struct _NSRange)arg1 maxGlyphIndex:(unsigned long long)arg2 drawingToScreen:(BOOL)arg3;
- (struct CGRect)_intersectRectWithConstrainedTiledRenderingRect:(struct CGRect)arg1;
- (void)_removeHiddenAreas;
- (void)_resetMaskedRectangles;
- (void)_setFrameOrBounds:(struct CGRect)arg1 oldRect:(struct CGRect)arg2 settingAction:(CDUnknownBlockType)arg3;
- (void)_sizeToConstrainedContainerUsedRect;
- (struct CGRect)_textTiledLayer:(id)arg1 constrainTileableBounds:(struct CGRect)arg2;
- (id)_textTiledLayer:(id)arg1 maskedRectsInVisibleRect:(struct CGRect)arg2;
- (void)_unconstrainTiledRendering;
- (void)addGhostedRange:(struct _NSRange)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2 delegate:(id)arg3;
- (void)invalidateTextContainerOrigin;
- (id)layer;
- (id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2;
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;
- (id)linkTextAttributes;
- (void)removeAllGhostedRanges;
- (void)setBounds:(struct CGRect)arg1;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
- (void)setNeedsLayout;
- (void)sizeToFit;
- (struct CGPoint)textContainerOrigin;
- (void)tintColorDidChange;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)arg1;
- (struct CGRect)visibleRect;
- (void)willMoveToSuperview:(id)arg1;

@end

