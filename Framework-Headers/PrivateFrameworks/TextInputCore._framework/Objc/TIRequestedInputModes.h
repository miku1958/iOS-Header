//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface TIRequestedInputModes : NSObject
{
    BOOL _didLoad;
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_inputModesByDate;
}

+ (id)defaultDatabaseURL;
- (void).cxx_destruct;
- (void)_addInputMode:(id)arg1 date:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_inputModes;
- (void)_inputModes:(CDUnknownBlockType)arg1;
- (void)_loadIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeAllInputModes:(CDUnknownBlockType)arg1;
- (void)_removeInputModesBeforeDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_saveInputModes;
- (void)addInputMode:(id)arg1 date:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)inputModes:(CDUnknownBlockType)arg1;
- (void)removeAllInputModes:(CDUnknownBlockType)arg1;
- (void)removeInputModesBeforeDate:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

