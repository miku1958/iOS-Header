//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PKDiscoveryMessagesManifest : NSObject
{
    long long _version;
    NSArray *_engagementMessages;
}

@property (readonly, nonatomic) NSArray *engagementMessages; // @synthesize engagementMessages=_engagementMessages;
@property (readonly, nonatomic) long long version; // @synthesize version=_version;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

