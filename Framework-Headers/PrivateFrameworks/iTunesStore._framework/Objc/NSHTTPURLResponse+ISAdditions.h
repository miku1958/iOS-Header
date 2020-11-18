//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSHTTPURLResponse.h>

@interface NSHTTPURLResponse (ISAdditions)
- (id)_dateFromExpires;
- (BOOL)_getCacheControlMaxAge:(double *)arg1;
- (id)_iTunesStore_valueForHTTPHeader:(id)arg1;
- (double)expirationInterval;
- (id)itunes_expirationDate;
- (double)itunes_expirationInterval;
- (long long)itunes_maxExpectedContentLength;
@end
