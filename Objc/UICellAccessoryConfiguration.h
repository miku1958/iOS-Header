//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UICellAccessoryConfiguration : NSObject
{
    BOOL _leadingAlwaysNeedsLayout;
    BOOL _trailingAlwaysNeedsLayout;
    NSArray *_leadingAccessories;
    NSArray *_trailingAccessories;
}

@property (copy, nonatomic) NSArray *leadingAccessories; // @synthesize leadingAccessories=_leadingAccessories;
@property (copy, nonatomic) NSArray *trailingAccessories; // @synthesize trailingAccessories=_trailingAccessories;

- (void).cxx_destruct;
- (BOOL)alwaysNeedsLayout;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

