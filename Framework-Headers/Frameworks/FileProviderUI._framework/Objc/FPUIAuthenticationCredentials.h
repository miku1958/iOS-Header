//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FPUIAuthenticationCredentials : NSObject
{
    unsigned long long _type;
    NSString *_username;
    NSString *_password;
}

@property (copy, nonatomic) NSString *password; // @synthesize password=_password;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

- (void).cxx_destruct;

@end
