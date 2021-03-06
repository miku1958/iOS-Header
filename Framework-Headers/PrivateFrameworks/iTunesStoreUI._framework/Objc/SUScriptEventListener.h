//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString, WebScriptObject;

@interface SUScriptEventListener : NSObject
{
    WebScriptObject *_callback;
    NSLock *_lock;
    NSString *_name;
    BOOL _useCapture;
}

@property (strong) WebScriptObject *callback; // @synthesize callback=_callback;
@property (copy) NSString *name; // @synthesize name=_name;
@property BOOL shouldUseCapture; // @synthesize shouldUseCapture=_useCapture;

- (void).cxx_destruct;
- (id)init;

@end

