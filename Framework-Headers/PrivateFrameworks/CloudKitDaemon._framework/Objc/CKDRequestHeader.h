//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDRequestHeader : NSObject <NSSecureCoding>
{
    NSDictionary *_headerDict;
    NSString *_method;
    NSURL *_url;
    NSString *_sessionConfigurationIdentifier;
    unsigned long long _urlSessionTaskIdentifier;
}

@property (strong, nonatomic) NSDictionary *headerDict; // @synthesize headerDict=_headerDict;
@property (strong, nonatomic) NSString *method; // @synthesize method=_method;
@property (strong, nonatomic) NSString *sessionConfigurationIdentifier; // @synthesize sessionConfigurationIdentifier=_sessionConfigurationIdentifier;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;
@property (nonatomic) unsigned long long urlSessionTaskIdentifier; // @synthesize urlSessionTaskIdentifier=_urlSessionTaskIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
