//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentSizer.h>

@protocol SWLoadingPolicyProvider;

@interface SXWebContentComponentSizer : SXComponentSizer
{
    id<SWLoadingPolicyProvider> _loadingPolicyProvider;
}

@property (readonly, nonatomic) id<SWLoadingPolicyProvider> loadingPolicyProvider; // @synthesize loadingPolicyProvider=_loadingPolicyProvider;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 loadingPolicyProvider:(id)arg6;

@end

