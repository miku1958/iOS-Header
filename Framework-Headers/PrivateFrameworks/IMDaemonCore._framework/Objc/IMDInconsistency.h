//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTWeakReference, NSDate;

@interface IMDInconsistency : NSObject
{
    CUTWeakReference *_contextWeakReference;
    NSDate *_firstOccurrence;
    unsigned long long _count;
}

@property (weak, nonatomic) id context;
@property (nonatomic) unsigned long long count; // @synthesize count=_count;
@property (readonly) NSDate *firstOccurrence; // @synthesize firstOccurrence=_firstOccurrence;

- (id)init;
- (BOOL)shouldJettison:(id *)arg1;

@end

