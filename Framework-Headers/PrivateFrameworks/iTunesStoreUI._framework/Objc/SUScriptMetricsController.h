//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import <iTunesStoreUI/ISURLBagObserver-Protocol.h>

@class NSString, SSMetricsController;

@interface SUScriptMetricsController : SUScriptObject <ISURLBagObserver>
{
    SSMetricsController *_metricsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
- (id)_className;
- (void)_configureWithBagDictionary:(id)arg1;
- (id)attributeKeys;
- (void)bagDidChange:(id)arg1;
- (void)dealloc;
- (void)flushUnreportedEventsWithCompletionFunction:(id)arg1;
- (id)init;
- (void)recordEventWithTopic:(id)arg1 properties:(id)arg2 completionFunction:(id)arg3;
- (id)scriptAttributeKeys;

@end

