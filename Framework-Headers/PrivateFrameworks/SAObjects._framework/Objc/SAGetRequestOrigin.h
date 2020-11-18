//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SAGetRequestOrigin : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSString *desiredAccuracy;
@property (copy, nonatomic) NSNumber *maxAge;
@property (copy, nonatomic) NSNumber *searchTimeout;

+ (id)getRequestOrigin;
+ (id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;

@end

