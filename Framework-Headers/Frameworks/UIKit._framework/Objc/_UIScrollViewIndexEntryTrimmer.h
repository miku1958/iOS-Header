//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol _UIScrollViewIndexEntryTrimmerDelegate;

__attribute__((visibility("hidden")))
@interface _UIScrollViewIndexEntryTrimmer : NSObject
{
    NSArray *_allEntries;
    id<_UIScrollViewIndexEntryTrimmerDelegate> _delegate;
}

@property (copy, nonatomic) NSArray *allEntries; // @synthesize allEntries=_allEntries;
@property (weak, nonatomic) id<_UIScrollViewIndexEntryTrimmerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)_trimEntries:(id)arg1 toFitCount:(long long)arg2;
- (id)entriesTrimmedToFitCount:(long long)arg1;

@end

