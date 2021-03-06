//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@interface HMCameraClipPosterFrame : NSObject <NSCopying, NSSecureCoding>
{
    double _timeOffset;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _byteOffset;
    unsigned long long _sizeInBytes;
}

@property (readonly) unsigned long long byteOffset; // @synthesize byteOffset=_byteOffset;
@property (readonly) unsigned long long height; // @synthesize height=_height;
@property (readonly) unsigned long long sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property (readonly) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property (readonly) unsigned long long width; // @synthesize width=_width;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeOffset:(double)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 byteOffset:(unsigned long long)arg4 sizeInBytes:(unsigned long long)arg5;
- (BOOL)isEqual:(id)arg1;

@end

