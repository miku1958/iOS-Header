//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface DispatchGroupWrapper : NSObject
{
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

@property (strong, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;

- (void).cxx_destruct;
- (void)executeWithDispatchGroup:(CDUnknownBlockType)arg1;
- (id)init;
- (void)notify:(CDUnknownBlockType)arg1;

@end

