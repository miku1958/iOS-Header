//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface GEOLogAdaptorFactory : NSObject
{
    NSMutableDictionary *_logAdaptors;
}

+ (id)sharedInstance;
- (id)_createLogAdaptorWithOptions:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)logAdaptorWithOptions:(id)arg1;

@end

