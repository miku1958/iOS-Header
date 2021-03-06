//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFileCoordinationRetainedAccess-Protocol.h>

@class NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface NSFileCoordinatorReacquisitionBlockCompletion : NSObject <NSFileCoordinationRetainedAccess>
{
    NSObject<OS_dispatch_group> *group;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)completionWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)dealloc;
- (void)decrement;
- (void)increment;

@end

