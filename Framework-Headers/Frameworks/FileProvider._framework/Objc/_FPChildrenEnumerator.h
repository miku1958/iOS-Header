//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPXEnumeratorObserver-Protocol.h>

@class FPItem, NSString;
@protocol FPXEnumerator;

__attribute__((visibility("hidden")))
@interface _FPChildrenEnumerator : NSObject <FPXEnumeratorObserver>
{
    FPItem *_parentItem;
    id<FPXEnumerator> _enumerator;
    CDUnknownBlockType _enumerationCallback;
    CDUnknownBlockType _enumerationCompletionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)enumerateChildrenOfItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)didUpdateItem:(id)arg1;
- (void)enumerateFromPage:(id)arg1;
- (void)enumerationResultsDidChange;
- (void)finishWithError:(id)arg1;
- (id)initWithItem:(id)arg1 enumerationCallback:(CDUnknownBlockType)arg2;

@end
