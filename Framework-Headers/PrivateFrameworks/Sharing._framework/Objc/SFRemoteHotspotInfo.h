//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_password;
    NSNumber *_channel;
}

@property (strong) NSNumber *channel; // @synthesize channel=_channel;
@property (copy) NSString *name; // @synthesize name=_name;
@property (copy) NSString *password; // @synthesize password=_password;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 password:(id)arg2 channel:(id)arg3;

@end

