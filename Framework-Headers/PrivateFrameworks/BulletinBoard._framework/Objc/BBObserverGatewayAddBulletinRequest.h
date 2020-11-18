//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface BBObserverGatewayAddBulletinRequest : NSObject
{
    NSString *_bulletinID;
    NSString *_sectionID;
    NSDate *_timeout;
    CDUnknownBlockType _timeoutHandler;
}

@property (copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property (copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property (strong, nonatomic) NSDate *timeout; // @synthesize timeout=_timeout;
@property (copy, nonatomic) CDUnknownBlockType timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;

- (void).cxx_destruct;

@end

