//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PARURLToTopicsMaps : NSObject
{
    NSString *_version;
    NSDictionary *_urlToTopicScores;
}

@property (readonly, nonatomic) NSDictionary *urlToTopicScores; // @synthesize urlToTopicScores=_urlToTopicScores;
@property (readonly, nonatomic) NSString *version; // @synthesize version=_version;

+ (id)responseFromJSON:(id)arg1;
- (void).cxx_destruct;

@end

