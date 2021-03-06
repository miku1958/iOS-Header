//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookRouter-Protocol.h>

@class NSString;
@protocol NFResolver;

@interface SXQuickLookRouter : NSObject <SXQuickLookRouter>
{
    id<NFResolver> _resolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<NFResolver> resolver; // @synthesize resolver=_resolver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithResolver:(id)arg1;
- (void)presentFile:(id)arg1 transitionContext:(id)arg2;

@end

