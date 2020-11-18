//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAAction.h>

@interface ASEmailChangeFlagsAction : DAAction
{
    BOOL _read;
    BOOL _flagged;
    unsigned long long _changedFlags;
}

@property (nonatomic) unsigned long long changedFlags; // @synthesize changedFlags=_changedFlags;
@property (nonatomic) BOOL flagged; // @synthesize flagged=_flagged;
@property (nonatomic) BOOL read; // @synthesize read=_read;

- (void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (id)initWithServerID:(id)arg1 read:(BOOL)arg2 flagged:(BOOL)arg3 changedFlags:(unsigned long long)arg4;

@end

