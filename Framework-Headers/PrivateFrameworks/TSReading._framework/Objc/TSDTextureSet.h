//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class CALayer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, TSDRep, TSUNoCopyDictionary;

@interface TSDTextureSet : NSObject <NSCopying>
{
    struct CGPoint mCenter;
    struct CGRect mBounds;
    struct CGPoint mOriginalPosition;
    BOOL mIsBaked;
    BOOL mShouldIncludeFinalTexturesInVisibleSet;
    BOOL mShouldTransformUsingTextureCenter;
    unsigned long long mChunkCount;
    NSMutableArray *mTextures;
    NSMutableArray *mAllTextures;
    TSUNoCopyDictionary *mStageIndexForTexture;
    NSMutableDictionary *mFinalTextureForStage;
    NSMutableDictionary *mBoundingRectForStage;
    NSMutableDictionary *mContentRectForStage;
    NSMutableDictionary *mReverseFinalTextureForStage;
    TSUNoCopyDictionary *mFinalTexturesToStageMap;
    TSUNoCopyDictionary *mReverseFinalTexturesToStageMap;
    NSDictionary *mBakedAttributes;
    struct _NSRange mActiveChunkIndices;
    CALayer *mLayer;
    BOOL mIsMagicMove;
    double mTextureOpacity;
    struct CGRect mTextureContentRect;
    double mTextureAngle;
    long long mTextureZOrder;
    BOOL mIsBackground;
    CALayer *mAlternateLayer;
    TSDRep *mRep;
    struct CGColorSpace *mColorSpace;
    long long mMaxStageIndex;
    long long _stageIndex;
}

@property (readonly, nonatomic) NSArray *allTextures; // @synthesize allTextures=mAllTextures;
@property (strong, nonatomic) CALayer *alternateLayer; // @synthesize alternateLayer=mAlternateLayer;
@property (readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=mBounds;
@property (strong, nonatomic) NSDictionary *boundingRectForStage; // @synthesize boundingRectForStage=mBoundingRectForStage;
@property (nonatomic) struct CGPoint center; // @synthesize center=mCenter;
@property (readonly, nonatomic) unsigned long long chunkCount; // @synthesize chunkCount=mChunkCount;
@property (nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=mColorSpace;
@property (strong, nonatomic) NSDictionary *contentRectForStage; // @synthesize contentRectForStage=mContentRectForStage;
@property (readonly, nonatomic) struct CGRect frame;
@property (nonatomic) BOOL isBackground; // @synthesize isBackground=mIsBackground;
@property (nonatomic) BOOL isBaked; // @synthesize isBaked=mIsBaked;
@property (nonatomic) BOOL isMagicMove; // @synthesize isMagicMove=mIsMagicMove;
@property (readonly, nonatomic) BOOL isRenderable;
@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic) long long maxStageIndex; // @synthesize maxStageIndex=mMaxStageIndex;
@property (nonatomic) struct CGPoint originalPosition; // @synthesize originalPosition=mOriginalPosition;
@property TSDRep *rep; // @synthesize rep=mRep;
@property (nonatomic) BOOL shouldIncludeFinalTexturesInVisibleSet; // @synthesize shouldIncludeFinalTexturesInVisibleSet=mShouldIncludeFinalTexturesInVisibleSet;
@property (nonatomic) BOOL shouldTransformUsingTextureCenter; // @synthesize shouldTransformUsingTextureCenter=mShouldTransformUsingTextureCenter;
@property (readonly, nonatomic) long long stageIndex; // @synthesize stageIndex=_stageIndex;
@property (nonatomic) double textureAngle; // @synthesize textureAngle=mTextureAngle;
@property (nonatomic) struct CGRect textureContentRect; // @synthesize textureContentRect=mTextureContentRect;
@property (nonatomic) double textureOpacity; // @synthesize textureOpacity=mTextureOpacity;
@property (nonatomic) long long textureZOrder; // @synthesize textureZOrder=mTextureZOrder;
@property (readonly, nonatomic) NSArray *visibleTextures;

- (void)addFinalTexture:(id)arg1 forStage:(long long)arg2 reverse:(BOOL)arg3;
- (void)addPerspectiveLayerToTexture:(id)arg1 withShowSize:(struct CGSize)arg2;
- (void)addRenderable:(id)arg1;
- (void)addRenderable:(id)arg1 forStage:(long long)arg2;
- (void)adjustAnchorPointRelativeToCenterOfRotation;
- (void)applyActionEffect:(id)arg1 viewScale:(double)arg2 isMagicMove:(BOOL)arg3 shouldBake:(BOOL)arg4 applyScaleOnly:(BOOL)arg5 ignoreScale:(BOOL)arg6 shouldCheckActionKeys:(BOOL)arg7;
- (struct CGRect)boundingRectForStage:(long long)arg1 isBuildIn:(BOOL)arg2;
- (struct CGRect)contentRectForStage:(long long)arg1 isBuildIn:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)finalTextureForStage:(long long)arg1 reverse:(BOOL)arg2;
- (id)firstVisibleTextureForTextureType:(int)arg1;
- (void)hideLayersOfFinalTextures;
- (id)init;
- (BOOL)isBackgroundTexture:(id)arg1;
- (id)newFlattenedTexture;
- (id)newFlattenedTextureFromTextures:(id)arg1 newRect:(struct CGRect)arg2;
- (void)p_applyPositionFromAttributes:(id)arg1 viewScale:(double)arg2;
- (void)p_resetAttributesWithViewScale:(double)arg1;
- (void)removeRenderable:(id)arg1;
- (void)renderIntoContext:(struct CGContext *)arg1;
- (void)renderLayerContentsIfNeeded;
- (void)resetAnchorPoint;
- (void)setBoundingRect:(struct CGRect)arg1;
- (void)setBoundingRect:(struct CGRect)arg1 forStage:(long long)arg2;
- (void)setContentRect:(struct CGRect)arg1 forStage:(long long)arg2;
- (void)setLayerGeometryFromRep:(id)arg1;
- (long long)stageIndexForTexture:(id)arg1;
- (void)teardown;
- (id)visibleTexturesForStage:(long long)arg1 isBuildIn:(BOOL)arg2 shouldFlatten:(BOOL)arg3;

@end

