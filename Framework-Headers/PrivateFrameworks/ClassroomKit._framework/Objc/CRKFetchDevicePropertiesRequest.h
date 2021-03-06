//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSArray;

@interface CRKFetchDevicePropertiesRequest : CATTaskRequest
{
    NSArray *_propertyKeys;
}

@property (copy, nonatomic) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

