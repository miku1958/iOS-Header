//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface CNContactChangesFetcher : NSObject
{
    BOOL _unify;
    NSSet *_identifiers;
    NSSet *_keysToFetch;
}

@property (strong, nonatomic) NSSet *identifiers; // @synthesize identifiers=_identifiers;
@property (strong, nonatomic) NSSet *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property (nonatomic) BOOL unify; // @synthesize unify=_unify;

- (void).cxx_destruct;

@end
