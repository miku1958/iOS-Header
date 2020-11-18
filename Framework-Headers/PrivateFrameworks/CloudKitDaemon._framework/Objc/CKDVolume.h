//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CKDVolume : NSObject
{
    NSUUID *_volumeUUID;
    NSNumber *_deviceID;
    NSString *_mountToPath;
}

@property (strong, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property (strong, nonatomic) NSString *mountToPath; // @synthesize mountToPath=_mountToPath;
@property (strong, nonatomic) NSUUID *volumeUUID; // @synthesize volumeUUID=_volumeUUID;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (id)initWithVolumeUUID:(id)arg1 deviceID:(id)arg2 mountToPath:(id)arg3;

@end
