//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAConditionallyMutatingClientBoundCommand-Protocol.h>

@class NSArray, NSString, SASendCommands;

@interface SAUIAddViews : SABaseClientBoundCommand <SAConditionallyMutatingClientBoundCommand>
{
}

@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *appId; // @dynamic appId;
@property (copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *dialogPhase;
@property (copy, nonatomic) NSString *displayTarget;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL mutatingCommand;
@property (copy, nonatomic) NSString *refId;
@property (strong, nonatomic) SASendCommands *refreshCommand;
@property (nonatomic) BOOL requiresResponse;
@property (nonatomic) BOOL scrollToTop;
@property (readonly) Class superclass;
@property (nonatomic) BOOL temporary;
@property (copy, nonatomic) NSArray *views;

+ (id)addViews;
+ (id)addViewsWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

