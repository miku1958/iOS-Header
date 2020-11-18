//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface _DUIItemDetail : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _scalable;
    BOOL _rotatable;
    double _scale;
    double _rotationAngle;
    NSArray *_lastKnownImageComponents;
    struct CGPoint _anchorPoint;
}

@property (nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property (strong, nonatomic) NSArray *lastKnownImageComponents; // @synthesize lastKnownImageComponents=_lastKnownImageComponents;
@property (nonatomic) BOOL rotatable; // @synthesize rotatable=_rotatable;
@property (nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property (nonatomic) BOOL scalable; // @synthesize scalable=_scalable;
@property (nonatomic) double scale; // @synthesize scale=_scale;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
