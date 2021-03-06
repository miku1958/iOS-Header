//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAHandoffPayload-Protocol.h>

@class NSString, NSURL;

@interface SAURIHandoffPayload : AceObject <SAHandoffPayload>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSURL *link;
@property (readonly) Class superclass;

+ (id)uRIHandoffPayload;
+ (id)uRIHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

