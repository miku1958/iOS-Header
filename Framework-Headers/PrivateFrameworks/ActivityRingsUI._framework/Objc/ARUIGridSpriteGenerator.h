//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface ARUIGridSpriteGenerator : NSObject
{
    unsigned long long _spriteCount;
    unsigned long long _framesPerSprite;
    unsigned long long _columnsPerSprite;
    unsigned long long _rowsPerSprite;
}

+ (id)generatorWithSpriteCount:(unsigned long long)arg1 framesPerSprite:(unsigned long long)arg2 rowsPerSprite:(unsigned long long)arg3 columnsPerSprite:(unsigned long long)arg4;
- (MISSING_TYPE *)frameSize;
- (id)generateSprites;
- (id)initWithSpriteCount:(unsigned long long)arg1 framesPerSprite:(unsigned long long)arg2 rowsPerSprite:(unsigned long long)arg3 columnsPerSprite:(unsigned long long)arg4;
- (MISSING_TYPE *)originForSpriteAtIndex:(unsigned long long)arg1;
- (id)spriteAtIndex:(unsigned long long)arg1;

@end

