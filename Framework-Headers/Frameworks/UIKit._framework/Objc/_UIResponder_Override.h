//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UIResponder_Override : NSObject
{
    UIResponder *_owner;
    UIResponder *_target;
    long long _types;
}

@property (readonly, weak, nonatomic) UIResponder *owner; // @synthesize owner=_owner;
@property (readonly, weak, nonatomic) UIResponder *target; // @synthesize target=_target;
@property (readonly, nonatomic) long long types; // @synthesize types=_types;

+ (id)overrideForResponder:(id)arg1 withTarget:(id)arg2 forType:(long long)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end

