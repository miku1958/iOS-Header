//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, PDScheduledActivityClient;

@interface PDScheduledActivityClient : NSObject <NSSecureCoding>
{
    id<PDScheduledActivityClient> _clientInstance;
    NSObject<OS_dispatch_queue> *_activityQueue;
    NSMutableDictionary *_activityRegistrations;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *activityQueue; // @synthesize activityQueue=_activityQueue;
@property (strong, nonatomic) NSMutableDictionary *activityRegistrations; // @synthesize activityRegistrations=_activityRegistrations;
@property (weak, nonatomic) id<PDScheduledActivityClient> clientInstance; // @synthesize clientInstance=_clientInstance;
@property (readonly, nonatomic) BOOL isValid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientInstance:(id)arg1 activityQueue:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
