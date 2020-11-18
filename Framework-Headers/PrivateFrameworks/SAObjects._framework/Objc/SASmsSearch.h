//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSDate, NSNumber, NSString, SASmsGroupName;

@interface SASmsSearch : SADomainCommand
{
}

@property (copy, nonatomic) NSDate *end;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSArray *senders;
@property (strong, nonatomic) SASmsGroupName *smsGroup;
@property (copy, nonatomic) NSDate *start;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSNumber *unread;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;

@end
