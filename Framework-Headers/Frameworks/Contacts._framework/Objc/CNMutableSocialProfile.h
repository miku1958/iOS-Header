//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNSocialProfile.h>

@class NSArray, NSString;

@interface CNMutableSocialProfile : CNSocialProfile
{
}

@property (copy, nonatomic) NSArray *bundleIdentifiers; // @dynamic bundleIdentifiers;
@property (copy, nonatomic) NSString *displayname; // @dynamic displayname;
@property (copy, nonatomic) NSString *service; // @dynamic service;
@property (copy, nonatomic) NSString *teamIdentifier; // @dynamic teamIdentifier;
@property (copy, nonatomic) NSString *urlString; // @dynamic urlString;
@property (copy, nonatomic) NSString *userIdentifier; // @dynamic userIdentifier;
@property (copy, nonatomic) NSString *username; // @dynamic username;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)freeze;

@end

