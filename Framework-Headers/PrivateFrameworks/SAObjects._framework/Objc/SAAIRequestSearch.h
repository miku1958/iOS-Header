//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAIRequestSearch : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSString *acousticIdSearchSessionId;

+ (id)requestSearch;
+ (id)requestSearchWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

