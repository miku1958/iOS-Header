//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoSkipPolicy-Protocol.h>

@class NSString;
@protocol SXVideoCollectionViewProviding;

@interface SXVideoSkipPolicyManager : NSObject <SXVideoSkipPolicy>
{
    BOOL _shouldAutoAdvance;
    id<SXVideoCollectionViewProviding> _collectionViewProvider;
}

@property (readonly, nonatomic) BOOL canSkip;
@property (readonly, nonatomic) id<SXVideoCollectionViewProviding> collectionViewProvider; // @synthesize collectionViewProvider=_collectionViewProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldAutoAdvance; // @synthesize shouldAutoAdvance=_shouldAutoAdvance;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCollectionViewProvider:(id)arg1 shouldAutoAdvance:(BOOL)arg2;

@end
