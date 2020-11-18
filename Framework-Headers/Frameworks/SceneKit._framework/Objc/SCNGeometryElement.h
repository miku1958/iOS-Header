//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface SCNGeometryElement : NSObject <NSSecureCoding>
{
    struct __C3DMeshElement *_meshElement;
    NSData *_elementData;
    long long _primitiveType;
    long long _primitiveCount;
    long long _bytesPerIndex;
}

@property (readonly, nonatomic) long long bytesPerIndex;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long primitiveCount;
@property (readonly, nonatomic) long long primitiveType;

+ (id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
+ (id)geometryElementWithMDLSubmesh:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
- (id)initWithMeshElement:(struct __C3DMeshElement *)arg1;
- (struct __C3DMeshElement *)meshElement;

@end

