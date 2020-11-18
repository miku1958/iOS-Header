//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CalDAVMove : NSObject
{
    int _sourceCalendarID;
    int _itemID;
    int _changeID;
    int _entityType;
    NSString *_oldExternalID;
}

@property (nonatomic) int changeID; // @synthesize changeID=_changeID;
@property (nonatomic) int entityType; // @synthesize entityType=_entityType;
@property (nonatomic) int itemID; // @synthesize itemID=_itemID;
@property (strong, nonatomic) NSString *oldExternalID; // @synthesize oldExternalID=_oldExternalID;
@property (nonatomic) int sourceCalendarID; // @synthesize sourceCalendarID=_sourceCalendarID;

- (void).cxx_destruct;
- (id)initWithSourceCalendarID:(int)arg1 itemID:(int)arg2 oldExternalID:(id)arg3 changeID:(int)arg4 entityType:(int)arg5;

@end

