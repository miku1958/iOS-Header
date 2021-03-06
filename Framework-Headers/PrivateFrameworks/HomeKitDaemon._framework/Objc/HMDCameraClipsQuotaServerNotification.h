//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSString;

@interface HMDCameraClipsQuotaServerNotification : HMFObject
{
    NSString *_containerIdentifier;
    long long _reason;
    NSString *_requestID;
    NSString *_userDSID;
}

@property (readonly, copy) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly) long long reason; // @synthesize reason=_reason;
@property (readonly, copy) NSString *requestID; // @synthesize requestID=_requestID;
@property (readonly, copy) NSString *userDSID; // @synthesize userDSID=_userDSID;

- (void).cxx_destruct;
- (id)initWithContainerIdentifier:(id)arg1 reason:(long long)arg2 requestID:(id)arg3 userDSID:(id)arg4;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

