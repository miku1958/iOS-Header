//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCharacteristicResponse.h>

#import <Home/HFStateDumpBuildable-Protocol.h>

@class NSString;

@interface HMCharacteristicResponse (HFDebugging) <HFStateDumpBuildable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
@end

