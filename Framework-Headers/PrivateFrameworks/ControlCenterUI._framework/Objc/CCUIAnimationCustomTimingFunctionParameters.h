//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/CCUIAnimationTimingFunctionDescription-Protocol.h>

@class NSString;

@interface CCUIAnimationCustomTimingFunctionParameters : NSObject <CCUIAnimationTimingFunctionDescription>
{
    struct CGPoint _controlPoint1;
    struct CGPoint _controlPoint2;
}

@property (readonly, nonatomic) struct CGPoint controlPoint1; // @synthesize controlPoint1=_controlPoint1;
@property (readonly, nonatomic) struct CGPoint controlPoint2; // @synthesize controlPoint2=_controlPoint2;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)functionWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
- (id)_initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end
