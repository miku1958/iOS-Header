//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString;

@interface PGMemoryQualityQuestion : PGSurveyQuestion
{
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithMemory:(id)arg1 localFactoryScore:(double)arg2;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end
