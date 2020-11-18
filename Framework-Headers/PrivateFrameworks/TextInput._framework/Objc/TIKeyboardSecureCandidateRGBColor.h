//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@interface TIKeyboardSecureCandidateRGBColor : NSObject <NSCopying, NSSecureCoding>
{
    double _colorR;
    double _colorG;
    double _colorB;
    double _colorA;
}

@property (nonatomic) double colorA; // @synthesize colorA=_colorA;
@property (nonatomic) double colorB; // @synthesize colorB=_colorB;
@property (nonatomic) double colorG; // @synthesize colorG=_colorG;
@property (nonatomic) double colorR; // @synthesize colorR=_colorR;

+ (id)blackColor;
+ (id)lightGrayColor;
+ (BOOL)supportsSecureCoding;
+ (id)whiteColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
- (BOOL)isEqual:(id)arg1;

@end

