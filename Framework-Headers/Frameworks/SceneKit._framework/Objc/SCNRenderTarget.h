//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CIImage, MISSING_TYPE, NSString;

@interface SCNRenderTarget : NSObject
{
    CDStruct_fd8065c6 _description;
    MISSING_TYPE *_size;
    unsigned long long _arrayLength;
    CIImage *_ciImage;
    id _texture;
    NSString *_name;
    long long _referenceCount;
    long long _timeStamp;
}

@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) long long referenceCount; // @synthesize referenceCount=_referenceCount;
@property (readonly, nonatomic) unsigned char renderBufferFormat;
@property (strong, nonatomic) id texture; // @synthesize texture=_texture;
@property (nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property (readonly, nonatomic) BOOL viewportDependant;

- (id)ciImage;
- (void)dealloc;
- (id)description;
- (id)initWithDescription:(CDStruct_fd8065c6 *)arg1 size:(unsigned long long)arg2 arrayLength: /* Error: Ran out of types for this method. */;
- (BOOL)matchesDescription:(CDStruct_fd8065c6 *)arg1 size:(unsigned long long)arg2 arrayLength: /* Error: Ran out of types for this method. */;

@end
