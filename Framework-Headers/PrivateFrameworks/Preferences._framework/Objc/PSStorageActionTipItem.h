//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface PSStorageActionTipItem : NSObject
{
    BOOL _recoverable;
    long long _size;
    NSDate *_lastUsedDate;
    NSDate *_createdDate;
}

@property (strong) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property (strong) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property (getter=isRecoverable) BOOL recoverable; // @synthesize recoverable=_recoverable;
@property long long size; // @synthesize size=_size;

- (void).cxx_destruct;

@end
