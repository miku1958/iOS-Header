//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSASComment;

@interface MSASCommentChange : NSObject
{
    int _deletionIndex;
    int _type;
    MSASComment *_comment;
}

@property (strong, nonatomic) MSASComment *comment; // @synthesize comment=_comment;
@property (nonatomic) int deletionIndex; // @synthesize deletionIndex=_deletionIndex;
@property (nonatomic) int type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)description;

@end

