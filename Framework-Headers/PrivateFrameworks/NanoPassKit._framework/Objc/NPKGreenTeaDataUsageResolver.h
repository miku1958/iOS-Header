//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NPKGreenTeaDataUsageResolver : NSObject
{
    BOOL _currentlyResolving;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (nonatomic) BOOL currentlyResolving; // @synthesize currentlyResolving=_currentlyResolving;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;

+ (void)resolveGreenTeaDataUsageIfNecessary;
- (void).cxx_destruct;
- (void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)resolveGreenTeaDataUsageIfNecessary;

@end

