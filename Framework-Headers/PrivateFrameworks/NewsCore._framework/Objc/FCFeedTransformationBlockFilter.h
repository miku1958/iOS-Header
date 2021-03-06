//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSString;

@interface FCFeedTransformationBlockFilter : NSObject <FCFeedTransforming>
{
    CDUnknownBlockType _predicate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property (readonly) Class superclass;

+ (id)blockFilterWithPredicate:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;

@end

