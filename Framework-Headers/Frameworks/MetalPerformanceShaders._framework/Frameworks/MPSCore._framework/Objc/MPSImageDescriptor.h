//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPSCore/NSCopying-Protocol.h>

@interface MPSImageDescriptor : NSObject <NSCopying>
{
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _featureChannels;
    unsigned long long _numberOfImages;
    unsigned long long _channelFormat;
    unsigned long long _cacheMode;
    unsigned long long _storageMode;
    unsigned long long _usage;
    unsigned long long _featureChannelsLayout;
    unsigned long long _featureChannelFormat;
    unsigned long long _cpuCacheMode;
}

@property (nonatomic) unsigned long long channelFormat; // @synthesize channelFormat=_channelFormat;
@property (nonatomic) unsigned long long cpuCacheMode; // @synthesize cpuCacheMode=_cpuCacheMode;
@property (nonatomic) unsigned long long featureChannels; // @synthesize featureChannels=_featureChannels;
@property (nonatomic) unsigned long long featureChannelsLayout; // @synthesize featureChannelsLayout=_featureChannelsLayout;
@property (nonatomic) unsigned long long height; // @synthesize height=_height;
@property (nonatomic) unsigned long long numberOfImages; // @synthesize numberOfImages=_numberOfImages;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long storageMode; // @synthesize storageMode=_storageMode;
@property (nonatomic) unsigned long long usage; // @synthesize usage=_usage;
@property (nonatomic) unsigned long long width; // @synthesize width=_width;

+ (id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4;
+ (id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4 numberOfImages:(unsigned long long)arg5 usage:(unsigned long long)arg6;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)debugQuickLookObject;
- (id)init;
- (id)newTextureDescriptor;

@end
