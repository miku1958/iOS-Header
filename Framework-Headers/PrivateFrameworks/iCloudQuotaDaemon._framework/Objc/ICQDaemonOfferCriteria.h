//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ICQDaemonOfferCriteria : NSObject
{
    NSDictionary *_serverDict;
}

@property (readonly, nonatomic) NSDictionary *serverDictionary;

- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)arg1;
- (BOOL)isSatisfiedByConditions:(id)arg1;

@end

