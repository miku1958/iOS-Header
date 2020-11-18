//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSEventListenerObject.h>

#import <ITMLKit/IKJSDataObservable-Protocol.h>

@class JSManagedValue, JSValue, NSArray, NSMutableArray, _IKJSDataDictionaryExporter;

@interface IKJSDataObservable : IKJSEventListenerObject <IKJSDataObservable>
{
    JSManagedValue *_managedTargetValue;
    NSMutableArray *_observerRecords;
    _IKJSDataDictionaryExporter *_exporter;
    BOOL _isBoxed;
    BOOL _observersEnabled;
    IKJSDataObservable *_parent;
    NSArray *_parentAccessorSequence;
}

@property (readonly, nonatomic) BOOL isBoxed; // @synthesize isBoxed=_isBoxed;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL observersEnabled; // @synthesize observersEnabled=_observersEnabled;
@property (readonly, weak, nonatomic) IKJSDataObservable *parent; // @synthesize parent=_parent;
@property (readonly, copy, nonatomic) NSArray *parentAccessorSequence; // @synthesize parentAccessorSequence=_parentAccessorSequence;
@property (readonly, weak, nonatomic) JSValue *targetValue;

+ (id)_proxyHandlerForValue:(id)arg1 boxed:(BOOL)arg2 context:(id)arg3;
+ (id)jsExportedProperties;
+ (id)toDataObservable:(id)arg1;
+ (id)toDataObservable:(id)arg1 proxy:(id *)arg2;
- (void).cxx_destruct;
- (id)_initWithTargetValue:(id)arg1 boxed:(BOOL)arg2;
- (void)_updateValueAtPropertyPath:(id)arg1 touch:(BOOL)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)addObserver:(id)arg1 forPropertyPathWithString:(id)arg2;
- (id)dataDictionaryObject;
- (id)exportValue;
- (id)extraInfoForChangeInPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2;
- (id)getPropertyPath:(id)arg1;
- (id)init;
- (id)initWithTargetValue:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)resetValueForPropertyPath:(id)arg1;
- (void)setParent:(id)arg1 accessorSequence:(id)arg2;
- (void)setPropertyPath:(id)arg1:(id)arg2;
- (void)setTargetValue:(id)arg1;
- (void)setValue:(id)arg1 forPropertyPath:(id)arg2;
- (void)touchPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2;
- (void)touchPropertyPath:(id)arg1;
- (id)valueForAccessorSequence:(id)arg1 closestParent:(id *)arg2 accessorSequenceFromClosestParent:(id *)arg3;
- (id)valueForPropertyPath:(id)arg1 boxed:(BOOL)arg2;

@end
