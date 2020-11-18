//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRTransactionSource : NSObject
{
    NSMutableDictionary *_originSources;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _name;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) unsigned long long name; // @synthesize name=_name;

- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1;
- (void)removeOrigin:(struct _MROrigin *)arg1;
- (void)sendPackets:(id)arg1 forOrigin:(struct _MROrigin *)arg2;

@end

