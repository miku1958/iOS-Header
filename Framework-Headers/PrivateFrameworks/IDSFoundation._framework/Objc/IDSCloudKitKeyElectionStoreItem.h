//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENGroupID, NSString;

@interface IDSCloudKitKeyElectionStoreItem : NSObject
{
    NSString *_groupName;
    ENGroupID *_groupID;
}

@property (strong, nonatomic) ENGroupID *groupID; // @synthesize groupID=_groupID;
@property (strong, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;

- (void).cxx_destruct;
- (id)description;

@end

