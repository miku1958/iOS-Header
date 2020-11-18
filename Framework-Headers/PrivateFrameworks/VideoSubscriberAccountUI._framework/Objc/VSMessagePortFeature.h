//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/IKDOMFeature-Protocol.h>
#import <VideoSubscriberAccountUI/VSJSMessagePortDelegate-Protocol.h>

@class IKAppContext, NSString;
@protocol VSMessagePortFeatureDelegate;

__attribute__((visibility("hidden")))
@interface VSMessagePortFeature : NSObject <VSJSMessagePortDelegate, IKDOMFeature>
{
    NSString *_featureName;
    IKAppContext *_appContext;
    id<VSMessagePortFeatureDelegate> _delegate;
}

@property (readonly, weak, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSMessagePortFeatureDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
- (void).cxx_destruct;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (void)messagePort:(id)arg1 didReceiveMessage:(id)arg2;

@end
