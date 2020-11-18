//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>
#import <PhotosUICore/PXGSpriteIndexReferencing-Protocol.h>

@class NSArray, NSDate, NSString, PXGLayout;
@protocol PXGAnchorDelegate;

@interface PXGAnchor : NSObject <PXGSpriteIndexReferencing, PXGDiagnosticsProvider>
{
    struct {
        BOOL visibleRectOriginForProposedVisibleRectForLayout;
    } _delegateRespondsTo;
    BOOL _needsUpdate;
    BOOL _autoInvalidated;
    id<PXGAnchorDelegate> _delegate;
    id _context;
    PXGLayout *_layout;
    long long _type;
    long long _priority;
    NSArray *_spriteReferences;
    NSArray *_spriteRects;
    unsigned long long _referencingOptions;
    unsigned long long _edges;
    unsigned long long _scrollPosition;
    NSDate *_date;
    NSArray *_constraints;
    CDUnknownBlockType _customOffset;
    struct CGSize _contentSize;
    struct CGRect _visibleRect;
    struct UIEdgeInsets _padding;
}

@property (readonly, nonatomic) unsigned long long anchoredContentEdges;
@property (readonly, nonatomic, getter=isAutoInvalidated) BOOL autoInvalidated; // @synthesize autoInvalidated=_autoInvalidated;
@property (readonly, nonatomic) BOOL canBeReused;
@property (copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (strong, nonatomic) id context; // @synthesize context=_context;
@property (copy, nonatomic) CDUnknownBlockType customOffset; // @synthesize customOffset=_customOffset;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGAnchorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (nonatomic) unsigned long long edges; // @synthesize edges=_edges;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isScrollingAnimationAnchor;
@property (readonly, weak, nonatomic) PXGLayout *layout; // @synthesize layout=_layout;
@property (nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property (nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (nonatomic) unsigned long long referencingOptions; // @synthesize referencingOptions=_referencingOptions;
@property (nonatomic) unsigned long long scrollPosition; // @synthesize scrollPosition=_scrollPosition;
@property (readonly, nonatomic) BOOL shouldFaultInContentAtAnchoredContentEdges;
@property (copy, nonatomic) NSArray *spriteRects; // @synthesize spriteRects=_spriteRects;
@property (copy, nonatomic) NSArray *spriteReferences; // @synthesize spriteReferences=_spriteReferences;
@property (readonly) Class superclass;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;

- (void).cxx_destruct;
- (void)_enumerateSpriteConstraintsUsingBlock:(CDUnknownBlockType)arg1;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2;
- (struct CGRect)adjustVisibleRect:(struct CGRect)arg1;
- (unsigned int)anchoredSpriteIndexInLayout:(id)arg1;
- (id)autoInvalidate;
- (id)copyWithLayout:(id)arg1;
- (void)enumerateAllSpriteReferencesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSpritesWithEnumerationOptions:(unsigned long long)arg1 referencingOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithLayout:(id)arg1;
- (void)invalidate;

@end
