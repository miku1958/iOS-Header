//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhysicsKit/NSCoding-Protocol.h>
#import <PhysicsKit/NSCopying-Protocol.h>

@interface PKRegion : NSObject <NSCopying, NSCoding>
{
    int _shape;
    BOOL _isExclusive;
    struct vec4 _halfExtent;
    struct shared_ptr<PKCPathHolder> _path;
    int _regionOp;
    int _shape2;
    struct vec4 _halfExtent2;
    struct shared_ptr<PKCPathHolder> _path2;
}

@property (readonly, nonatomic) struct CGPath *path;

+ (id)infiniteRegion;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)containsPoints:(const float *)arg1 locationStride:(long long)arg2 results:(char *)arg3 resultsStride:(long long)arg4 count:(int)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(struct CGPath *)arg1;
- (id)initWithRadius:(float)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)inverseRegion;
- (BOOL)isEmpty;
- (BOOL)isInfinite;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;

@end
