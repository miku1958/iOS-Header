//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFoundation/NFContainerRegistry-Protocol.h>

@class NSString;
@protocol NFCallbackRegistration, NFRegistrationContainer;

@interface NFContainerRegistry : NSObject <NFContainerRegistry>
{
    id<NFRegistrationContainer> _publicContainer;
    id<NFRegistrationContainer> _privateContainer;
    id _bridgedContainer;
    id _swiftContainer;
    id<NFCallbackRegistration> _callback;
}

@property (readonly, nonatomic) id bridgedContainer; // @synthesize bridgedContainer=_bridgedContainer;
@property (readonly, nonatomic) id<NFCallbackRegistration> callback; // @synthesize callback=_callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<NFRegistrationContainer> privateContainer; // @synthesize privateContainer=_privateContainer;
@property (readonly, nonatomic) id<NFRegistrationContainer> publicContainer; // @synthesize publicContainer=_publicContainer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id swiftContainer; // @synthesize swiftContainer=_swiftContainer;

- (void).cxx_destruct;
- (id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 bridgedContainer:(id)arg3 callback:(id)arg4;

@end

