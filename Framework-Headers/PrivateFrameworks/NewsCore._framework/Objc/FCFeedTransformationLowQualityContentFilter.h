//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSString;
@protocol FCFeedPersonalizing;

@interface FCFeedTransformationLowQualityContentFilter : NSObject <FCFeedTransforming>
{
    id<FCFeedPersonalizing> _feedPersonalizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)transformationWithPersonalizer:(id)arg1;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;

@end

