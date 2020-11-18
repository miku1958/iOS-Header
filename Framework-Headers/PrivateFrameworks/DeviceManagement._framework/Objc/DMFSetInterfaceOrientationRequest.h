//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFSetInterfaceOrientationRequest : DMFTaskRequest
{
    BOOL _lockOrientation;
    unsigned long long _interfaceOrientation;
}

@property (nonatomic) unsigned long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property (nonatomic) BOOL lockOrientation; // @synthesize lockOrientation=_lockOrientation;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

