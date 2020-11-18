//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SAUISnippetInteraction : SABaseCommand <SAServerBoundCommand>
{
}

@property (copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *refId; // @dynamic refId;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *snippetId;
@property (readonly) Class superclass;

+ (id)snippetInteraction;
+ (id)snippetInteractionWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

