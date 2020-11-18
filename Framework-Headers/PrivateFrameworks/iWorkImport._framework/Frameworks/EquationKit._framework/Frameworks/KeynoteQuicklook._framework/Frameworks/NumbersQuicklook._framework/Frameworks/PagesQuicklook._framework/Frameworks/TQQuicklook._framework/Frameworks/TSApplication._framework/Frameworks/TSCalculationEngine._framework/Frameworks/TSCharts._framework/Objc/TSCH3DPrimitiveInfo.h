//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DResource;

@interface TSCH3DPrimitiveInfo : NSObject
{
    int _type;
    int _offset;
    unsigned int _count;
    TSCH3DResource *_indices;
}

@property (readonly, nonatomic) unsigned int count; // @synthesize count=_count;
@property (readonly, nonatomic) BOOL hasCount;
@property (readonly, nonatomic) BOOL hasEmptyCount;
@property (readonly, nonatomic) BOOL hasOffset;
@property (readonly, strong, nonatomic) TSCH3DResource *indices; // @synthesize indices=_indices;
@property (readonly, nonatomic) int offset; // @synthesize offset=_offset;
@property (readonly, nonatomic) int type; // @synthesize type=_type;

+ (id)infoWithType:(int)arg1;
+ (id)infoWithType:(int)arg1 offset:(int)arg2 count:(unsigned int)arg3 indices:(id)arg4;
- (void)dealloc;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 offset:(int)arg2 count:(unsigned int)arg3 indices:(id)arg4;

@end
