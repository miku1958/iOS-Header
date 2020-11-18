//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class NSString;

@interface MTLSamplerDescriptor : NSObject <NSCopying>
{
    BOOL _lodAverage;
}

@property (nonatomic) unsigned long long borderColor; // @dynamic borderColor;
@property (nonatomic) unsigned long long compareFunction; // @dynamic compareFunction;
@property (copy, nonatomic) NSString *label; // @dynamic label;
@property (nonatomic) BOOL lodAverage; // @synthesize lodAverage=_lodAverage;
@property (nonatomic) float lodMaxClamp; // @dynamic lodMaxClamp;
@property (nonatomic) float lodMinClamp; // @dynamic lodMinClamp;
@property (nonatomic) unsigned long long magFilter; // @dynamic magFilter;
@property (nonatomic) unsigned long long maxAnisotropy; // @dynamic maxAnisotropy;
@property (nonatomic) unsigned long long minFilter; // @dynamic minFilter;
@property (nonatomic) unsigned long long mipFilter; // @dynamic mipFilter;
@property (nonatomic) BOOL normalizedCoordinates; // @dynamic normalizedCoordinates;
@property (nonatomic) unsigned long long rAddressMode; // @dynamic rAddressMode;
@property (nonatomic) unsigned long long sAddressMode; // @dynamic sAddressMode;
@property (nonatomic) BOOL supportArgumentBuffers; // @dynamic supportArgumentBuffers;
@property (nonatomic) unsigned long long tAddressMode; // @dynamic tAddressMode;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
