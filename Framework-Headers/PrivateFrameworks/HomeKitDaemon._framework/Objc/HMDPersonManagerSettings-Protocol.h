//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSObject-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMHomePersonManagerSettings, HMIExternalPersonManagerSettings, HMIHomePersonManagerSettings, HMPhotosPersonManagerSettings;

@protocol HMDPersonManagerSettings <NSObject, NSCopying, NSSecureCoding>

@property (readonly) BOOL requiresPersistentStorage;

- (HMHomePersonManagerSettings *)createHMHomePersonManagerSettings;
- (HMIExternalPersonManagerSettings *)createHMIExternalPersonManagerSettings;
- (HMIHomePersonManagerSettings *)createHMIHomePersonManagerSettings;
- (HMPhotosPersonManagerSettings *)createHMPhotosPersonManagerSettings;
@end

