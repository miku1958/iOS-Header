//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TemplateKit/TLKObservable-Protocol.h>
#import <TemplateKit/TLKObserver-Protocol.h>

@class NSString;
@protocol TLKObserver;

@interface TLKObject : NSObject <TLKObservable, TLKObserver>
{
    BOOL inBatchUpdate;
    id<TLKObserver> observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL inBatchUpdate; // @synthesize inBatchUpdate;
@property (weak) id<TLKObserver> observer; // @synthesize observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)propertiesDidChange;

@end

