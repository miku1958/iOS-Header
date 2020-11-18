//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSArray;
@protocol CNContactChangesObserver;

__attribute__((visibility("hidden")))
@interface CNContactChangesObserverProxy : NSObject
{
    BOOL _unify;
    id<CNContactChangesObserver> _observer;
    NSArray *_keysToFetch;
    CNContact *_contactSnapshot;
}

@property (strong, nonatomic) CNContact *contactSnapshot; // @synthesize contactSnapshot=_contactSnapshot;
@property (strong, nonatomic) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property (weak, nonatomic) id<CNContactChangesObserver> observer; // @synthesize observer=_observer;
@property (nonatomic) BOOL unify; // @synthesize unify=_unify;

- (void).cxx_destruct;

@end
