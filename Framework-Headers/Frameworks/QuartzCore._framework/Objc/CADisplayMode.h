//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CADisplayMode : NSObject
{
    struct CADisplayModePriv *_priv;
}

@property (readonly, copy, nonatomic) NSString *colorGamut;
@property (readonly, copy, nonatomic) NSString *colorMode;
@property (readonly, copy, nonatomic) NSString *hdrMode;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long internalRepresentation;
@property (readonly, nonatomic) BOOL isVirtual;
@property (readonly, nonatomic) double pixelAspectRatio;
@property (readonly, nonatomic) unsigned long long preferredScale;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) unsigned long long width;

+ (id)_displayModeWithMode:(struct Mode)arg1 display:(id)arg2;
- (id)_display;
- (id)_initWithMode:(struct Mode)arg1 display:(id)arg2;
- (struct Mode)_mode;
- (void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

