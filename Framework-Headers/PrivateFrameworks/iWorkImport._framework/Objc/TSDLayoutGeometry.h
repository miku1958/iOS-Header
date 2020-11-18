//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>

@class TSDInfoGeometry;

__attribute__((visibility("hidden")))
@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying>
{
    struct CGSize _size;
    struct CGAffineTransform _transform;
}

@property (readonly, nonatomic) struct CGPoint center;
@property (readonly, nonatomic) struct CGRect frame;
@property (readonly, nonatomic) struct CGAffineTransform fullTransform;
@property (readonly, nonatomic) TSDInfoGeometry *infoGeometry;
@property (readonly, nonatomic) struct CGAffineTransform inverseTransform;
@property (readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property (readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;

+ (id)geometryFromFullTransform:(struct CGAffineTransform)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)differsInMoreThanTranslationFrom:(id)arg1;
- (id)geometryByOutsettingBy:(struct CGSize)arg1;
- (id)geometryByTransformingBy:(struct CGAffineTransform)arg1;
- (id)geometryByTranslatingBy:(struct CGPoint)arg1;
- (unsigned long long)hash;
- (void)i_setSize:(struct CGSize)arg1;
- (void)i_setTransform:(struct CGAffineTransform)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithInfoGeometry:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct CGAffineTransform)transformByConcatenatingTransformTo:(struct CGAffineTransform)arg1;

@end

