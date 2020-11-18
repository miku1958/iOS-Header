//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIKBRenderEffect-Protocol.h>

@class NSString, UIKBGradient;

__attribute__((visibility("hidden")))
@interface UIKBNullEffect : NSObject <UIKBRenderEffect>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIKBGradient *gradient;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) SEL renderSelector;
@property (readonly, nonatomic) BOOL renderUnder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesRGBColors;
@property (nonatomic) double weight;

+ (id)nullEffect;
- (struct CGColor *)CGColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

