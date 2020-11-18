//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCFeedRange, NSArray, NSData;

@interface FCFeedDatabaseLookupResult : NSObject
{
    BOOL _exhaustedRange;
    NSArray *_feedItems;
    FCFeedRange *_feedRange;
    NSData *_ckFromCursor;
    unsigned long long _ckFromOrder;
    unsigned long long _ckToOrder;
    id _insertionToken;
}

@property (copy, nonatomic) NSData *ckFromCursor; // @synthesize ckFromCursor=_ckFromCursor;
@property (nonatomic) unsigned long long ckFromOrder; // @synthesize ckFromOrder=_ckFromOrder;
@property (nonatomic) unsigned long long ckToOrder; // @synthesize ckToOrder=_ckToOrder;
@property (nonatomic) BOOL exhaustedRange; // @synthesize exhaustedRange=_exhaustedRange;
@property (copy, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property (copy, nonatomic) FCFeedRange *feedRange; // @synthesize feedRange=_feedRange;
@property (strong, nonatomic) id insertionToken; // @synthesize insertionToken=_insertionToken;

- (void).cxx_destruct;
- (id)description;

@end
