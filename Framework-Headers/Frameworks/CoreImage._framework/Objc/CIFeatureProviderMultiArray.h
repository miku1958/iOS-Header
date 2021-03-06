//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreImage/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CIFeatureProviderMultiArray : NSObject <MLFeatureProvider>
{
    MLMultiArray *multiArray;
    NSString *name;
}

@property (readonly, nonatomic) NSSet *featureNames;
@property (strong, nonatomic) MLMultiArray *multiArray; // @synthesize multiArray;
@property (strong, nonatomic) NSString *name; // @synthesize name;

- (id)featureValueForName:(id)arg1;
- (id)initWithName:(id)arg1 array:(id)arg2;

@end

