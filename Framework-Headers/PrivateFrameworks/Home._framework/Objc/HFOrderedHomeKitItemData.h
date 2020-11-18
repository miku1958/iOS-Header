//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUUID;

@interface HFOrderedHomeKitItemData : NSObject
{
    NSUUID *_uniqueIdentifier;
    NSString *_title;
    NSDate *_dateAdded;
    NSString *_actionSetType;
}

@property (copy, nonatomic) NSString *actionSetType; // @synthesize actionSetType=_actionSetType;
@property (copy, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (id)dataWithUniqueIdentifier:(id)arg1 title:(id)arg2 dateAdded:(id)arg3;
- (void).cxx_destruct;

@end

