//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKUIMmapFile, NSData, NSString;

@interface CLKUIAtlasBacking : NSObject
{
    NSData *_data;
    CLKUIMmapFile *_mmapFile;
    NSString *_uuid;
    struct CLKUIAtlasBackingStructure _structure;
}

@property (readonly, nonatomic) const void *bytes; // @dynamic bytes;
@property (readonly, nonatomic) unsigned long long bytesPerPixel; // @dynamic bytesPerPixel;
@property (nonatomic) unsigned char filter; // @dynamic filter;
@property (readonly, nonatomic) unsigned char format; // @dynamic format;
@property (readonly, nonatomic) unsigned long long height; // @dynamic height;
@property (readonly, nonatomic) unsigned long long length; // @dynamic length;
@property (readonly, nonatomic) unsigned long long mipCount;
@property (readonly, nonatomic) BOOL mipmaps;
@property (readonly, nonatomic) unsigned long long planeLength; // @dynamic planeLength;
@property (readonly, nonatomic) unsigned long long planes; // @dynamic planes;
@property (readonly, nonatomic) struct CLKUIAtlasBackingStructure structure; // @synthesize structure=_structure;
@property (readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property (readonly, nonatomic) unsigned long long width; // @dynamic width;
@property (nonatomic) unsigned char wrap; // @dynamic wrap;

+ (id)atlasBackingWithArt:(id)arg1 uuid:(id)arg2;
+ (id)atlasBackingWithBytes:(const void *)arg1 length:(unsigned long long)arg2 mmapFile:(id)arg3 uuid:(id)arg4;
+ (id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2;
+ (id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2 mipmap:(BOOL)arg3;
- (void).cxx_destruct;
- (id)initWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure)arg2 data:(id)arg3;
- (id)initWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure)arg2 mmapFile:(id)arg3;
- (BOOL)writeToFile:(id)arg1 error:(id *)arg2;

@end

