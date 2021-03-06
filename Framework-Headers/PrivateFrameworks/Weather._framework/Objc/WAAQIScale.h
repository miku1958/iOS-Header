//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WAAQIGradient;

@interface WAAQIScale : NSObject
{
    WAAQIGradient *_gradient;
    NSMutableArray *_categories;
    struct _NSRange _range;
}

@property (copy, nonatomic) NSMutableArray *categories; // @synthesize categories=_categories;
@property (readonly, nonatomic) WAAQIGradient *gradient; // @synthesize gradient=_gradient;
@property (readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;

+ (id)scaleForChina;
+ (id)scaleForEurope;
+ (id)scaleForHongKong;
+ (id)scaleForIndia;
+ (id)scaleForMexico;
+ (id)scaleForUnitedKingdom;
+ (id)scaleForUnitedStates;
+ (id)scaleFromFoundationScale:(id)arg1;
+ (id)scaleFromScaleIdentifier:(id)arg1 fallbackCountryCode:(id)arg2;
- (void).cxx_destruct;
- (void)addCategory:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1;

@end

