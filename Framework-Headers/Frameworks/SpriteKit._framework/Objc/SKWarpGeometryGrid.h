//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKWarpGeometry.h>

#import <SpriteKit/NSCoding-Protocol.h>

@class MISSING_TYPE;

@interface SKWarpGeometryGrid : SKWarpGeometry <NSCoding>
{
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _sourcePositions;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _destPositions;
    MISSING_TYPE *_dimensions;
    int _vertexCount;
    BOOL _isIdentityWarp;
}

@property (readonly, nonatomic) const MISSING_TYPE **destPositions;
@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) long long numberOfRows;
@property (readonly, nonatomic) const MISSING_TYPE **sourcePositions;
@property (readonly, nonatomic) long long vertexCount;

+ (id)grid;
+ (id)gridWithColumns:(long long)arg1 rows:(long long)arg2;
+ (id)gridWithColumns:(long long)arg1 rows:(long long)arg2 sourcePositions:(const MISSING_TYPE **)arg3 destPositions:(const MISSING_TYPE **)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (MISSING_TYPE *)destPositionAtIndex:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)gridByReplacingDestPositions:(const MISSING_TYPE **)arg1;
- (id)gridByReplacingSourcePositions:(const MISSING_TYPE **)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithColumns:(long long)arg1 rows:(long long)arg2 sourcePositions:(const MISSING_TYPE **)arg3 destPositions:(const MISSING_TYPE **)arg4;
- (BOOL)isIdentityWarp;
- (MISSING_TYPE *)sourcePositionAtIndex:(long long)arg1;

@end
