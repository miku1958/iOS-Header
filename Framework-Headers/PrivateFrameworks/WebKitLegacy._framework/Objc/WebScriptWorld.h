//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject
{
    WebScriptWorldPrivate *_private;
}

+ (id)findOrCreateWorld:(struct DOMWrapperWorld *)arg1;
+ (id)scriptWorldForGlobalContext:(struct OpaqueJSContext *)arg1;
+ (id)scriptWorldForJavaScriptContext:(id)arg1;
+ (id)standardWorld;
+ (id)world;
- (void)dealloc;
- (id)init;
- (id)initWithWorld:(Ref_526bc8c1 *)arg1;
- (void)unregisterWorld;

@end

