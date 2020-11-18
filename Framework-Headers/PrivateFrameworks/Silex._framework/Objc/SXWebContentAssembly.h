//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NFAssembly-Protocol.h>

@class NSString;

@interface SXWebContentAssembly : NSObject <NFAssembly>
{
    unsigned long long _features;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long features; // @synthesize features=_features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithFeatures:(unsigned long long)arg1;
- (BOOL)isFeatureEnabled:(unsigned long long)arg1;
- (void)loadPublicContainer:(id)arg1 privateContainer:(id)arg2;

@end

