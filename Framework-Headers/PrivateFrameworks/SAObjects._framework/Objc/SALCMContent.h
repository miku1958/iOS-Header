//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL;

@interface SALCMContent : SADomainObject
{
}

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSURL *externalId;
@property (copy, nonatomic) NSString *title;

+ (id)content;
+ (id)contentWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

