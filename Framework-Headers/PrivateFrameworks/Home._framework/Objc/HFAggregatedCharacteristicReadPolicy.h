//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicReadPolicy-Protocol.h>
#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface HFAggregatedCharacteristicReadPolicy : NSObject <HFCharacteristicReadPolicy, NSCopying, NSMutableCopying>
{
    NSArray *_policies;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *policies; // @synthesize policies=_policies;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;
- (id)init;
- (id)initWithPolicies:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

