//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol HAP2Accessory;

@interface HAP2CharacteristicTuple : NSObject
{
    id<HAP2Accessory> _accessory;
    NSMutableArray *_values;
}

@property (readonly, nonatomic) id<HAP2Accessory> accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) NSMutableArray *values; // @synthesize values=_values;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)arg1;

@end

