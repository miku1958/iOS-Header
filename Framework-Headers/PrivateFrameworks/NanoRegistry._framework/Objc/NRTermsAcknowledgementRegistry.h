//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRTermsAcknowledgementRegistry-Protocol.h>

@class NSString;
@protocol NRTermsAcknowledgementRegistry;

@interface NRTermsAcknowledgementRegistry : NSObject <NRTermsAcknowledgementRegistry>
{
    id<NRTermsAcknowledgementRegistry> _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)errorStringWithEnum:(unsigned long long)arg1;
+ (id)errorWithEnum:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)add:(id)arg1 forDeviceID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)checkForAcknowledgement:(id)arg1 forDeviceID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
