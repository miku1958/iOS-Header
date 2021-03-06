//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PXSnapStripViewIndicatorInfo : NSObject
{
    BOOL _disabled;
    UIColor *_color;
    double _offset;
    unsigned long long _style;
}

@property (readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property (nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property (readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property (readonly, nonatomic) unsigned long long style; // @synthesize style=_style;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOffset:(double)arg1 color:(id)arg2 style:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToIndicatorInfo:(id)arg1;

@end

