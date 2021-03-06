//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICDrawingCommandData : NSObject
{
    struct CGRect _cachedBounds;
    vector_352d2fdf _points;
    BOOL _isClipped;
    unsigned int _type;
    struct CGColor *_color;
    struct CGPoint _clipOrigin;
    struct CGPoint _clipNormal;
    CDStruct_30364a2d _parameters;
    struct ICDrawingCommandID _commandID;
    CDStruct_4a3d0796 _baseValues;
}

@property (nonatomic) CDStruct_4a3d0796 baseValues; // @synthesize baseValues=_baseValues;
@property (readonly, nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGPoint clipNormal; // @synthesize clipNormal=_clipNormal;
@property (nonatomic) struct CGPoint clipOrigin; // @synthesize clipOrigin=_clipOrigin;
@property (strong, nonatomic) struct CGColor *color; // @synthesize color=_color;
@property (nonatomic) struct ICDrawingCommandID commandID; // @synthesize commandID=_commandID;
@property BOOL isClipped; // @synthesize isClipped=_isClipped;
@property (nonatomic) CDStruct_30364a2d parameters; // @synthesize parameters=_parameters;
@property (readonly, nonatomic) vector_352d2fdf *points; // @synthesize points=_points;
@property (readonly, nonatomic) unsigned int randomSeed;
@property (nonatomic) unsigned int type; // @synthesize type=_type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct Command *)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;
- (void)invalidateBounds;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualDrawingCommandData:(id)arg1;
- (CDStruct_4a3d0796)readPointFromArchive:(const struct Point *)arg1 deltaFrom:(const CDStruct_4a3d0796 *)arg2;
- (double)renderCost;
- (unsigned int)savePoint:(const CDStruct_4a3d0796 *)arg1 deltaFrom:(const CDStruct_4a3d0796 *)arg2 toArchive:(struct Point *)arg3;
- (unsigned int)saveToArchive:(struct Command *)arg1 sortedUUIDs:(id)arg2 withPathData:(BOOL)arg3 isHidden:(BOOL)arg4;
- (CDStruct_30364a2d)version1Parameters;

@end

