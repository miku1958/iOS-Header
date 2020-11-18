//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInputCore/TIKeyboardAssertionManaging-Protocol.h>

@class NSHashTable, NSString;
@protocol TIKeyboardAssertionManagerDelegate;

@interface TIKeyboardAssertionManager : NSObject <TIKeyboardAssertionManaging>
{
    BOOL _hasAssertions;
    BOOL _pendingUpdate;
    BOOL _hasBackgroundActivityAssertions;
    id<TIKeyboardAssertionManagerDelegate> _delegate;
    NSHashTable *_assertions;
    long long _backgroundActivityAssertions;
}

@property (readonly, nonatomic) NSHashTable *assertions; // @synthesize assertions=_assertions;
@property (nonatomic) long long backgroundActivityAssertions; // @synthesize backgroundActivityAssertions=_backgroundActivityAssertions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<TIKeyboardAssertionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAssertions; // @synthesize hasAssertions=_hasAssertions;
@property (nonatomic) BOOL hasBackgroundActivityAssertions; // @synthesize hasBackgroundActivityAssertions=_hasBackgroundActivityAssertions;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL pendingUpdate; // @synthesize pendingUpdate=_pendingUpdate;
@property (readonly) Class superclass;

+ (void)setSharedAssertionManager:(id)arg1;
+ (id)sharedAssertionManager;
+ (id)singletonInstance;
- (void)addAssertionForObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)performBackgroundActivityUpdate;
- (void)performUpdate;
- (void)releaseBackgroundActivityAssertion;
- (void)removeAssertionForObject:(id)arg1;
- (void)retainBackgroundActivityAssertion;
- (void)scheduleUpdate;

@end

