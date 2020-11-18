//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject
{
    void *_line;
    NSATSTypesetter *_typesetter;
    struct _NSRange _glyphRange;
    struct _NSRange _characterRange;
    double _minPosition;
    double _maxPosition;
    long long _elasticCharIndex;
    double _elasticRangeWidth;
    unsigned int _hyphenGlyph;
    double _hyphenGlyphWidth;
    struct {
        unsigned int _directionState:2;
        unsigned int _drawsOutside:1;
        unsigned int _standaloneAttachment:1;
        unsigned int _reserved:28;
    } _flags;
}

- (void)dealloc;
- (void)finalize;

@end
