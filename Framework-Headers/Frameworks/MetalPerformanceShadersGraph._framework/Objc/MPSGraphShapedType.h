//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetalPerformanceShadersGraph/NSCopying-Protocol.h>

@class NSArray;

@interface MPSGraphShapedType : NSObject <NSCopying>
{
    unsigned int _dataType;
    NSArray *_shape;
}

@property unsigned int dataType; // @synthesize dataType=_dataType;
@property (copy) NSArray *shape; // @synthesize shape=_shape;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShape:(id)arg1 dataType:(unsigned int)arg2;
- (BOOL)isEqualTo:(id)arg1;

@end

