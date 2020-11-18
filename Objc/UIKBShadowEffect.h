//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIKBRenderEffect-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBShadowEffect : NSObject <UIKBRenderEffect>
{
    NSString *_colorName;
    double _weight;
    struct CGSize _offset;
    struct UIEdgeInsets _insets;
    struct UIEdgeInsets _concaveInsets;
}

@property (nonatomic) struct UIEdgeInsets concaveInsets; // @synthesize concaveInsets=_concaveInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) struct CGSize offset; // @synthesize offset=_offset;
@property (readonly, nonatomic) SEL renderSelector;
@property (readonly, nonatomic) BOOL renderUnder;
@property (readonly) Class superclass;
@property (nonatomic) double weight; // @synthesize weight=_weight;

+ (id)effectWithColor:(id)arg1 offset:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;
- (struct CGColor *)CGColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithColor:(id)arg1 offset:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;
- (BOOL)isEqual:(id)arg1;

@end

