//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <JavaScriptCore/JSValue.h>

@interface JSValue (OKJavaScriptValue)
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1 inContext:(id)arg2;
+ (id)valueWithCoodinateRegion:(CDStruct_feeb6407)arg1 inContext:(id)arg2;
+ (id)valueWithEdgeInsets:(struct OKEdgeInsets)arg1 inContext:(id)arg2;
+ (id)valueWithLocationCoordinate2D:(struct OKLocationCoordinate2D)arg1 inContext:(id)arg2;
+ (id)valueWithOffset:(struct UIOffset)arg1 inContext:(id)arg2;
+ (id)valueWithVector3:(struct SCNVector3)arg1 inContext:(id)arg2;
+ (id)valueWithVector4:(struct SCNVector4)arg1 inContext:(id)arg2;
- (BOOL)isVector3;
- (BOOL)isVector4;
- (struct CATransform3D)toCATransform3D;
- (CDStruct_feeb6407)toCoordinateRegion;
- (struct OKEdgeInsets)toEdgeInsets;
- (struct OKLocationCoordinate2D)toLocationCoordinate2D;
- (struct UIOffset)toOffset;
- (struct SCNVector3)toVector3;
- (struct SCNVector4)toVector4;
@end

