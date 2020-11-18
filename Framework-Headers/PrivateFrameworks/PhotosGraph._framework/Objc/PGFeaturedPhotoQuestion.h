//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString;

@interface PGFeaturedPhotoQuestion : PGSurveyQuestion
{
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
}

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithAssetUUID:(id)arg1 suggestionType:(unsigned short)arg2 suggestionSubtype:(unsigned short)arg3;
- (BOOL)isEquivalentToQuestion:(id)arg1;
- (unsigned short)state;
- (unsigned short)type;

@end
