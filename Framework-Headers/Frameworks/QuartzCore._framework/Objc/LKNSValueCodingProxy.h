//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CACodingProxy.h>

__attribute__((visibility("hidden")))
@interface LKNSValueCodingProxy : CACodingProxy
{
    int _kind;
    union {
        struct CGPoint point;
        struct CGSize size;
        struct CGRect rect;
        struct CATransform3D transform;
        struct CAPoint3D point3d;
        struct CAColorMatrix color_matrix;
    } _u;
}

- (id)decodedObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;

@end

