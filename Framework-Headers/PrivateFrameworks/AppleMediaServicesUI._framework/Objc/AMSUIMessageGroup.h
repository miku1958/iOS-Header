//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InAppMessages/IAMMessageGroup.h>

@class NSDictionary;
@protocol AMSBagProtocol;

@interface AMSUIMessageGroup : IAMMessageGroup
{
    NSDictionary *_clientData;
    NSDictionary *_clientMetricsOverlay;
    id<AMSBagProtocol> _bag;
}

@property (strong, nonatomic) id<AMSBagProtocol> bag; // @synthesize bag=_bag;
@property (strong, nonatomic) NSDictionary *clientData; // @synthesize clientData=_clientData;
@property (strong, nonatomic) NSDictionary *clientMetricsOverlay; // @synthesize clientMetricsOverlay=_clientMetricsOverlay;

- (void).cxx_destruct;
- (id)_viewControllerForType:(long long)arg1 account:(id)arg2 URL:(id)arg3 sidepack:(id)arg4 metrics:(id)arg5;
- (id)init;
- (id)initWithBag:(id)arg1;
- (void)viewControllerForModalMessagePresentation:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
