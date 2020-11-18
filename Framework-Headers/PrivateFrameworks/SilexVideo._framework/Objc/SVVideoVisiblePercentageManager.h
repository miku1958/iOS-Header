//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoVisiblePercentageManager-Protocol.h>

@class NSString, SVWeakObjectCache;
@protocol SVVideoVisiblePercentageProviderFactory;

@interface SVVideoVisiblePercentageManager : NSObject <SVVideoVisiblePercentageManager>
{
    id<SVVideoVisiblePercentageProviderFactory> _visiblePercentageProviderFactory;
    SVWeakObjectCache *_visiblePercentageProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SVVideoVisiblePercentageProviderFactory> visiblePercentageProviderFactory; // @synthesize visiblePercentageProviderFactory=_visiblePercentageProviderFactory;
@property (readonly, nonatomic) SVWeakObjectCache *visiblePercentageProviders; // @synthesize visiblePercentageProviders=_visiblePercentageProviders;

- (void).cxx_destruct;
- (id)_visiblePercentageProviderForVideo:(id)arg1;
- (id)initWithVisiblePercentageProviderFactory:(id)arg1;
- (id)visiblePercentageProviderForVideo:(id)arg1;
- (id)visiblePercentageReporterForVideo:(id)arg1;

@end
