//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface AAAccessSessionManager : NSObject
{
    MISSING_TYPE *accessSessionManager;
}

@property (nonatomic, readonly) BOOL isActive;

- (void).cxx_destruct;
- (id)init;
- (void)pushSessionData:(id)arg1;
- (void)pushSessionData:(id)arg1 submitEventQueues:(BOOL)arg2;
- (void)pushSessionData:(id)arg1 traits:(id)arg2;
- (void)pushSessionData:(id)arg1 traits:(id)arg2 submitEventQueues:(BOOL)arg3;

@end

