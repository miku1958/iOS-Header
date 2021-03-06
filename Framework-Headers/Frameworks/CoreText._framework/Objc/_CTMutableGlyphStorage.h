//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreText/_CTGlyphStorage.h>

#import <CoreText/_CTGlyphStorageAdvanceLookup-Protocol.h>

@class CTGlyphStorageInterface;

__attribute__((visibility("hidden")))
@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup>
{
    CTGlyphStorageInterface *_interface;
    BOOL _implementsOrigins;
    BOOL _implementsCustomAdvancesForGlyphs;
}

@property (readonly, nonatomic) BOOL implementsCustomAdvancesForGlyphs; // @synthesize implementsCustomAdvancesForGlyphs=_implementsCustomAdvancesForGlyphs;
@property (readonly, nonatomic) BOOL implementsOrigins; // @synthesize implementsOrigins=_implementsOrigins;

- (long long)attachmentCountAtIndex:(long long)arg1;
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;
- (struct CGSize)customAdvanceForIndex:(long long)arg1;
- (void)disposeGlyphStack;
- (void)getCustomAdvances:(struct CGSize *)arg1 forGlyphs:(const unsigned short *)arg2 count:(long long)arg3;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (id)initWithInterface:(id)arg1;
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;
- (struct CGPoint)originAtIndex:(long long)arg1;
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

