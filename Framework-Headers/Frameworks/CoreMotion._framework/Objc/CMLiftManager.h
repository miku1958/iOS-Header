//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMLiftManagerInternal;
@protocol CMLiftManagerDelegate;

@interface CMLiftManager : NSObject
{
    CMLiftManagerInternal *_internal;
}

@property (readonly, nonatomic) CMLiftManagerInternal *_internal; // @synthesize _internal;
@property (nonatomic) id<CMLiftManagerDelegate> delegate;

+ (BOOL)isAvailable;
- (void)dealloc;
- (id)init;
- (void)registerForLiftNotifications;
- (void)unregisterForLiftNotifications;

@end

