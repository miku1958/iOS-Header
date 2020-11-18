//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>
#import <SAObjects/SASetSingleClientState-Protocol.h>

@class NSString, SAUTSTvSubscriptionsClientState;

@interface SAUTSSetTvSubscriptionsClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>
{
}

@property (copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property (strong, nonatomic) SAUTSTvSubscriptionsClientState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *refId; // @dynamic refId;
@property (readonly) Class superclass;

+ (id)setTvSubscriptionsClientState;
+ (id)setTvSubscriptionsClientStateWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

