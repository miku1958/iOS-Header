//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplay, NSString;

@interface CADisplayMode : NSObject
{
    struct Mode _mode;
    CADisplay *_dpy;
    unsigned long long _width;
    unsigned long long _height;
}

@property (readonly, copy, nonatomic) NSString *colorMode;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) BOOL isVirtual;
@property (readonly, nonatomic) double pixelAspectRatio;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) unsigned long long width;

+ (id)_displayModeWithMode:(struct Mode)arg1 display:(id)arg2;
- (id).cxx_construct;
- (id)_display;
- (id)_initWithMode:(struct Mode)arg1 display:(id)arg2;
- (struct Mode)_mode;
- (void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

