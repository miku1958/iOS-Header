//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumberFormatter;
@protocol OS_dispatch_queue;

@interface MCFormatterVendor : NSObject
{
    NSNumberFormatter *_numberFormatter;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_localeDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)numberFormatter;

@end
