//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ISCVirtualServiceProvider;

__attribute__((visibility("hidden")))
@interface ISCVirtualService : NSObject
{
    NSString *_identifier;
    struct __IOHIDService *_hidService;
    struct __IOHIDEventSystem *_hidEventSystem;
    id<ISCVirtualServiceProvider> _hidCallbackDelegate;
}

@property (strong, nonatomic) id<ISCVirtualServiceProvider> hidCallbackDelegate; // @synthesize hidCallbackDelegate=_hidCallbackDelegate;
@property (nonatomic) struct __IOHIDEventSystem *hidEventSystem; // @synthesize hidEventSystem=_hidEventSystem;
@property (nonatomic) struct __IOHIDService *hidService; // @synthesize hidService=_hidService;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

+ (id)serviceWithIdentifier:(id)arg1 eventSystem:(struct __IOHIDEventSystem *)arg2 callbackDelegate:(id)arg3;
+ (id)serviceWithIdentifier:(id)arg1 eventSystem:(struct __IOHIDEventSystem *)arg2 properties:(id)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dispatchEvent:(struct __IOHIDEvent *)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 eventSystem:(struct __IOHIDEventSystem *)arg2 callbackDelegate:(id)arg3;

@end
