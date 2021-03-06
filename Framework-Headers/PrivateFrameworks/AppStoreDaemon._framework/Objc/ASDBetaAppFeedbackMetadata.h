//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class ASDBetaAppVersion, NSString;

@interface ASDBetaAppFeedbackMetadata : NSObject <NSSecureCoding>
{
    NSString *_incidentID;
    NSString *_email;
    ASDBetaAppVersion *_version;
}

@property (copy) NSString *email; // @synthesize email=_email;
@property (copy) NSString *incidentID; // @synthesize incidentID=_incidentID;
@property (copy) ASDBetaAppVersion *version; // @synthesize version=_version;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

