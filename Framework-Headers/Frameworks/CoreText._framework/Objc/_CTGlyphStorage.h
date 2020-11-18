//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CTGlyphStorage : NSObject
{
    long long _count;
    const unsigned short *_glyphs;
    const struct CGSize *_advances;
    const unsigned int *_props;
    const long long *_stringIndices;
}

- (long long)attachmentCountAtIndex:(long long)arg1;
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;
- (void)disposeGlyphStack;
- (BOOL)implementsOrigins;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (id)initWithCount:(long long)arg1;
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;
- (struct CGPoint)originAtIndex:(long long)arg1;
- (const struct CGPoint *)origins;
- (void)popGlyphAtIndex:(long long)arg1;
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;
- (void)pushGlyphAtIndex:(long long)arg1;
- (void *)refCon;
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;
- (void)setOrigin:(struct CGPoint)arg1 atIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)sync;

@end

