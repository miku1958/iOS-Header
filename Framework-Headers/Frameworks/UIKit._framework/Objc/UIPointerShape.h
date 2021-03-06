//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, UIBezierPath;

@interface UIPointerShape : NSObject <NSCopying>
{
    UIBezierPath *_path;
    double _cornerRadius;
    double _defaultCornerRadius;
    double _beamLength;
    unsigned long long _materialUsage;
    long long __type;
    struct CGPoint _inherentConstrainedSlip;
    struct CGRect _rect;
}

@property (nonatomic, setter=_setType:) long long _type; // @synthesize _type=__type;
@property (nonatomic) double beamLength; // @synthesize beamLength=_beamLength;
@property (readonly, nonatomic) NSString *cornerCurve;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (nonatomic) double defaultCornerRadius; // @synthesize defaultCornerRadius=_defaultCornerRadius;
@property (readonly, nonatomic) double effectiveCornerRadius;
@property (nonatomic) struct CGPoint inherentConstrainedSlip; // @synthesize inherentConstrainedSlip=_inherentConstrainedSlip;
@property (readonly, nonatomic) BOOL isCircle;
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) unsigned long long materialUsage; // @synthesize materialUsage=_materialUsage;
@property (copy, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property (nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property (readonly, nonatomic) struct CGSize size;

+ (id)_linkPointerShape;
+ (id)beamWithPreferredLength:(double)arg1 axis:(unsigned long long)arg2;
+ (id)shapeWithPath:(id)arg1;
+ (id)shapeWithRoundedRect:(struct CGRect)arg1;
+ (id)shapeWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

