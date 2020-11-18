//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BRAsset : NSObject
{
    BOOL _isNull;
    long long _type;
    NSDictionary *_parameters;
}

@property (readonly, nonatomic) BOOL isNull; // @synthesize isNull=_isNull;
@property (readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property (readonly, nonatomic) id propertyList;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)nullAsset;
+ (id)withType:(long long)arg1 andParameters:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithType:(long long)arg1 andParameters:(id)arg2 null:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;

@end

