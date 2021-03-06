//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/NSCopying-Protocol.h>

@protocol TSWPAdornmentLineRenderingDelegate;

@interface TSWPAdornmentLine : NSObject <NSCopying>
{
    BOOL _isWhitespace;
    BOOL _allowAntialiasing;
    int _underline;
    int _adornmentLocation;
    struct CGColor *_color;
    double _length;
    double _thickness;
    unsigned long long _lineCount;
    double _underlineAdjustment;
    id<TSWPAdornmentLineRenderingDelegate> _renderingDelegate;
    struct CGPoint _start;
}

@property (readonly, nonatomic) int adornmentLocation; // @synthesize adornmentLocation=_adornmentLocation;
@property (readonly, nonatomic) BOOL allowAntialiasing; // @synthesize allowAntialiasing=_allowAntialiasing;
@property (readonly, nonatomic) struct CGColor *color; // @synthesize color=_color;
@property (readonly, nonatomic) BOOL isWhitespace; // @synthesize isWhitespace=_isWhitespace;
@property (readonly, nonatomic) double length; // @synthesize length=_length;
@property (readonly, nonatomic) unsigned long long lineCount; // @synthesize lineCount=_lineCount;
@property (strong, nonatomic) id<TSWPAdornmentLineRenderingDelegate> renderingDelegate; // @synthesize renderingDelegate=_renderingDelegate;
@property (readonly, nonatomic) struct CGPoint start; // @synthesize start=_start;
@property (readonly, nonatomic) double thickness; // @synthesize thickness=_thickness;
@property (readonly, nonatomic) int underline; // @synthesize underline=_underline;
@property (readonly, nonatomic) double underlineAdjustment; // @synthesize underlineAdjustment=_underlineAdjustment;

- (void).cxx_destruct;
- (id)copyWithColor:(struct CGColor *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStart:(struct CGPoint)arg1 length:(double)arg2 color:(struct CGColor *)arg3 thickness:(double)arg4 lineCount:(unsigned long long)arg5 underline:(int)arg6 adornmentLocation:(int)arg7 underLineAdjustment:(double)arg8;
- (id)initWithStart:(struct CGPoint)arg1 length:(double)arg2 color:(struct CGColor *)arg3 thickness:(double)arg4 lineCount:(unsigned long long)arg5 underline:(int)arg6 adornmentLocation:(int)arg7 underLineAdjustment:(double)arg8 isWhitespace:(BOOL)arg9 renderingDelegate:(id)arg10 allowAntialiasing:(BOOL)arg11;
- (BOOL)merge:(id)arg1;
- (void)setStart:(struct CGPoint)arg1;
- (BOOL)shouldRenderForLineDrawFlags:(unsigned long long)arg1;

@end

