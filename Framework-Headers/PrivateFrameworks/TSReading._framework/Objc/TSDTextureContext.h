//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@protocol TSDAnimationSession;

@interface TSDTextureContext : NSObject <NSCopying>
{
    id<TSDAnimationSession> _session;
    unsigned int _isMagicMove:1;
    unsigned int _shouldAddFinal:1;
    unsigned int _shouldAddReversedFinal:1;
    unsigned int _shouldAddMagicMoveObjectOnly:1;
    unsigned int _shouldNotAddContainedReps:1;
    unsigned int _shouldNotAddShapeAttributes:1;
    unsigned int _shouldNotAddText:1;
    unsigned int _shouldNotCacheTexture:1;
    unsigned int _shouldSeparateReflection:1;
    unsigned int _shouldSeparateShadow:1;
    unsigned int _shouldSeparateStroke:1;
    unsigned int _shouldSeparateText:1;
    unsigned int _shouldDistortToFit:1;
    unsigned int _shouldForceTextureGeneration:1;
    BOOL _shouldAddNoShapeAttributes;
}

@property (nonatomic) BOOL isMagicMove; // @synthesize isMagicMove=_isMagicMove;
@property (nonatomic) id<TSDAnimationSession> session; // @synthesize session=_session;
@property (nonatomic) BOOL shouldAddFinal; // @synthesize shouldAddFinal=_shouldAddFinal;
@property (nonatomic) BOOL shouldAddMagicMoveObjectOnly; // @synthesize shouldAddMagicMoveObjectOnly=_shouldAddMagicMoveObjectOnly;
@property (nonatomic) BOOL shouldAddReversedFinal; // @synthesize shouldAddReversedFinal=_shouldAddReversedFinal;
@property (nonatomic) BOOL shouldDistortToFit; // @synthesize shouldDistortToFit=_shouldDistortToFit;
@property (nonatomic) BOOL shouldForceTextureGeneration; // @synthesize shouldForceTextureGeneration=_shouldForceTextureGeneration;
@property (nonatomic) BOOL shouldNotAddContainedReps; // @synthesize shouldNotAddContainedReps=_shouldNotAddContainedReps;
@property (nonatomic) BOOL shouldNotAddShapeAttributes; // @synthesize shouldNotAddShapeAttributes=_shouldAddNoShapeAttributes;
@property (nonatomic) BOOL shouldNotAddText; // @synthesize shouldNotAddText=_shouldNotAddText;
@property (nonatomic) BOOL shouldNotCacheTexture; // @synthesize shouldNotCacheTexture=_shouldNotCacheTexture;
@property (nonatomic) BOOL shouldSeparateReflection; // @synthesize shouldSeparateReflection=_shouldSeparateReflection;
@property (nonatomic) BOOL shouldSeparateShadow; // @synthesize shouldSeparateShadow=_shouldSeparateShadow;
@property (nonatomic) BOOL shouldSeparateStroke; // @synthesize shouldSeparateStroke=_shouldSeparateStroke;
@property (nonatomic) BOOL shouldSeparateText; // @synthesize shouldSeparateText=_shouldSeparateText;

+ (id)context;
+ (id)contextWithSession:(id)arg1;
+ (id)contextWithTextureContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)reset;

@end

