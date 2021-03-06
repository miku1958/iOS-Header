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

- (void)dealloc;
- (id)description;

@end

