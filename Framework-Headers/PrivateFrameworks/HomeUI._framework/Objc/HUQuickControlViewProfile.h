//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/NSCopying-Protocol.h>

@class UIColor;
@protocol HFDynamicFormattingValue, HFIconDescriptor;

@interface HUQuickControlViewProfile : NSObject <NSCopying>
{
    unsigned long long _controlSize;
    id<HFDynamicFormattingValue> _supplementaryFormattedValue;
    id<HFIconDescriptor> _decorationIconDescriptor;
    unsigned long long _orientation;
    UIColor *_tintColor;
}

@property (nonatomic) unsigned long long controlSize; // @synthesize controlSize=_controlSize;
@property (strong, nonatomic) id<HFIconDescriptor> decorationIconDescriptor; // @synthesize decorationIconDescriptor=_decorationIconDescriptor;
@property (readonly, nonatomic) double gestureDragCoefficient;
@property (nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property (strong, nonatomic) id<HFDynamicFormattingValue> supplementaryFormattedValue; // @synthesize supplementaryFormattedValue=_supplementaryFormattedValue;
@property (readonly, nonatomic) BOOL supportsTouchContinuation;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

