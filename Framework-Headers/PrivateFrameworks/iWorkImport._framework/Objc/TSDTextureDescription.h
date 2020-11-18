//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@protocol TSDAnimationSession;

__attribute__((visibility("hidden")))
@interface TSDTextureDescription : NSObject <NSCopying>
{
    unsigned int _isMagicMove:1;
    unsigned int _shouldAddFinal:1;
    unsigned int _shouldAddMasks:1;
    unsigned int _shouldAddMagicMoveObjectOnly:1;
    unsigned int _shouldNotAddContainedReps:1;
    unsigned int _shouldNotAddShapeAttributes:1;
    unsigned int _shouldNotAddText:1;
    unsigned int _shouldSeparateReflection:1;
    unsigned int _shouldSeparateShadow:1;
    unsigned int _shouldSeparateStroke:1;
    unsigned int _shouldAddParameterizedStroke:1;
    unsigned int _shouldReverseStrokeDrawing:1;
    unsigned int _shouldSeparateText:1;
    unsigned int _shouldIgnoreScaleInSourceImage:1;
    unsigned int _shouldDistortToFit:1;
    unsigned int _shouldForceTextureGeneration:1;
    BOOL _shouldAddNoShapeAttributes;
    int _byGlyphStyle;
    id<TSDAnimationSession> _session;
    unsigned long long _stage;
    unsigned long long _deliveryStyle;
}

@property (nonatomic) int byGlyphStyle; // @synthesize byGlyphStyle=_byGlyphStyle;
@property (nonatomic) unsigned long long deliveryStyle; // @synthesize deliveryStyle=_deliveryStyle;
@property (nonatomic) BOOL isMagicMove; // @synthesize isMagicMove=_isMagicMove;
@property (weak, nonatomic) id<TSDAnimationSession> session; // @synthesize session=_session;
@property (nonatomic) BOOL shouldAddFinal; // @synthesize shouldAddFinal=_shouldAddFinal;
@property (nonatomic) BOOL shouldAddMagicMoveObjectOnly; // @synthesize shouldAddMagicMoveObjectOnly=_shouldAddMagicMoveObjectOnly;
@property (nonatomic) BOOL shouldAddMasks; // @synthesize shouldAddMasks=_shouldAddMasks;
@property (nonatomic) BOOL shouldAddParameterizedStroke; // @synthesize shouldAddParameterizedStroke=_shouldAddParameterizedStroke;
@property (nonatomic) BOOL shouldDistortToFit; // @synthesize shouldDistortToFit=_shouldDistortToFit;
@property (nonatomic) BOOL shouldForceTextureGeneration; // @synthesize shouldForceTextureGeneration=_shouldForceTextureGeneration;
@property (nonatomic) BOOL shouldIgnoreScaleInSourceImage; // @synthesize shouldIgnoreScaleInSourceImage=_shouldIgnoreScaleInSourceImage;
@property (nonatomic) BOOL shouldNotAddContainedReps; // @synthesize shouldNotAddContainedReps=_shouldNotAddContainedReps;
@property (nonatomic) BOOL shouldNotAddShapeAttributes; // @synthesize shouldNotAddShapeAttributes=_shouldAddNoShapeAttributes;
@property (nonatomic) BOOL shouldNotAddText; // @synthesize shouldNotAddText=_shouldNotAddText;
@property (nonatomic) BOOL shouldReverseStrokeDrawing; // @synthesize shouldReverseStrokeDrawing=_shouldReverseStrokeDrawing;
@property (nonatomic) BOOL shouldSeparateReflection; // @synthesize shouldSeparateReflection=_shouldSeparateReflection;
@property (nonatomic) BOOL shouldSeparateShadow; // @synthesize shouldSeparateShadow=_shouldSeparateShadow;
@property (nonatomic) BOOL shouldSeparateStroke; // @synthesize shouldSeparateStroke=_shouldSeparateStroke;
@property (nonatomic) BOOL shouldSeparateText; // @synthesize shouldSeparateText=_shouldSeparateText;
@property (nonatomic) unsigned long long stage; // @synthesize stage=_stage;

+ (id)descriptionWithSession:(id)arg1;
+ (id)descriptionWithTextureDescription:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)reset;

@end

