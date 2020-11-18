//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DDataBuffer : NSObject
{
}

@property (readonly, nonatomic) unsigned long long byteSize;
@property (readonly, nonatomic) unsigned long long componentByteSize;
@property (readonly, nonatomic) unsigned long long elementByteSize;
@property (readonly, nonatomic) BOOL hasLevels;
@property (readonly, nonatomic) tvec3_c2818ced size;
@property (readonly, nonatomic) tvec2_3b141483 size2;

- (struct DataBufferInfo)bufferInfo;
- (struct DataBufferLevelData)dataAtLevel:(unsigned long long)arg1;
- (struct DataBufferLevelData)dataWithSizeGreaterOrEqualTo:(unsigned long long)arg1;
- (id)description;

@end

