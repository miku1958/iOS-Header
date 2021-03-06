//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKBalloonImageView.h>

#import <ChatKit/CKInvisibleInkEffectHostView-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class CABackdropLayer, CKInvisibleInkEffectController, CKManualUpdater, NSMutableArray, NSString, UIColor, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CKBalloonViewDelegate;

@interface CKBalloonView : CKBalloonImageView <CKInvisibleInkEffectHostView, UIGestureRecognizerDelegate>
{
    BOOL _orientation;
    BOOL _hasTail;
    BOOL _balloonStyle;
    BOOL _color;
    BOOL _strokeColor;
    BOOL _showingMenu;
    BOOL _canUseOpaqueMask;
    BOOL _hasOverlay;
    BOOL _wantsSkinnyMask;
    BOOL _wantsMultilineMask;
    BOOL _useLargeAsset;
    BOOL _balloonShape;
    BOOL _balloonTailShape;
    BOOL _invisibleInkEffectPaused;
    BOOL _animationPaused;
    id<CKBalloonViewDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    long long _userInterfaceStyle;
    long long _userInterfaceLevel;
    NSMutableArray *_filters;
    unsigned long long _balloonCorners;
    CABackdropLayer *_backdropFilterLayer;
    CKInvisibleInkEffectController *_invisibleInkEffectController;
    CKManualUpdater *_displayUpdater;
    UIImageView *_overlay;
    struct UIEdgeInsets _textAlignmentInsets;
}

@property (nonatomic) BOOL animationPaused; // @synthesize animationPaused=_animationPaused;
@property (strong, nonatomic) CABackdropLayer *backdropFilterLayer; // @synthesize backdropFilterLayer=_backdropFilterLayer;
@property (nonatomic) unsigned long long balloonCorners; // @synthesize balloonCorners=_balloonCorners;
@property (nonatomic) struct CKBalloonDescriptor_t balloonDescriptor; // @dynamic balloonDescriptor;
@property (nonatomic) BOOL balloonShape; // @synthesize balloonShape=_balloonShape;
@property (nonatomic) BOOL balloonStyle; // @synthesize balloonStyle=_balloonStyle;
@property (nonatomic) BOOL balloonTailShape; // @synthesize balloonTailShape=_balloonTailShape;
@property (nonatomic) BOOL canUseOpaqueMask; // @synthesize canUseOpaqueMask=_canUseOpaqueMask;
@property (nonatomic) BOOL color; // @synthesize color=_color;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKBalloonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CKManualUpdater *displayUpdater; // @synthesize displayUpdater=_displayUpdater;
@property (strong, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property (strong, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property (nonatomic) BOOL hasOverlay; // @synthesize hasOverlay=_hasOverlay;
@property (nonatomic) BOOL hasTail; // @synthesize hasTail=_hasTail;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIImage *imageForInvisibleInkEffectView;
@property (strong, nonatomic) CKInvisibleInkEffectController *invisibleInkEffectController; // @synthesize invisibleInkEffectController=_invisibleInkEffectController;
@property (nonatomic) BOOL invisibleInkEffectEnabled; // @dynamic invisibleInkEffectEnabled;
@property (nonatomic) BOOL invisibleInkEffectPaused; // @synthesize invisibleInkEffectPaused=_invisibleInkEffectPaused;
@property (readonly, nonatomic) Class invisibleInkEffectViewClass;
@property (strong, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property (readonly, nonatomic) BOOL needsGroupOpacity;
@property (nonatomic) BOOL orientation; // @synthesize orientation=_orientation;
@property (strong, nonatomic) UIImageView *overlay; // @synthesize overlay=_overlay;
@property (readonly, nonatomic) UIColor *overlayColor;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic, getter=isShowingMenu) BOOL showingMenu; // @synthesize showingMenu=_showingMenu;
@property (nonatomic) BOOL strokeColor; // @synthesize strokeColor=_strokeColor;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property (nonatomic) struct UIEdgeInsets textAlignmentInsets; // @synthesize textAlignmentInsets=_textAlignmentInsets;
@property (nonatomic) BOOL useLargeAsset; // @synthesize useLargeAsset=_useLargeAsset;
@property (nonatomic) long long userInterfaceLevel; // @synthesize userInterfaceLevel=_userInterfaceLevel;
@property (nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property (nonatomic) BOOL wantsMultilineMask; // @synthesize wantsMultilineMask=_wantsMultilineMask;
@property (nonatomic) BOOL wantsSkinnyMask; // @synthesize wantsSkinnyMask=_wantsSkinnyMask;

- (void).cxx_destruct;
- (void)_dismissOverlay;
- (void)addFilter:(id)arg1;
- (void)addOverlaySubview:(id)arg1;
- (void)attachInvisibleInkEffectView;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (void)configureForComposition:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(BOOL)arg4;
- (void)configureForMessagePart:(id)arg1;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect)arg1;
- (void)dealloc;
- (void)detachInvisibleInkEffectView;
- (void)doubleTapGestureRecognized:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invisibleInkEffectViewWasResumed;
- (void)invisibleInkEffectViewWasSuspended;
- (void)invisibleInkEffectViewWasUncovered;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (void)longPressGestureRecognized:(id)arg1;
- (id)overlayImage;
- (void)prepareForAcknowledgementDismissal;
- (void)prepareForAcknowledgementDisplay;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (void)prepareForReuse;
- (void)setHasOverlay:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHasOverlay:(BOOL)arg1 autoDismiss:(BOOL)arg2;
- (void)setNeedsPrepareForDisplay;
- (void)setSelected:(BOOL)arg1 withSelectionState:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)tapGestureRecognized:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBalloonForTraitCollection:(id)arg1;
- (void)updateRasterizationForInvisibleInkEffect;

@end

