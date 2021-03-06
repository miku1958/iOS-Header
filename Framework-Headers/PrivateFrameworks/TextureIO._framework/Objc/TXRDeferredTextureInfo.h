//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface TXRDeferredTextureInfo : NSObject
{
    TXRTextureInfo *_info;
    NSMutableArray *_mipmaps;
}

@property (strong, nonatomic) TXRTextureInfo *info; // @synthesize info=_info;
@property (readonly, nonatomic) NSMutableArray *mipmaps; // @synthesize mipmaps=_mipmaps;

- (void).cxx_destruct;
- (id)initWithMipmapLevelCount:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(BOOL)arg3;

@end

