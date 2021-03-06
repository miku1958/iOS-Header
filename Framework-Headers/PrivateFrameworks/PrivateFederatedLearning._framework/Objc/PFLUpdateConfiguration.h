//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModelConfiguration, NSArray, NSString;

@interface PFLUpdateConfiguration : NSObject
{
    NSString *_identifier;
    NSArray *_layerNames;
    double _normMax;
    unsigned long long _normBinCount;
    MLModelConfiguration *_modelConfiguration;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSArray *layerNames; // @synthesize layerNames=_layerNames;
@property (readonly, nonatomic) MLModelConfiguration *modelConfiguration; // @synthesize modelConfiguration=_modelConfiguration;
@property (readonly, nonatomic) unsigned long long normBinCount; // @synthesize normBinCount=_normBinCount;
@property (readonly, nonatomic) double normMax; // @synthesize normMax=_normMax;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 layerNames:(id)arg2 normMax:(double)arg3 normBinCount:(unsigned long long)arg4 modelConfiguration:(id)arg5;

@end

