//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PKBillPaymentRingGradientState : NSObject
{
    UIColor *_startColor;
    UIColor *_endColor;
}

@property (readonly, copy, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property (readonly, copy, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;

- (void).cxx_destruct;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;

@end

