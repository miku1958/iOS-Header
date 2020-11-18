//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTextTableBlock;

@interface NSTextBlockLayoutHelper : NSObject
{
    NSTextTableBlock *_block;
    struct _NSRange _charRange;
    struct _NSRange _glyphRange;
    struct CGRect _layoutRect;
    struct CGRect _boundsRect;
    double _lMargin;
    double _lBorder;
    double _lPadding;
    double _tMargin;
    double _tBorder;
    double _tPadding;
    double _width;
    double _height;
    double _rPadding;
    double _rBorder;
    double _rMargin;
    double _bPadding;
    double _bBorder;
    double _bMargin;
}

@property (readonly) NSTextTableBlock *block;

- (void)dealloc;
- (id)description;
- (id)initWithTextBlock:(id)arg1 charIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 collapseBorders:(BOOL)arg6;
- (id)initWithTextBlock:(id)arg1 charRange:(struct _NSRange)arg2 glyphRange:(struct _NSRange)arg3 layoutRect:(struct CGRect)arg4 boundsRect:(struct CGRect)arg5 containerWidth:(double)arg6 allowMargins:(BOOL)arg7 collapseBorders:(BOOL)arg8 allowPadding:(BOOL)arg9;
- (id)initWithTextBlock:(id)arg1 charRange:(struct _NSRange)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 collapseBorders:(BOOL)arg6;
- (id)initWithTextTable:(id)arg1 charIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 collapseBorders:(BOOL)arg6;

@end

