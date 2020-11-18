//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNUIIDSAvailabilityProvider;

@interface CNUIIDSContactPropertyResolver : NSObject
{
    CNUIIDSAvailabilityProvider *_idsAvailabilityProvider;
}

@property (readonly, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider; // @synthesize idsAvailabilityProvider=_idsAvailabilityProvider;

+ (id)IDSRelevantPropertiesForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (id)initWithIDSAvailabilityProvider:(id)arg1;
- (id)resolveBestFaceTimeIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2;
- (id)resolveBestIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 usingAvailabilityProviderCall:(CDUnknownBlockType)arg3;
- (id)resolveBestIMessageIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2;

@end
