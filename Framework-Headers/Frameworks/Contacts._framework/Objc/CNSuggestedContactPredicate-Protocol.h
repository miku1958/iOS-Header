//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class NSArray, SGSuggestionsService;

@protocol CNSuggestedContactPredicate <NSObject>

@optional
- (NSArray *)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(SGSuggestionsService *)arg3 error:(id *)arg4;
- (NSArray *)suggestionsWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(SGSuggestionsService *)arg3 error:(id *)arg4;
@end
