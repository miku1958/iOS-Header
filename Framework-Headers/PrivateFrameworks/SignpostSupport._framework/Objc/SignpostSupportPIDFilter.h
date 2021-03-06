//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostPredicateProducer-Protocol.h>

@class NSPredicate, NSSet;

@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer>
{
    BOOL __wantsNotEqual;
    NSSet *_pidSet;
}

@property (readonly, nonatomic) unsigned long long _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotEqual; // @synthesize _wantsNotEqual=__wantsNotEqual;
@property (readonly, nonatomic) NSSet *pidSet; // @synthesize pidSet=_pidSet;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;

- (void).cxx_destruct;
- (BOOL)_wantsNotSubsystem;
- (void)addPIDNumber:(id)arg1;
- (void)addPIDNumberSet:(id)arg1;
- (id)init;
- (BOOL)passesPIDNumber:(id)arg1;

@end

