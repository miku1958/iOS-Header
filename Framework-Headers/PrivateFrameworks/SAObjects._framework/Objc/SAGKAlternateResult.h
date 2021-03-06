//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;
@protocol SAClientBoundCommand;

@interface SAGKAlternateResult : AceObject <SAAceSerializable>
{
}

@property (strong, nonatomic) id<SAClientBoundCommand> command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;

+ (id)alternateResult;
+ (id)alternateResultWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

