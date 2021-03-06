//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSColor;

@interface NSShadow : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _shadowFlags;
    struct CGSize _shadowOffset;
    double _shadowBlurRadius;
    NSColor *_shadowColor;
}

@property (nonatomic) double shadowBlurRadius;
@property (strong, nonatomic) id shadowColor;
@property (nonatomic) struct CGSize shadowOffset;

+ (id)defaultShadowColor;
+ (void)initialize;
+ (id)shadow;
+ (BOOL)supportsSecureCoding;
- (void)applyToGraphicsContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithShadow:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

