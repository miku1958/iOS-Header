//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentViewFactory-Protocol.h>

@class NSString;
@protocol NFResolver;

@interface SXSubscriptionButtonComponentViewFactory : NSObject <SXComponentViewFactory>
{
    id<NFResolver> _resolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<NFResolver> resolver; // @synthesize resolver=_resolver;
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithResolver:(id)arg1;

@end

