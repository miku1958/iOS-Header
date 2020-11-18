//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/NSSecureCoding-Protocol.h>

@class NSSet, NSString, NSURL;

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding>
{
    int _creativeType;
    long long _options;
    NSString *_identifier;
    NSURL *_serverURL;
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    NSSet *_context;
    NSString *_adSpaceContextJSON;
}

@property (copy, nonatomic) NSString *adSpaceContextJSON; // @synthesize adSpaceContextJSON=_adSpaceContextJSON;
@property (copy, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property (copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property (copy, nonatomic) NSSet *context; // @synthesize context=_context;
@property (nonatomic) int creativeType; // @synthesize creativeType=_creativeType;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) long long options; // @synthesize options=_options;
@property (copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

