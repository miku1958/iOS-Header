//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface TSCH3DMipmaps : NSObject
{
    int mWidth;
    int mHeight;
    unsigned long long mComponents;
    NSData *mData;
}

@property (readonly, nonatomic) unsigned long long components; // @synthesize components=mComponents;
@property (readonly, nonatomic) NSData *data; // @synthesize data=mData;
@property (readonly, nonatomic) int height; // @synthesize height=mHeight;
@property (readonly, nonatomic) int width; // @synthesize width=mWidth;

+ (id)mipmapNameFromImageName:(id)arg1;
+ (struct CGSize)mipmapSizeForTexturableSize:(struct CGSize)arg1;
+ (id)mipmapsFromData:(id)arg1;
+ (id)mipmapsWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4;
+ (struct CGSize)optimizedMipmapLevel0Size;
- (void).cxx_destruct;
- (id)description;
- (id)initFromData:(id)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4;
- (BOOL)valid;
- (BOOL)writeToFile:(id)arg1;

@end
