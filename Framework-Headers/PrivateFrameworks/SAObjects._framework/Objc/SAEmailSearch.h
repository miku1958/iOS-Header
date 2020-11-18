//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString;

@interface SAEmailSearch : SADomainCommand
{
}

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *fromEmail;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *toEmail;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
