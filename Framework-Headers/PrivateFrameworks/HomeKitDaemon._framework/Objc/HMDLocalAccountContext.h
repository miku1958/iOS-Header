//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class NSString;

@interface HMDLocalAccountContext : HMFObject <HMFObject>
{
    NSString *_identifier;
    NSString *_username;
    NSString *_alternateDSID;
}

@property (readonly, copy) NSString *alternateDSID; // @synthesize alternateDSID=_alternateDSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *username; // @synthesize username=_username;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
