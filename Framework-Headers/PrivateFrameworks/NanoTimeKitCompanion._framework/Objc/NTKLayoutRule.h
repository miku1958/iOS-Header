//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class CLKDevice;

@interface NTKLayoutRule : NSObject <NSCopying>
{
    BOOL _clipsToReferenceFrame;
    CLKDevice *_device;
    long long _horizontalLayout;
    long long _verticalLayout;
    struct CGRect _referenceFrame;
    struct CGAffineTransform _transform;
}

@property (nonatomic) BOOL clipsToReferenceFrame; // @synthesize clipsToReferenceFrame=_clipsToReferenceFrame;
@property (readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (nonatomic) long long horizontalLayout; // @synthesize horizontalLayout=_horizontalLayout;
@property (readonly, nonatomic) struct CGSize maximumSize;
@property (nonatomic) struct CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property (nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property (nonatomic) long long verticalLayout; // @synthesize verticalLayout=_verticalLayout;

+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4;
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 clip:(BOOL)arg5 transform:(struct CGAffineTransform)arg6;
- (void).cxx_destruct;
- (struct CGRect)calculateLayoutFrameForBoundsSize:(struct CGSize)arg1;
- (double)calculateLayoutFrameHeightForBoundsSize:(struct CGSize)arg1;
- (double)calculateLayoutFrameWidthForBoundsSize:(struct CGSize)arg1;
- (double)calculateLayoutFrameXOriginForBoundsSize:(struct CGSize)arg1;
- (double)calculateLayoutFrameYOriginForBoundsSize:(struct CGSize)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initForDevice:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)layoutRuleByConvertingToCoordinateSpaceWithFrame:(struct CGRect)arg1;
- (void)validate;

@end

