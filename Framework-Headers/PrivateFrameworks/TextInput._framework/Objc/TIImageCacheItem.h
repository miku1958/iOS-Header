//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSData;

@interface TIImageCacheItem : NSObject <NSSecureCoding>
{
    unsigned char _format;
    double _scale;
    struct CGColor *_formatColor;
    NSData *_data;
    struct CGSize _size;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (nonatomic) unsigned char format; // @synthesize format=_format;
@property (nonatomic) struct CGColor *formatColor; // @synthesize formatColor=_formatColor;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;

+ (id)cacheItemWithSize:(struct CGSize)arg1 format:(unsigned char)arg2 formatColor:(struct CGColor *)arg3 scale:(double)arg4 data:(id)arg5;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

