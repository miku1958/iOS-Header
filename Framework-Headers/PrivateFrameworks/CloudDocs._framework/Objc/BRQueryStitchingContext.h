//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BRNotificationReceiver, BRQuery;

__attribute__((visibility("hidden")))
@interface BRQueryStitchingContext : NSObject
{
    BRQuery *_query;
    BRNotificationReceiver *_receiver;
}

- (void)dealloc;
- (id)initWithQuery:(id)arg1;
- (void)performAsyncOnReceiver:(CDUnknownBlockType)arg1;

@end

