//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

@interface CPLConfiguration : NSObject
{
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
    NSDate *_lastUpdate;
    double _updateInterval;
    NSURLSession *_currentSession;
    NSObject<OS_dispatch_queue> *_lock;
}

+ (void)disableConfigurationFetching;
- (void).cxx_destruct;
- (void)_load;
- (void)_save;
- (void)_setContents:(id)arg1;
- (double)_updateInterval;
- (void)check;
- (id)initWithClientLibraryBaseURL:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)refetchFromDisk;
- (id)valueForKey:(id)arg1;

@end

