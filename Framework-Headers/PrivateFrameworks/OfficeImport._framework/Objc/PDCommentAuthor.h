//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDCommentAuthor : NSObject
{
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (void).cxx_destruct;
- (unsigned int)colorIndex;
- (id)description;
- (unsigned int)id;
- (id)init;
- (id)initials;
- (unsigned int)lastCommentIndex;
- (id)name;
- (void)setColorIndex:(unsigned int)arg1;
- (void)setId:(unsigned int)arg1;
- (void)setInitials:(id)arg1;
- (void)setLastCommentIndex:(unsigned int)arg1;
- (void)setName:(id)arg1;

@end
