//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFKeychain : NSObject
{
    NSString *_service;
    NSString *_accessGroup;
}

@property (readonly, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property (readonly, nonatomic) NSString *service; // @synthesize service=_service;

- (void).cxx_destruct;
- (id)dataForKey:(id)arg1;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;
- (id)items;
- (unsigned long long)numberOfItems;
- (BOOL)setData:(id)arg1 forKey:(id)arg2;

@end

