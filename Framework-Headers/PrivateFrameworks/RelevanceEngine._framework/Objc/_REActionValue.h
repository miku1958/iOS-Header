//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, REDonatedAction;

@interface _REActionValue : NSObject
{
    NSMutableSet *_mutableUUIDs;
    REDonatedAction *_action;
}

@property (readonly, nonatomic) REDonatedAction *action; // @synthesize action=_action;
@property (readonly, nonatomic) NSSet *uuids;

- (void).cxx_destruct;
- (void)addUUID:(id)arg1;
- (id)initWithAction:(id)arg1;
- (void)removeUUID:(id)arg1;

@end

