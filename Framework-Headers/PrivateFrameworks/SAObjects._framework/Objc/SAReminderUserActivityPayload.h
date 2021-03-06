//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAReminderPayload-Protocol.h>

@class NSString, SAUserActivity;

@interface SAReminderUserActivityPayload : AceObject <SAReminderPayload>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) SAUserActivity *userActivity;

+ (id)userActivityPayload;
+ (id)userActivityPayloadWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

