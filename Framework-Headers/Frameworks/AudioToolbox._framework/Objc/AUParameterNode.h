//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AUParameterGroup, NSString;

@interface AUParameterNode : NSObject
{
    NSString *_identifier;
    NSString *_displayName;
    unsigned long long _indexInGroup;
    AUParameterGroup *_parentNode;
    struct AUObserverList *_observerList;
    CDUnknownBlockType _impl_implementorValueObserver;
    CDUnknownBlockType _impl_implementorValueProvider;
    CDUnknownBlockType _impl_implementorStringFromValueCallback;
    CDUnknownBlockType _impl_implementorValueFromStringCallback;
    CDUnknownBlockType _impl_implementorDisplayNameWithLengthCallback;
}

@property (readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) CDUnknownBlockType impl_implementorDisplayNameWithLengthCallback; // @synthesize impl_implementorDisplayNameWithLengthCallback=_impl_implementorDisplayNameWithLengthCallback;
@property (copy, nonatomic) CDUnknownBlockType impl_implementorStringFromValueCallback; // @synthesize impl_implementorStringFromValueCallback=_impl_implementorStringFromValueCallback;
@property (copy, nonatomic) CDUnknownBlockType impl_implementorValueFromStringCallback; // @synthesize impl_implementorValueFromStringCallback=_impl_implementorValueFromStringCallback;
@property (copy, nonatomic) CDUnknownBlockType impl_implementorValueObserver; // @synthesize impl_implementorValueObserver=_impl_implementorValueObserver;
@property (copy, nonatomic) CDUnknownBlockType impl_implementorValueProvider; // @synthesize impl_implementorValueProvider=_impl_implementorValueProvider;
@property (copy, nonatomic) CDUnknownBlockType implementorDisplayNameWithLengthCallback;
@property (copy, nonatomic) CDUnknownBlockType implementorStringFromValueCallback;
@property (copy, nonatomic) CDUnknownBlockType implementorValueFromStringCallback;
@property (copy, nonatomic) CDUnknownBlockType implementorValueObserver;
@property (copy, nonatomic) CDUnknownBlockType implementorValueProvider;
@property (nonatomic) unsigned long long indexInGroup; // @synthesize indexInGroup=_indexInGroup;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (nonatomic) struct AUObserverList *observerList; // @synthesize observerList=_observerList;
@property (nonatomic) AUParameterGroup *parentNode; // @synthesize parentNode=_parentNode;

- (void)_deserialize:(struct CADeserializer *)arg1;
- (void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2;
- (id)_rootParent;
- (void)_serialize:(struct CASerializer *)arg1;
- (void)_walkTree:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (id)displayNameWithLength:(long long)arg1;
- (id)initWithID:(id)arg1 name:(id)arg2;
- (BOOL)isGroup;
- (void)removeParameterObserver:(void *)arg1;
- (void *)tokenByAddingParameterObserver:(CDUnknownBlockType)arg1;
- (void *)tokenByAddingParameterRecordingObserver:(CDUnknownBlockType)arg1;

@end

