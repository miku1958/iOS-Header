//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSError, NSString;

@interface HMRemoteLoginMessage : HMFObject <NSSecureCoding>
{
    NSString *_sessionID;
    NSError *_error;
}

@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initNewMessage;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionID:(id)arg1;

@end

