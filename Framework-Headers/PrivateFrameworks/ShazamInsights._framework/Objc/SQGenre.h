//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SQGenre : NSObject
{
    float _score;
    NSString *_label;
}

@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) float score; // @synthesize score=_score;

+ (id)genreWithLabel:(id)arg1 score:(float)arg2;
- (void).cxx_destruct;

@end
