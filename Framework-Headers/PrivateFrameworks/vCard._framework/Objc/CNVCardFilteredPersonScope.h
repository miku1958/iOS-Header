//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CNVCardFilteredPersonScope : NSObject
{
    NSSet *_blacklist;
    unsigned long long _filterOptions;
}

@property (readonly) NSSet *blacklist; // @synthesize blacklist=_blacklist;
@property (readonly) unsigned long long filterOptions; // @synthesize filterOptions=_filterOptions;

- (void).cxx_destruct;
- (id)initWithBlacklist:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isEmpty;

@end
