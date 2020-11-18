//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthService, NSArray, NSLock;

@interface HKHealthServiceSession : NSObject
{
    NSArray *_interestedTransitoryKeys;
    CDUnknownBlockType _transitoryDataHandler;
    HKHealthService *_service;
    NSLock *_propertyLock;
    unsigned long long _sessionIdentifier;
    CDUnknownBlockType _sessionHandler;
    CDUnknownBlockType _characteristicsHandler;
}

@property (copy, nonatomic) CDUnknownBlockType characteristicsHandler; // @synthesize characteristicsHandler=_characteristicsHandler;
@property (strong) NSArray *interestedTransitoryKeys;
@property (strong, nonatomic) NSLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property (readonly, nonatomic) HKHealthService *service; // @synthesize service=_service;
@property (copy, nonatomic) CDUnknownBlockType sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property (nonatomic) unsigned long long sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (copy) CDUnknownBlockType transitoryDataHandler;

- (void).cxx_destruct;
- (id)initWithService:(id)arg1;

@end

