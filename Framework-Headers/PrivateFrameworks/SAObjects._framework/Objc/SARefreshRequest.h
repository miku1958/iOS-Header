//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAStartRequest.h>

@class NSData;

@interface SARefreshRequest : SAStartRequest
{
}

@property (copy, nonatomic) NSData *nlResultState;
@property (copy, nonatomic) NSData *serializedIntent;

+ (id)refreshRequest;
+ (id)refreshRequestWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
