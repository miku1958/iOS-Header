//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface NNMKSyncedMailbox : NSObject
{
    unsigned long long _type;
    NSString *_accountId;
    NSURL *_url;
    NSString *_customName;
}

@property (strong, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property (strong, nonatomic) NSString *customName; // @synthesize customName=_customName;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (id)init;

@end

