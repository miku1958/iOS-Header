//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSHTTPCookie2.h>

@class NSDate, NSString;

@interface NSMutableHTTPCookie2 : NSHTTPCookie2
{
}

@property (strong) NSString *domain; // @dynamic domain;
@property (strong) NSDate *expirationDate; // @dynamic expirationDate;
@property BOOL hostOnly; // @dynamic hostOnly;
@property BOOL httpOnly; // @dynamic httpOnly;
@property (strong) NSString *name; // @dynamic name;
@property (strong) NSString *partition; // @dynamic partition;
@property (strong) NSString *path; // @dynamic path;
@property long long sameSite; // @dynamic sameSite;
@property BOOL secure; // @dynamic secure;
@property long long source; // @dynamic source;
@property (strong) NSString *value; // @dynamic value;

- (id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

