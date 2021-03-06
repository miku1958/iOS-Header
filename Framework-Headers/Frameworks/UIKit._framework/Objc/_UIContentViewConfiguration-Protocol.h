//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSObject-Protocol.h>

@class UITraitCollection, UIView;
@protocol _UIContentView;

@protocol _UIContentViewConfiguration <NSObject, NSCopying>
- (UIView<_UIContentView> *)createContentView;
- (id)updatedConfigurationForState:(unsigned long long)arg1;
- (id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(UITraitCollection *)arg2;

@optional
- (void)applyToContentView:(UIView *)arg1;
@end

