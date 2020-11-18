//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchSafariBookmarksResultObject : CATTaskResultObject
{
    NSArray *_bookmarks;
}

@property (readonly, copy, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_appendDescriptionOfBookmark:(id)arg1 toString:(id)arg2 level:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBookmarks:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

