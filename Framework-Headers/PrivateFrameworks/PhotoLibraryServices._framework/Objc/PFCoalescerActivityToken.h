//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

@interface PFCoalescerActivityToken : NSObject
{
    NSObject<OS_dispatch_group> *_group;
}

@property (strong) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;

- (void).cxx_destruct;
- (void)dealloc;
- (void)endActivity;
- (id)initWithDispatchGroup:(id)arg1;

@end
