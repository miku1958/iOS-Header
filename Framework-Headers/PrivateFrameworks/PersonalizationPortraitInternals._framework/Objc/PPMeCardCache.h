//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PPMeCardCache : NSObject
{
    NSString *_path;
}

- (void).cxx_destruct;
- (id)_cachedDateComponentsFromDateComponents:(id)arg1;
- (id)_dateComponentsFromCachedDateComponents:(id)arg1;
- (BOOL)deleteMeCardCache;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)loadMeCardCache;
- (BOOL)writeMeCardCache:(id)arg1;

@end

