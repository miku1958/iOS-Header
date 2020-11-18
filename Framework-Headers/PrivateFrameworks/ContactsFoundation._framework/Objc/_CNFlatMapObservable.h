//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@protocol CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface _CNFlatMapObservable : CNObservable
{
    CNObservable *_observable;
    CDUnknownBlockType _decoratorGenerator;
    id<CNSchedulerProvider> _schedulerProvider;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType decoratorGenerator; // @synthesize decoratorGenerator=_decoratorGenerator;
@property (readonly, nonatomic) CNObservable *observable; // @synthesize observable=_observable;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;

+ (id)concatMapWithObservable:(id)arg1 transform:(CDUnknownBlockType)arg2 schedulerProvider:(id)arg3;
+ (id)flatMapWithObservable:(id)arg1 transform:(CDUnknownBlockType)arg2 schedulerProvider:(id)arg3;
+ (id)observableWithObservable:(id)arg1 transform:(CDUnknownBlockType)arg2 decoratorGenerator:(CDUnknownBlockType)arg3 schedulerProvider:(id)arg4;
- (void).cxx_destruct;
- (id)initWithObservable:(id)arg1 transform:(CDUnknownBlockType)arg2 decoratorGenerator:(CDUnknownBlockType)arg3 schedulerProvider:(id)arg4;
- (id)subscribe:(id)arg1;
- (id)subscribeInnerObservable:(id)arg1 observer:(id)arg2 context:(id)arg3;

@end

