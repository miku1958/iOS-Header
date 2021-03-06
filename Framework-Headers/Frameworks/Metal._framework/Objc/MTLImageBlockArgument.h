//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLArgumentInternal.h>

@class MTLStructTypeInternal;

__attribute__((visibility("hidden")))
@interface MTLImageBlockArgument : MTLArgumentInternal
{
    unsigned long long _kind;
    unsigned int _dataSize;
    MTLStructTypeInternal *_masterStructMembers;
    BOOL _aliasImplicitImageBlock;
    unsigned int _aliasImplicitImageBlockRenderTarget;
}

- (BOOL)aliasImplicitImageBlock;
- (unsigned long long)aliasImplicitImageBlockRenderTarget;
- (void)dealloc;
- (unsigned long long)imageBlockDataSize;
- (unsigned long long)imageBlockKind;
- (id)imageBlockMasterStructMembers;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 index:(unsigned long long)arg5 kind:(unsigned long long)arg6 dataSize:(unsigned int)arg7 masterStructMembers:(id)arg8 aliasImplicitImageBlock:(BOOL)arg9 aliasImplicitImageBlockRenderTarget:(unsigned int)arg10;
- (void)setStructType:(id)arg1;

@end

