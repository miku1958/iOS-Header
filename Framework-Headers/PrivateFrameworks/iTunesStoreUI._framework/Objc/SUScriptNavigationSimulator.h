//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import <iTunesStoreUI/UINavigationControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, UINavigationController, WebScriptObject;

@interface SUScriptNavigationSimulator : SUScriptObject <UINavigationControllerDelegate>
{
    WebScriptObject *_transitionCallback;
    long long _initialIndex;
    long long _lastVisibleIndex;
    UINavigationController *_navigationController;
    NSMutableArray *_enqueuedTransitions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableArray *enqueuedTransitions; // @synthesize enqueuedTransitions=_enqueuedTransitions;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long indexCount;
@property (nonatomic) long long initialIndex; // @synthesize initialIndex=_initialIndex;
@property (nonatomic) long long lastVisibleIndex; // @synthesize lastVisibleIndex=_lastVisibleIndex;
@property (weak, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (readonly) Class superclass;
@property (strong, nonatomic) WebScriptObject *transitionCallback;
@property (readonly, nonatomic) long long visibleIndex;

+ (void)initialize;
+ (void)startTransition;
+ (void)stopTransition;
+ (BOOL)transitioning;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
- (void).cxx_destruct;
- (void)_callCallbackWithWithTransition:(id)arg1;
- (id)_className;
- (void)_enqueueLoadingState:(id)arg1;
- (void)_handlePopFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (CDUnknownBlockType)_popHandler;
- (long long)_relativeIndexFromIndex:(long long)arg1;
- (void)_startNextTransition;
- (id)attributeKeys;
- (id)initWithNavigationController:(id)arg1;
- (void)popToViewAtIndex:(long long)arg1 completion:(id)arg2;
- (void)popViewWithCompletion:(id)arg1;
- (void)pushViewWithCompletion:(id)arg1;
- (id)scriptAttributeKeys;
- (void)setIndexCount:(long long)arg1;
- (void)setVisibleIndex:(long long)arg1;

@end
