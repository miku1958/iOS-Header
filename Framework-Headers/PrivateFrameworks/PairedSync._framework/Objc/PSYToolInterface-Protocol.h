//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PairedSync/NSObject-Protocol.h>

@class PSYOptions;

@protocol PSYToolInterface <NSObject>
- (oneway void)cancelSyncSession;
- (oneway void)clearCurrentResumeContext;
- (oneway void)getOrderedActivityInfosWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)startSyncWithOptions:(PSYOptions *)arg1;
@end

