//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSArray;

@interface CRKFetchDevicesResultObject : CATTaskResultObject
{
    NSArray *_connectedDevices;
}

@property (copy, nonatomic) NSArray *connectedDevices; // @synthesize connectedDevices=_connectedDevices;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

