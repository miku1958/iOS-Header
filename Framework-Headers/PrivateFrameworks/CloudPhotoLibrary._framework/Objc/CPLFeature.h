//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPLFeature : NSObject
{
}

+ (id)featureWithName:(id)arg1;
- (BOOL)disableFeatureInStore:(id)arg1 error:(id *)arg2;
- (BOOL)enableFeatureInStore:(id)arg1 error:(id *)arg2;
- (BOOL)handleScopeWhenFeatureIsDisabled:(id)arg1 scopeType:(long long)arg2 store:(id)arg3 error:(id *)arg4;
- (BOOL)shouldDisableScopeWhenFeatureIsDisabled:(id)arg1;

@end
