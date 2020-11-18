//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDUser, NSString;

@interface HMDHomeDataPushDestination : NSObject
{
    BOOL _ignoreConfigCompare;
    NSString *_username;
    HMDUser *_user;
    NSString *_destination;
}

@property (readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property (nonatomic) BOOL ignoreConfigCompare; // @synthesize ignoreConfigCompare=_ignoreConfigCompare;
@property (readonly, nonatomic) NSString *pushDestination;
@property (readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
@property (readonly, nonatomic) NSString *username; // @synthesize username=_username;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUser:(id)arg1 destination:(id)arg2;

@end
