//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDActionSet, HMDCharacteristic, NSUUID;

@interface HMDCharacteristicWriteAction : NSObject <NSSecureCoding>
{
    NSUUID *_uuid;
    HMDActionSet *_actionSet;
    HMDCharacteristic *_characteristic;
    id _targetValue;
}

@property (readonly, weak, nonatomic) HMDActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property (readonly, weak, nonatomic) HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (copy, nonatomic) id targetValue; // @synthesize targetValue=_targetValue;
@property (readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)configure:(id)arg1 actionSet:(id)arg2;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)replaceCharacteristic:(id)arg1;

@end

