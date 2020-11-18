//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber;

@interface SASSuspendClientEndpointer : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSNumber *audioProcessedMs;
@property (copy, nonatomic) NSNumber *suspendDurationMs;

+ (id)suspendClientEndpointer;
+ (id)suspendClientEndpointerWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
