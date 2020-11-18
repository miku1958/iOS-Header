//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISEGestureFeature.h>

#import <UIKitCore/_UISEGestureFeatureDelegate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UISEAnyGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate>
{
    NSArray *_subfeatures;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *subfeatures; // @synthesize subfeatures=_subfeatures;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;
- (id)debugDictionary;
- (void)featureDidChangeState:(id)arg1;
- (id)initWithSubfeatures:(id)arg1;

@end

