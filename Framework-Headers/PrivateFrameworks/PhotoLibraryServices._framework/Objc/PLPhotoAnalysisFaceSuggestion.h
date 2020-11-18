//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PLPhotoAnalysisFaceSuggestion : NSObject
{
    NSString *_faceLocalIdentifier;
    NSArray *_matchingFaceLocalIdentifiers;
    BOOL _isConfirmed;
    BOOL _confirmed;
}

@property (readonly, nonatomic, getter=isConfirmed) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property (readonly, copy, nonatomic) NSString *faceLocalIdentifier; // @synthesize faceLocalIdentifier=_faceLocalIdentifier;
@property (readonly, copy, nonatomic) NSArray *matchingFaceLocalIdentifiers; // @synthesize matchingFaceLocalIdentifiers=_matchingFaceLocalIdentifiers;

- (void).cxx_destruct;
- (id)initWithSuggestionDictionary:(id)arg1;

@end
