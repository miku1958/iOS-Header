//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class FCReadingHistory, NSString;

@interface FCFeedTransformationUnreadOnly : NSObject <FCFeedTransforming>
{
    FCReadingHistory *_history;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) FCReadingHistory *history; // @synthesize history=_history;
@property (readonly) Class superclass;

+ (id)transformationWithReadingHistory:(id)arg1;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;

@end

