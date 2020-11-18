//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IKJSDataItemObserver;

__attribute__((visibility("hidden")))
@interface _IKJSDataItemObserverRecord : NSObject
{
    struct {
        BOOL hasDidChangePropertyPath;
        BOOL hasDidChangeSubPropertyPath;
    } _observerFlags;
    BOOL _subscriptWildcard;
    id<IKJSDataItemObserver> _observer;
    NSString *_observerHash;
    NSString *_pathString;
}

@property (readonly, weak, nonatomic) id<IKJSDataItemObserver> observer; // @synthesize observer=_observer;
@property (readonly, weak, nonatomic) NSString *observerHash; // @synthesize observerHash=_observerHash;
@property (readonly, nonatomic) NSString *pathString; // @synthesize pathString=_pathString;
@property (readonly, nonatomic, getter=isSubscriptWildcard) BOOL subscriptWildcard; // @synthesize subscriptWildcard=_subscriptWildcard;

+ (id)hashForObserver:(id)arg1;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 pathString:(id)arg2 subscriptWildcard:(BOOL)arg3;
- (BOOL)isAffectedByPropertyPathWithString:(id)arg1;
- (BOOL)isAffectedByPropertyPathWithString:(id)arg1 subscript:(long long)arg2;

@end

