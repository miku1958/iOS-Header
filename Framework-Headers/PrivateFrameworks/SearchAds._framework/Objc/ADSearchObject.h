//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface ADSearchObject : NSObject
{
    NSString *_sponsoredSearchRequestData;
    NSString *_routingInfoData;
    NSString *_deviceRequestID;
    NSString *_userTargetingIdentifier;
    NSError *_error;
}

@property (strong, nonatomic) NSString *deviceRequestID; // @synthesize deviceRequestID=_deviceRequestID;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSString *routingInfoData; // @synthesize routingInfoData=_routingInfoData;
@property (strong, nonatomic) NSString *sponsoredSearchRequestData; // @synthesize sponsoredSearchRequestData=_sponsoredSearchRequestData;
@property (strong, nonatomic) NSString *userTargetingIdentifier; // @synthesize userTargetingIdentifier=_userTargetingIdentifier;

- (void).cxx_destruct;
- (id)init;

@end
