//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CommunicationFilterItem;

@interface CommunicationFilterItemCache : NSObject
{
    CommunicationFilterItem *_filterItem;
    long long _isInList;
}

@property (nonatomic) long long isInList; // @synthesize isInList=_isInList;

- (void)dealloc;
- (id)initWithFilterItem:(id)arg1 isInList:(long long)arg2;
- (BOOL)matchesItem:(id)arg1;

@end
