//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@interface TUVideoCallAttributes : NSObject <NSSecureCoding>
{
    long long _remoteCameraOrientation;
    long long _localVideoContextSlotIdentifier;
    long long _remoteVideoContextSlotIdentifier;
}

@property (nonatomic) long long localVideoContextSlotIdentifier; // @synthesize localVideoContextSlotIdentifier=_localVideoContextSlotIdentifier;
@property (nonatomic) long long remoteCameraOrientation; // @synthesize remoteCameraOrientation=_remoteCameraOrientation;
@property (nonatomic) long long remoteVideoContextSlotIdentifier; // @synthesize remoteVideoContextSlotIdentifier=_remoteVideoContextSlotIdentifier;

+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToVideoCallAttributes:(id)arg1;

@end

