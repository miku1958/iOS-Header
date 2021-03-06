//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPUFoundation/NSCopying-Protocol.h>

@class UIColor;

@interface MPUBorderConfiguration : NSObject <NSCopying>
{
    double _borderAlpha;
    UIColor *_borderColor;
    double _borderWidth;
    double _fillAlpha;
    UIColor *_fillColor;
    double _dropShadowAlpha;
    UIColor *_dropShadowColor;
    unsigned long long _dropShadowEdges;
    double _dropShadowWidth;
}

@property (nonatomic) double borderAlpha; // @synthesize borderAlpha=_borderAlpha;
@property (strong, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property (nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property (nonatomic) double dropShadowAlpha; // @synthesize dropShadowAlpha=_dropShadowAlpha;
@property (strong, nonatomic) UIColor *dropShadowColor; // @synthesize dropShadowColor=_dropShadowColor;
@property (nonatomic) unsigned long long dropShadowEdges; // @synthesize dropShadowEdges=_dropShadowEdges;
@property (nonatomic) double dropShadowWidth; // @synthesize dropShadowWidth=_dropShadowWidth;
@property (nonatomic) double fillAlpha; // @synthesize fillAlpha=_fillAlpha;
@property (strong, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property (readonly, nonatomic, getter=isFullyTransparent) BOOL fullyTransparent;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

