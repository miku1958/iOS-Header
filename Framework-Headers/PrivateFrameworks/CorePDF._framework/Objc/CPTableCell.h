//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPChunk.h>

#import <CorePDF/CPDisposable-Protocol.h>

@interface CPTableCell : CPChunk <CPDisposable>
{
    struct CGRect cellBounds;
    CDStruct_627e0f85 rowSpan;
    CDStruct_627e0f85 columnSpan;
    struct {
        struct CGRect _field1;
        struct CGColor *_field2;
        unsigned int _field3;
        id *_field4;
    } *borders;
    struct CGColor *backgroundColor;
    unsigned int backgroundGraphicCount;
    id *backgroundGraphics;
}

@property (readonly, nonatomic) unsigned int backgroundGraphicCount; // @synthesize backgroundGraphicCount;
@property (readonly, nonatomic) struct CGRect cellBounds; // @synthesize cellBounds;
@property (nonatomic) CDStruct_627e0f85 columnSpan; // @synthesize columnSpan;
@property (nonatomic) CDStruct_627e0f85 rowSpan; // @synthesize rowSpan;

- (struct CGColor *)backgroundColor;
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;
- (struct CGRect)boundsOfBorder:(int)arg1;
- (struct CGColor *)colorOfBorder:(int)arg1;
- (long long)compareCellOrdinal:(id)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (unsigned int)graphicCountOfBorder:(int)arg1;
- (id)graphicObjectOfBorder:(int)arg1 atIndex:(unsigned int)arg2;
- (id)initWithBounds:(struct CGRect)arg1;
- (void)setBackgroundGraphics:(id)arg1;
- (void)setBorder:(int)arg1 bounds:(struct CGRect)arg2 graphics:(id)arg3;

@end

