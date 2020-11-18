//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class SCNGeometry;

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding>
{
    struct __C3DLOD *_lod;
    long long _mode;
    SCNGeometry *_geometry;
}

@property (readonly) SCNGeometry *geometry;
@property (readonly) double screenSpaceRadius;
@property (readonly) double worldSpaceDistance;

+ (id)levelOfDetailWithGeometry:(id)arg1 screenSpaceRadius:(double)arg2;
+ (id)levelOfDetailWithGeometry:(id)arg1 worldSpaceDistance:(double)arg2;
+ (BOOL)supportsSecureCoding;
- (void *)__CFObject;
- (void)_customEncodingOfSCNLevelOfDetail:(id)arg1;
- (void)_didDecodeSCNLevelOfDetail:(id)arg1;
- (void)_setupWithGeometry:(id)arg1 thresholdMode:(long long)arg2 value:(double)arg3;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 lod:(struct __C3DLOD *)arg3;
- (id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 thresholdValue:(id)arg3;
- (long long)thresholdMode;
- (id)thresholdValue;

@end

