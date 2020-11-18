//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, NSURL;

@interface PKCloudStoreZoneInvitation : NSObject <NSSecureCoding>
{
    NSURL *_shareURL;
    NSData *_shareInvitationToken;
    NSString *_containerIdentifier;
    NSString *_zoneName;
    NSDate *_dateCreated;
}

@property (copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property (copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property (strong, nonatomic) NSData *shareInvitationToken; // @synthesize shareInvitationToken=_shareInvitationToken;
@property (strong, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property (copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;

+ (id)cloudStoreZoneInvitationWithProtobuf:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCloudStoreZoneInvitation:(id)arg1;
- (id)protobuf;

@end
