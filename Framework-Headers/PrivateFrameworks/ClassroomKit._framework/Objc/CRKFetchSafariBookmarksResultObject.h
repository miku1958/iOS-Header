//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSArray;

@interface CRKFetchSafariBookmarksResultObject : CATTaskResultObject
{
    NSArray *_bookmarks;
}

@property (copy, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

