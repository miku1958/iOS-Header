//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, SAPersonAttribute;

@interface SAPhoneIncomingCallSearchResult : SADomainObject
{
}

@property (strong, nonatomic) SAPersonAttribute *caller;
@property (copy, nonatomic) NSString *incomingCallType;

+ (id)incomingCallSearchResult;
+ (id)incomingCallSearchResultWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

