//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>
#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCH3DVector : NSObject <TSSPropertyValueArchiving, NSCopying, NSMutableCopying>
{
    float _x;
    float _y;
    float _z;
    float _w;
}

@property (readonly, nonatomic) float w; // @synthesize w=_w;
@property (readonly, nonatomic) float x; // @synthesize x=_x;
@property (readonly, nonatomic) float y; // @synthesize y=_y;
@property (readonly, nonatomic) float z; // @synthesize z=_z;

+ (unsigned long long)hashVec4:(const tvec4_ac57c72d *)arg1;
+ (id)instanceWithArchive:(const struct Chart3DVectorArchive *)arg1 unarchiver:(id)arg2;
+ (id)vector;
+ (id)vectorWithVec2:(const tvec2_84d5962d *)arg1;
+ (id)vectorWithVec3:(const tvec3_17f03ce0 *)arg1;
+ (id)vectorWithVec4:(const tvec4_ac57c72d *)arg1;
+ (id)x:(float)arg1 y:(float)arg2 z:(float)arg3;
+ (id)x:(float)arg1 y:(float)arg2 z:(float)arg3 w:(float)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)didInitFromSOS;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct Chart3DVectorArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithVec2:(const tvec2_84d5962d *)arg1;
- (id)initWithVec3:(const tvec3_17f03ce0 *)arg1;
- (id)initWithVec4:(const tvec4_ac57c72d *)arg1;
- (id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3;
- (id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3 w:(float)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchive:(struct Chart3DVectorArchive *)arg1 archiver:(id)arg2;
- (tvec4_ac57c72d)value;
- (tvec2_84d5962d)value2;
- (tvec3_17f03ce0)value3;
- (tvec4_ac57c72d)value4;
- (float)valueForDimension:(unsigned long long)arg1;

@end

