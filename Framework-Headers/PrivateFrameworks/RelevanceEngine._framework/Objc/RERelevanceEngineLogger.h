//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REObserverStore;

@interface RERelevanceEngineLogger : NSObject
{
    REObserverStore *_loggables;
}

- (void).cxx_destruct;
- (void)addLoggable:(id)arg1;
- (void)enumerateLoggables:(CDUnknownBlockType)arg1;
- (id)init;
- (void)removeLoggable:(id)arg1;

@end

