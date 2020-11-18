//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIKBRenderConfig, UIKBRenderTraits, UIKBTree;

@protocol UIKBKeyViewContentView <NSObject>
+ (struct CGSize)preferredContentViewSizeForKey:(UIKBTree *)arg1 withTraits:(UIKBRenderTraits *)arg2;
- (void)retestForTouchUpSelectedVariantIndexForKey:(UIKBTree *)arg1 atPoint:(struct CGPoint)arg2;
- (void)retestSelectedVariantIndexForKey:(UIKBTree *)arg1 atPoint:(struct CGPoint)arg2;
- (void)updateForKeyplane:(UIKBTree *)arg1 key:(UIKBTree *)arg2;
- (void)updateRenderConfig:(UIKBRenderConfig *)arg1;
@end

