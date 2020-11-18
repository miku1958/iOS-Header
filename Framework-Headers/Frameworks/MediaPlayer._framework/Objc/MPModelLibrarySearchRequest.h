//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelLibraryRequest.h>

@class NSArray, NSString;

@interface MPModelLibrarySearchRequest : MPModelLibraryRequest
{
    NSArray *_scopes;
    long long _maximumResultsPerScope;
    NSString *_searchString;
}

@property (nonatomic) long long maximumResultsPerScope; // @synthesize maximumResultsPerScope=_maximumResultsPerScope;
@property (copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property (copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
