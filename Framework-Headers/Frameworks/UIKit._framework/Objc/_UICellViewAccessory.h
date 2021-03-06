//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UICellAccessory.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UICellViewAccessory : _UICellAccessory
{
    long long _options;
}

@property (nonatomic) long long options; // @synthesize options=_options;
@property (strong, nonatomic) UIView *view; // @dynamic view;

+ (id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3;
+ (id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3 reservedLayoutWidth:(double)arg4;
- (BOOL)alwaysNeedsLayout;
- (BOOL)isEqual:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

