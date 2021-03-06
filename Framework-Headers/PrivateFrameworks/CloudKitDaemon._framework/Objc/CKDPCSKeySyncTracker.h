//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSNumber, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDPCSKeySyncTracker : NSObject
{
    BOOL _manatee;
    NSString *_serviceName;
    NSObject<OS_dispatch_group> *_syncGroup;
    NSDate *_completionDate;
    NSNumber *_syncStatus;
    NSError *_syncError;
}

@property (strong, nonatomic) NSDate *completionDate; // @synthesize completionDate=_completionDate;
@property (nonatomic, getter=isManatee) BOOL manatee; // @synthesize manatee=_manatee;
@property (strong, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (readonly, nonatomic) unsigned long long state;
@property (strong, nonatomic) NSError *syncError; // @synthesize syncError=_syncError;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *syncGroup; // @synthesize syncGroup=_syncGroup;
@property (strong, nonatomic) NSNumber *syncStatus; // @synthesize syncStatus=_syncStatus;

- (void).cxx_destruct;
- (void)waitOnSyncWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

