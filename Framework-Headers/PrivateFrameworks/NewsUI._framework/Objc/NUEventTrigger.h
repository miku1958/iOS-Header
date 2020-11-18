//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface NUEventTrigger : NSObject
{
    BOOL _fireOnce;
    BOOL _fireOnAny;
    NSString *_key;
    NSSet *_events;
    CDUnknownBlockType _block;
}

@property (readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (readonly, copy, nonatomic) NSSet *events; // @synthesize events=_events;
@property (readonly, nonatomic) BOOL fireOnAny; // @synthesize fireOnAny=_fireOnAny;
@property (readonly, nonatomic) BOOL fireOnce; // @synthesize fireOnce=_fireOnce;
@property (readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 fireOnce:(BOOL)arg2 fireOnAny:(BOOL)arg3 events:(id)arg4 block:(CDUnknownBlockType)arg5;

@end

