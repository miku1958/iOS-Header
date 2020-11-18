//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/FLViewModel-Protocol.h>

@class FLFollowUpController, FLItemChangeObserver, NSArray, NSSet, NSString;

@interface FLItemDetailViewModel : NSObject <FLViewModel>
{
    NSArray *_originalItems;
    NSSet *_originalItemIdentifiers;
    FLFollowUpController *_controller;
    FLItemChangeObserver *_observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allPendingItems;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)setItemChangeHandler:(CDUnknownBlockType)arg1;

@end

