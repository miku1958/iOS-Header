//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSUUID;
@protocol OS_dispatch_queue;

@interface HDStaticSyncTask : NSObject
{
    HDProfile *_profile;
    unsigned long long _options;
    NSUUID *_storeIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) NSUUID *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 options:(unsigned long long)arg2 storeIdentifier:(id)arg3;
- (id)runWithCompletion:(CDUnknownBlockType)arg1;

@end

