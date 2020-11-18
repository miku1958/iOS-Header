//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAClientStateServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SASetAlertContext : SABaseCommand <SAClientStateServerBoundCommand>
{
}

@property (copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property (copy, nonatomic) NSArray *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *refId; // @dynamic refId;
@property (readonly) Class superclass;

+ (id)setAlertContext;
+ (id)setAlertContextWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

