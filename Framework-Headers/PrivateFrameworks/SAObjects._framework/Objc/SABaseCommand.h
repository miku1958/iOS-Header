//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceCommand-Protocol.h>
#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SABaseCommand : AceObject <SAAceSerializable, SAAceCommand>
{
}

@property (copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *refId; // @dynamic refId;
@property (readonly) Class superclass;

+ (id)baseCommand;
+ (id)baseCommandWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

