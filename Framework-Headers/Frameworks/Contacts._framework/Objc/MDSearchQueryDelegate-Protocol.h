//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class MDSearchQuery, NSArray, NSError;

@protocol MDSearchQueryDelegate <NSObject>
- (void)searchQuery:(MDSearchQuery *)arg1 didReturnItems:(NSArray *)arg2;

@optional
- (void)searchQuery:(MDSearchQuery *)arg1 didFailWithError:(NSError *)arg2;
- (void)searchQuery:(MDSearchQuery *)arg1 statusChanged:(unsigned long long)arg2;
@end

