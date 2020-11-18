//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRStandardCallback, NSArray;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MRAVOutputContextModification : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _valid;
    unsigned long long _modificationType;
    NSArray *_outputDevices;
    MRStandardCallback *_callback;
}

@property (readonly, nonatomic) MRStandardCallback *callback; // @synthesize callback=_callback;
@property (readonly, nonatomic) unsigned long long modificationType; // @synthesize modificationType=_modificationType;
@property (readonly, nonatomic) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
@property (readonly, nonatomic) BOOL valid; // @synthesize valid=_valid;

+ (id)addModificationWithDevices:(id)arg1 callback:(id)arg2;
+ (id)removeModificationWithDevices:(id)arg1 callback:(id)arg2;
+ (id)replaceModificationWithDevices:(id)arg1 callback:(id)arg2;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 devices:(id)arg2 callback:(id)arg3;
- (void)invalidate;

@end

