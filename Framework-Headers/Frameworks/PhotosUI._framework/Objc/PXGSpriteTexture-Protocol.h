//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSIndexSet;

@protocol PXGSpriteTexture <NSObject>

@property (readonly, nonatomic) long long estimatedByteSize;
@property (readonly, nonatomic) struct CGImage *imageRepresentation;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) struct CGSize pixelSize;
@property (readonly, nonatomic) int presentationType;
@property (readonly, nonatomic) unsigned int spriteCount;
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;

- (BOOL)containsSpriteIndex:(unsigned int)arg1;
- (void)enumerateSpriteIndexes:(void (^)(unsigned int, BOOL *))arg1;
- (void)getSpriteIndexes:(unsigned int *)arg1 maxSpriteCount:(unsigned int)arg2;
@end

