//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface WBSDeviceEligibilityInformation : NSObject
{
    BOOL _hasWindowsDevices;
    NSDate *_dateOfLatestDAVAccessByIneligibleWindowsDevice;
    NSArray *_devices;
}

@property (readonly, nonatomic) NSDate *dateOfLatestDAVAccessByIneligibleWindowsDevice; // @synthesize dateOfLatestDAVAccessByIneligibleWindowsDevice=_dateOfLatestDAVAccessByIneligibleWindowsDevice;
@property (readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property (readonly, nonatomic) BOOL hasWindowsDevices; // @synthesize hasWindowsDevices=_hasWindowsDevices;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDateOfLatestDAVAccessByIneligibleWindowsDevice:(id)arg1 devices:(id)arg2 hasWindowsDevices:(BOOL)arg3;
- (id)initWithDeviceListResponseDictionary:(id)arg1;
- (CDStruct_4bcfbbae)potentiallyEligibleDevicesWithEligibleOperatingSystemVersionRanges:(id)arg1;

@end
