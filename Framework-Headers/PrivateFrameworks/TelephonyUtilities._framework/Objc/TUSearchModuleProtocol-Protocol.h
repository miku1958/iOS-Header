//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString, TUSearchController, TUSearchResults;

@protocol TUSearchModuleProtocol <NSObject>

@property (readonly, getter=isSearchComplete) BOOL searchComplete;
@property (weak) TUSearchController *searchController;
@property (readonly) TUSearchResults *searchResults;

- (void)cancelSearch;
- (void)searchForString:(NSString *)arg1 completion:(void (^)(id<TUSearchModuleProtocol>, BOOL))arg2;

@optional
@end

