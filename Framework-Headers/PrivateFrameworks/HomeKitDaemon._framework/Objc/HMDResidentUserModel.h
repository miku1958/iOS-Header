//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDUserModel.h>

@class HMDDevice, NSNumber, NSString;

@interface HMDResidentUserModel : HMDUserModel
{
    NSString *_displayName;
}

@property (strong, nonatomic) NSNumber *configState; // @dynamic configState;
@property (strong, nonatomic) HMDDevice *device; // @dynamic device;
@property (strong, nonatomic) NSString *deviceIdentifier; // @dynamic deviceIdentifier;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;

+ (id)properties;
- (void).cxx_destruct;

@end

