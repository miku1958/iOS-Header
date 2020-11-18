//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, PUViewControllerSpecChange, UITraitCollection;

@interface PUViewControllerSpec : NSObject
{
    BOOL _presentedForSecondScreen;
    BOOL __needsUpdateLayoutStyle;
    UITraitCollection *_traitCollection;
    NSHashTable *__changeObservers;
    long long __changeCount;
    long long _currentLayoutStyle;
    PUViewControllerSpecChange *_currentChange;
    struct CGSize _layoutReferenceSize;
    struct CGSize _secondScreenSize;
}

@property (nonatomic, setter=_setChangeCount:) long long _changeCount; // @synthesize _changeCount=__changeCount;
@property (readonly, nonatomic) NSHashTable *_changeObservers; // @synthesize _changeObservers=__changeObservers;
@property (nonatomic, setter=_setNeedsUpdateLayoutStyle:) BOOL _needsUpdateLayoutStyle; // @synthesize _needsUpdateLayoutStyle=__needsUpdateLayoutStyle;
@property (readonly, nonatomic) PUViewControllerSpecChange *currentChange; // @synthesize currentChange=_currentChange;
@property (readonly, nonatomic) long long currentLayoutStyle; // @synthesize currentLayoutStyle=_currentLayoutStyle;
@property (nonatomic) struct CGSize layoutReferenceSize; // @synthesize layoutReferenceSize=_layoutReferenceSize;
@property (nonatomic, getter=isPresentedForSecondScreen) BOOL presentedForSecondScreen; // @synthesize presentedForSecondScreen=_presentedForSecondScreen;
@property (nonatomic) struct CGSize secondScreenSize; // @synthesize secondScreenSize=_secondScreenSize;
@property (strong, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void).cxx_destruct;
- (void)_didChange;
- (void)_invalidateLayoutStyle;
- (void)_publishChange:(id)arg1;
- (void)_setCurrentChange:(id)arg1;
- (void)_setCurrentLayoutStyle:(long long)arg1;
- (void)_updateCurrentLayoutStyleIfNeeded;
- (void)_willChange;
- (void)assertInsideChangesBlock;
- (id)init;
- (id)newSpecChange;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)updateIfNeeded;

@end

