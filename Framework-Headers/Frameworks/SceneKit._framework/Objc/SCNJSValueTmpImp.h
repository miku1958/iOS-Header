//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCNJSValueTmpImp : NSObject
{
}

+ (id)valueWithTransform3D:(struct SCNMatrix4)arg1 inContext:(id)arg2;
+ (id)valueWithVector3:(struct SCNVector3)arg1 inContext:(id)arg2;
+ (id)valueWithVector4:(struct SCNVector4)arg1 inContext:(id)arg2;
- (struct SCNMatrix4)toTransform3D;
- (struct SCNVector3)toVector3;
- (struct SCNVector4)toVector4;

@end

