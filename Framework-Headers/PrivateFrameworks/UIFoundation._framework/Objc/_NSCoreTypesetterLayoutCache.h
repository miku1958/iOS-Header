//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSCoreTypesetterLayoutCache : NSObject
{
    unsigned long long _count;
    unsigned short *_glyphs;
    struct CGSize *_advances;
    double _elasticAdvances;
    struct __CTFont *_resolvedFont;
    long long _textAlignment;
    struct __CTLine *_line;
    BOOL _lineValidForDrawing;
}

- (void)dealloc;

@end
