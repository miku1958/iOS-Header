//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@class NSObject, PKHostPlugIn;
@protocol OS_dispatch_queue;

@interface PKHostDefaults : NSUserDefaults
{
    PKHostPlugIn *_plugin;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak) PKHostPlugIn *plugin; // @synthesize plugin=_plugin;
@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (id)initWithPlugIn:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)registerDefaults:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)synchronize;

@end

