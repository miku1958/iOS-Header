//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMTrigger.h>

#import <Home/HFPrettyDescription-Protocol.h>
#import <Home/HFStateDumpSerializable-Protocol.h>

@class NSString;

@interface HMTrigger (HFDebugging) <HFPrettyDescription, HFStateDumpSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;
@end

