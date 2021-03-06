//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface ASCDescriber : NSObject
{
    id<NSObject> _object;
    NSMutableArray *_properties;
}

@property (readonly, nonatomic) id<NSObject> object; // @synthesize object=_object;
@property (readonly, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;

+ (id)nilObject;
- (void).cxx_destruct;
- (void)addBool:(BOOL)arg1 withName:(id)arg2;
- (void)addDouble:(double)arg1 withName:(id)arg2;
- (void)addInt64:(long long)arg1 withName:(id)arg2;
- (void)addInteger:(long long)arg1 withName:(id)arg2;
- (void)addObject:(id)arg1 withName:(id)arg2;
- (void)addSensitiveObject:(id)arg1 withName:(id)arg2;
- (void)addUInt64:(unsigned long long)arg1 withName:(id)arg2;
- (void)addUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;
- (id)describeObject;
- (id)describeProperties;
- (id)description;
- (id)finalizeDescription;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

