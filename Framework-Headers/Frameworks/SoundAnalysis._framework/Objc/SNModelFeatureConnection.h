//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNModelFeatureConnection : NSObject
{
    NSString *_sourceFeatureName;
    NSString *_destinationFeatureName;
}

@property (readonly) NSString *destinationFeatureName; // @synthesize destinationFeatureName=_destinationFeatureName;
@property (readonly) NSString *sourceFeatureName; // @synthesize sourceFeatureName=_sourceFeatureName;

- (void).cxx_destruct;
- (id)initWithSourceFeatureName:(id)arg1 destinationFeatureName:(id)arg2;

@end
