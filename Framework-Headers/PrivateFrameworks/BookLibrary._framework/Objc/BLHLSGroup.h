//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BLHLSGroup : NSObject
{
    NSString *_groupID;
    NSArray *_media;
}

@property (readonly, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property (readonly, nonatomic) NSArray *media; // @synthesize media=_media;

- (void).cxx_destruct;
- (id)description;
- (id)initWithGroupID:(id)arg1 media:(id)arg2;

@end

