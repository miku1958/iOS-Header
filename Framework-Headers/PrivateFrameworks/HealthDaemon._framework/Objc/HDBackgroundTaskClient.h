//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HDBackgroundTaskClient : NSObject
{
    CDUnknownBlockType _taskHandler;
}

- (void).cxx_destruct;
- (void)deliverTask:(id)arg1 taskName:(id)arg2 onQueue:(id)arg3;
- (id)initWithTaskHandler:(CDUnknownBlockType)arg1;

@end

