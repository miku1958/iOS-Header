//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeRecommendationEngine/HRERecommendationSource-Protocol.h>

@class NSString;

@interface HREStandardAsyncRecommendationSource : NSObject <HRERecommendationSource>
{
    Class _generationProcessClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long disablingOptions;
@property (readonly, nonatomic) Class generationProcessClass; // @synthesize generationProcessClass=_generationProcessClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dispatchProcess:(id)arg1 options:(unsigned long long)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)recommendationsForHome:(id)arg1 withServiceLikeItems:(id)arg2 options:(unsigned long long)arg3;
- (void)setupProcess:(id)arg1;

@end

