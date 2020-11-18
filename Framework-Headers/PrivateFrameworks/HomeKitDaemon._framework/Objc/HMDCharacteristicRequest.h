//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCharacteristic, NSString;

@interface HMDCharacteristicRequest : HMFObject <HMFLogging>
{
    HMDCharacteristic *_characteristic;
    id _previousValue;
}

@property (readonly, nonatomic) HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)requestWithCharacteristic:(id)arg1;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithCharacteristic:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
