//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/CAMediaTiming-Protocol.h>
#import <QuartzCore/CAPropertyInfo-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class CAMeshTransform, NSArray, NSDictionary, NSString;
@protocol CALayerDelegate;

@interface CALayer : NSObject <CAPropertyInfo, NSSecureCoding, CAMediaTiming>
{
    struct _CALayerIvars _attr;
}

@property BOOL acceleratesDrawing;
@property (copy) NSDictionary *actions;
@property BOOL allowsDisplayCompositing;
@property BOOL allowsEdgeAntialiasing;
@property BOOL allowsGroupBlending;
@property BOOL allowsGroupOpacity;
@property BOOL allowsHitTesting;
@property struct CGPoint anchorPoint;
@property double anchorPointZ;
@property BOOL autoreverses;
@property struct CGColor *backgroundColor;
@property struct CGSize backgroundColorPhase;
@property (copy) NSArray *backgroundFilters;
@property double beginTime;
@property struct CGColor *borderColor;
@property double borderWidth;
@property struct CGRect bounds;
@property BOOL canDrawConcurrently;
@property BOOL clearsContext;
@property (strong) id compositingFilter;
@property (strong) id contents;
@property BOOL contentsAlignsToPixels;
@property struct CGRect contentsCenter;
@property BOOL contentsContainsSubtitles;
@property BOOL contentsDither;
@property (copy) NSString *contentsFormat;
@property (copy) NSString *contentsGravity;
@property struct CGColor *contentsMultiplyColor;
@property BOOL contentsOpaque;
@property struct CGRect contentsRect;
@property double contentsScale;
@property (copy) NSString *contentsScaling;
@property (copy) NSString *contentsSwizzle;
@property struct CGAffineTransform contentsTransform;
@property BOOL continuousCorners;
@property (strong) id cornerContents;
@property struct CGRect cornerContentsCenter;
@property BOOL cornerContentsMasksEdges;
@property (copy) NSString *cornerCurve;
@property double cornerRadius;
@property BOOL createsCompositingGroup;
@property BOOL definesDisplayRegionOfInterest;
@property (weak) id<CALayerDelegate> delegate;
@property unsigned int disableUpdateMask;
@property (getter=isDoubleSided) BOOL doubleSided;
@property BOOL drawsAsynchronously;
@property double duration;
@property unsigned int edgeAntialiasingMask;
@property (copy) NSString *fillMode;
@property (copy) NSArray *filters;
@property BOOL flipsHorizontalAxis;
@property struct CGRect frame;
@property (getter=isFrozen) BOOL frozen;
@property (getter=isGeometryFlipped) BOOL geometryFlipped;
@property (getter=isHidden) BOOL hidden;
@property BOOL hitTestsAsOpaque;
@property BOOL hitTestsContentsAlphaChannel;
@property BOOL inheritsTiming;
@property BOOL invertsShadow;
@property (copy) NSArray *layoutDependents;
@property BOOL literalContentsCenter;
@property (copy) NSString *magnificationFilter;
@property (strong) CALayer *mask;
@property unsigned long long maskedCorners;
@property BOOL masksToBounds;
@property (copy) CAMeshTransform *meshTransform;
@property (copy) NSString *minificationFilter;
@property float minificationFilterBias;
@property double motionBlurAmount;
@property (copy) NSString *name;
@property BOOL needsDisplayOnBoundsChange;
@property BOOL needsLayoutOnGeometryChange;
@property float opacity;
@property (getter=isOpaque) BOOL opaque;
@property struct CGPoint position;
@property BOOL preloadsCache;
@property (copy) NSArray *presentationModifiers;
@property BOOL rasterizationPrefersDisplayCompositing;
@property double rasterizationScale;
@property float repeatCount;
@property double repeatDuration;
@property (copy) NSString *securityMode;
@property (getter=isSeparated) BOOL separated;
@property (copy) NSDictionary *separatedOptions;
@property struct CGColor *shadowColor;
@property struct CGSize shadowOffset;
@property float shadowOpacity;
@property const struct CGPath *shadowPath;
@property BOOL shadowPathIsBounds;
@property double shadowRadius;
@property BOOL shouldRasterize;
@property struct CGSize sizeRequisition;
@property BOOL sortsSublayers;
@property float speed;
@property (copy) NSArray *stateTransitions; // @dynamic stateTransitions;
@property (copy) NSArray *states; // @dynamic states;
@property (copy) NSDictionary *style;
@property struct CATransform3D sublayerTransform;
@property (copy) NSArray *sublayers;
@property (readonly) CALayer *superlayer;
@property double timeOffset;
@property BOOL toneMapToStandardDynamicRange;
@property struct CATransform3D transform;
@property id<CALayerDelegate> unsafeUnretainedDelegate;
@property (readonly) struct CGRect visibleRect;
@property double zPosition;

+ (void)CAMLParserEndElement:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (CDUnknownFunctionPointerType)CA_getterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (CDUnknownFunctionPointerType)CA_setterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (double)cornerCurveExpansionFactor:(id)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (void)initialize;
+ (id)layer;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (BOOL)needsLayoutForKey:(id)arg1;
+ (id)properties;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)supportsSecureCoding;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (BOOL)CAMLTypeSupportedForKey:(id)arg1;
- (id)CA_archivingValueForKey:(id)arg1;
- (BOOL)CA_validateValue:(id)arg1 forKey:(id)arg2;
- (BOOL)_canDisplayConcurrently;
- (void)_cancelAnimationTimer;
- (void)_colorSpaceDidChange;
- (void)_contentsFormatDidChange:(id)arg1;
- (BOOL)_continuousCorners;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)_dealloc;
- (BOOL)_defersDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (void)_display;
- (id)_initWithReference:(id)arg1;
- (id)_layoutHash;
- (int)_overrideImageFormat;
- (struct CGSize)_preferredSize;
- (void)_prepareContext:(struct CGContext *)arg1;
- (id)_previousLayoutHash;
- (void)_renderBackgroundInContext:(struct CGContext *)arg1;
- (void)_renderBorderInContext:(struct CGContext *)arg1;
- (void)_renderForegroundInContext:(struct CGContext *)arg1;
- (unsigned int)_renderImageCopyFlags;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)_renderSublayersInContext:(struct CGContext *)arg1;
- (struct CGColorSpace *)_retainColorSpace;
- (void)_saveCurrentLayoutHash;
- (BOOL)_scheduleAnimationTimer;
- (void)_scrollPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (void)_scrollRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (void)_setPreviousLayoutHash:(id)arg1;
- (void)_validateLayoutHashHasChangedWithLayoutTime:(double)arg1;
- (struct CGRect)_visibleRectOfLayer:(id)arg1;
- (id)actionForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addLayoutDependent:(id)arg1;
- (void)addPresentationModifier:(id)arg1;
- (void)addState:(id)arg1;
- (void)addSublayer:(id)arg1;
- (struct CGAffineTransform)affineTransform;
- (BOOL)allowsWeakReference;
- (id)ancestorSharedWithLayer:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (void)clearHasBeenCommitted;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (BOOL)contentsAreFlipped;
- (id)context;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayer:(id)arg2;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)dependentStatesOfState:(id)arg1;
- (void)display;
- (void)displayIfNeeded;
- (BOOL)doubleSided;
- (void)drawInContext:(struct CGContext *)arg1;
- (BOOL)drawsMipmapLevels;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getRendererInfo:(struct _CARenderRendererInfo *)arg1 size:(unsigned long long)arg2;
- (BOOL)hasBeenCommitted;
- (BOOL)hidden;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)ignoresHitTesting;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)invalidateContents;
- (BOOL)isDescendantOf:(id)arg1;
- (BOOL)isFlipped;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)layoutBelowIfNeeded;
- (void)layoutIfNeeded;
- (BOOL)layoutIsActive;
- (void)layoutSublayers;
- (id)modelLayer;
- (BOOL)needsDisplay;
- (BOOL)needsLayout;
- (void *)observationInfo;
- (BOOL)opaque;
- (id)optimizationOpportunities:(BOOL)arg1;
- (struct CGSize)preferredFrameSize;
- (id)presentationLayer;
- (id)recursiveDescription;
- (void *)regionBeingDrawn;
- (oneway void)release;
- (void)reloadValueForKeyPath:(id)arg1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeFromSuperlayer;
- (void)removeLayoutDependent:(id)arg1;
- (void)removePresentationModifier:(id)arg1;
- (void)removeState:(id)arg1;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (void)scrollPoint:(struct CGPoint)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1;
- (void)setAffineTransform:(struct CGAffineTransform)arg1;
- (void)setContentsChanged;
- (void)setFlipped:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)setObservationInfo:(void *)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setWantsExtendedDynamicRangeContent:(BOOL)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (struct CGSize)size;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)stateWithName:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)wantsExtendedDynamicRangeContent;

@end
