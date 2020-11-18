//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSCopying-Protocol.h>
#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSString, WiFiAwarePublishDatapathConfiguration, WiFiAwarePublishServiceSpecificInfo;

@interface WiFiAwarePublishConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _furtherServiceDiscoveryRequired;
    BOOL _jumboServiceDiscoveryMessages;
    NSString *_serviceName;
    WiFiAwarePublishServiceSpecificInfo *_serviceSpecificInfo;
    long long _authenticationType;
    WiFiAwarePublishDatapathConfiguration *_datapathConfiguration;
}

@property (nonatomic) long long authenticationType; // @synthesize authenticationType=_authenticationType;
@property (copy, nonatomic) WiFiAwarePublishDatapathConfiguration *datapathConfiguration; // @synthesize datapathConfiguration=_datapathConfiguration;
@property (nonatomic) BOOL furtherServiceDiscoveryRequired; // @synthesize furtherServiceDiscoveryRequired=_furtherServiceDiscoveryRequired;
@property (nonatomic) BOOL jumboServiceDiscoveryMessages; // @synthesize jumboServiceDiscoveryMessages=_jumboServiceDiscoveryMessages;
@property (readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (copy, nonatomic) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo; // @synthesize serviceSpecificInfo=_serviceSpecificInfo;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)datapathConfigurationEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)serviceSpecificInfoEqual:(id)arg1;

@end
