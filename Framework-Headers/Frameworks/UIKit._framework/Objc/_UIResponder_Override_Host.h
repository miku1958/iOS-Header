//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, UIResponder;

__attribute__((visibility("hidden")))
@interface _UIResponder_Override_Host : NSObject
{
    NSMutableArray *_overrides;
    UIResponder *_owner;
}

@property (readonly, weak, nonatomic) UIResponder *owner; // @synthesize owner=_owner;

+ (id)hostForResponder:(id)arg1;
- (void).cxx_destruct;
- (void)attachOverrider:(id)arg1 forTypes:(long long)arg2;
- (void)dealloc;
- (id)description;
- (void)detachOverrider:(id)arg1 forTypes:(long long)arg2;
- (id)init;
- (long long)typesForResponder:(id)arg1;

@end
