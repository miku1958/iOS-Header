//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/NSCopying-Protocol.h>

@class NSString;

@interface CNFoundationSocialProfile : NSObject <NSCopying>
{
    NSString *_urlString;
    NSString *_username;
    NSString *_userIdentifier;
    NSString *_service;
    NSString *_displayName;
}

@property (readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, copy) NSString *service; // @synthesize service=_service;
@property (readonly, copy) NSString *urlString; // @synthesize urlString=_urlString;
@property (readonly, copy) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property (readonly, copy) NSString *username; // @synthesize username=_username;

+ (id)emptySocialProfile;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayName:(id)arg5;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;

@end

