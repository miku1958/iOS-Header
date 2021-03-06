//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADVector3D : NSObject <NSCopying>
{
    float mDx;
    float mDy;
    float mDz;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (float)dx;
- (float)dy;
- (float)dz;
- (unsigned long long)hash;
- (id)initWithDx:(float)arg1 dy:(float)arg2 dz:(float)arg3;
- (BOOL)isEqual:(id)arg1;

@end

