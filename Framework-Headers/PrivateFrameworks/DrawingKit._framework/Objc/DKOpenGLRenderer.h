//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIColor;
@protocol DKOpenGLRendererDelegate;

__attribute__((visibility("hidden")))
@interface DKOpenGLRenderer : NSObject
{
    BOOL _didNotifyRendererDelegate;
    int mBufferSize;
    unsigned int mWetPaintProg;
    unsigned int mDryPaintProg;
    unsigned int mCompositeProg;
    unsigned int mTextureProg;
    unsigned int mColorProg;
    unsigned int mAttributes;
    unsigned int mVbo;
    struct _NSRange mVertexRange;
    vector_b8c3c0c5 mContiguousVertexStorage;
    struct vector<VertexGroup, std::__1::allocator<VertexGroup>> mVertexHistory;
    struct vector<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>>> mNonCollisionSegments;
    MISSING_TYPE *U_COLOR;
    struct vector<Page, std::__1::allocator<Page>> mPages;
    unsigned int mWetPaintBufferFBO;
    unsigned int mWetPaintBufferT;
    MISSING_TYPE *mWetPaintBufferSize;
    unsigned int mPaperTex;
    MISSING_TYPE *mWinSize;
    MISSING_TYPE *mCanvasSize;
    MISSING_TYPE *mCanvasOffset;
    float mTime;
    float mTimeWetBecameDirty;
    float mParticleLifespan;
    struct CGRect mDirtyCanvasRegion;
    int mCompositeProgViewportUniformLocation;
    int mWetPaintProgTimeUniformLocation;
    int mWetPaintProgSubtractEndPointsOnlyUniformLocation;
    int mWetPaintProgLifespanUniformLocation;
    int mDryPaintProgXCoordOffsetUniformLocation;
    int mColorProgColorUniformLocation;
    int mColorProgModelViewProjectionUniformLocation;
    int mTextureProgModelViewProjectionUniformLocation;
    BOOL _undoEnabled;
    BOOL _ignoreFirstUndoItem;
    BOOL _drawingEnabled;
    BOOL _allowWetComposite;
    id<DKOpenGLRendererDelegate> _delegate;
    UIColor *_inkColor;
    double _lineWidthScale;
    double _backingScale;
    long long _numPages;
    struct CGSize _contentSize;
    struct CGRect _bounds;
}

@property (nonatomic) BOOL allowWetComposite; // @synthesize allowWetComposite=_allowWetComposite;
@property (nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
@property (nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (weak, nonatomic) id<DKOpenGLRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL drawingEnabled; // @synthesize drawingEnabled=_drawingEnabled;
@property (nonatomic) BOOL ignoreFirstUndoItem; // @synthesize ignoreFirstUndoItem=_ignoreFirstUndoItem;
@property (strong, nonatomic) UIColor *inkColor; // @synthesize inkColor=_inkColor;
@property (nonatomic) double lineWidthScale; // @synthesize lineWidthScale=_lineWidthScale;
@property (nonatomic) long long numPages; // @synthesize numPages=_numPages;
@property (nonatomic, getter=isUndoEnabled) BOOL undoEnabled; // @synthesize undoEnabled=_undoEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoints:(id)arg1 withSegmentLength:(unsigned long long)arg2;
- (void)appendVertexHistoryElement;
- (BOOL)canvasIsEmpty;
- (void)clear;
- (void)clearComposite;
- (void)clearDryPaintBuffer;
- (void)clearWetPaintBuffer;
- (void)dealloc;
- (void)destroyFrameBuffers;
- (BOOL)detectCollision:: /* Error: Ran out of types for this method. */;
- (void)didBeginNewStroke;
- (void)didCompleteStroke;
- (void)didResize;
- (void)draw;
- (void)drawComposite;
- (void)drawContiguousVertexStorageImmediatelyWithLayeredBlending:(BOOL)arg1;
- (struct CGRect)getVertexBounds;
- (id)init;
- (BOOL)initGL;
- (id)initWithBounds:(struct CGRect)arg1 scale:(double)arg2;
- (id)initWithBounds:(struct CGRect)arg1 scale:(double)arg2 bufferSize:(int)arg3;
- (void)initializeFrameBuffers;
- (void)redrawEntireDrawingImmediatelyWithLayeredBlending:(BOOL)arg1;
- (struct CGRect)regionWithVertices:(vector_b8c3c0c5)arg1 withInflationAmount:(float)arg2;
- (void)removeVertexHistoryElement;
- (void)renderToComposite:(BOOL)arg1;
- (void)renderToDryPaintBuffer;
- (void)renderToWetPaintBufferWithRange:(struct _NSRange)arg1;
- (void)resetRendererState;
- (id)snapshot;
- (void)teardown;
- (void)undo;
- (void)update;
- (void)updateDryCycleIncludingComposite:(BOOL)arg1;
- (void)updateDryForcefully;
- (void)updateVertexControllerWithData:(vector_b8c3c0c5)arg1 range:(struct _NSRange)arg2 allowWet:(BOOL)arg3;
- (void)updateVertexControllerWithDataRange:(struct _NSRange)arg1 allowWet:(BOOL)arg2;
- (void)updateWet;

@end

